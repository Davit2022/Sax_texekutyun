const { Builder, By, until } = require("selenium-webdriver");
fs = require("fs");

async function get_instagram_followers_data() {
  const credentials = process.argv.slice(2);
  const file_path = "instagram-followers.txt";
  if (credentials.length < 2) {
    console.log("Missing username and password");
    return;
  }

  const driver = await new Builder().forBrowser("firefox").build();
  await driver.get("https://www.instagram.com/");
  await driver
    .wait(until.elementLocated(By.name("username"), 2000))
    .sendKeys(credentials[0]);
  await driver
    .wait(until.elementLocated(By.name("password"), 2000))
    .sendKeys(credentials[1]);
  await driver
    .wait(
      until.elementLocated(
        By.xpath(
          "/html/body/div[1]/section/main/article/div[2]/div[1]/div/form/div/div[3]/button"
        ),
        2000
      )
    )
    .click();
  await driver.sleep(6000);
  await driver.get(`https://www.instagram.com/${credentials[0]}/`);
  await driver
    .findElement(
      By.xpath("/html/body/div[1]/section/main/div/header/section/ul/li[2]/a")
    )
    .click();
  await driver.sleep(3000);

  let followers = await driver.findElements(By.xpath("//li"));
  let length = followers.length;

  do {
    length = followers.length;
    await driver.executeScript(
      "arguments[0].scrollIntoView(true);",
      followers[followers.length - 1]
    );
    await driver.sleep(3000);
    followers = await driver.findElements(By.xpath("//li"));
  } while (length != followers.length);

  fs.exists(file_path, (exists) => {
    if (exists) {
      fs.unlinkSync(file_path);
    }
  });

  for (let i = 3; i < followers.length; i++) {
    const username = await followers[i]
      .findElement(By.xpath(`.//span`))
      .getText();
    const avatar = await followers[i].findElement(By.xpath(`.//img`));
    const url = await avatar.getAttribute("src");
    let name = "";
    try {
      name = await followers[i]
        .findElement(By.xpath(`.//div[@class="wFPL8 "]`))
        .getText();
    } catch (error) {}

    fs.appendFile(
      file_path,
      `name: ${name}\nusername: ${username}\navatar url: ${url}\n`,
      function (err) {
        if (err) return console.log(err);
      }
    );
  }

  await driver.quit();
}

get_instagram_followers_data();
