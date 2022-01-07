const {Builder, By, Key, until} = require('selenium-webdriver');

(async function example(){
    let driver = await new Builder().forBrowser('chrome').build();
        await driver.get('https://facebook.com');
        await driver.findElement(By.name('id=email')).click();
        await driver.findElement(By.name('id=email')).sendKeys('davit-davit123456@mail.ru');
        await driver.findElement(By.name('id=pass')).click();
        await driver.findElement(By.name('id=pass')).sendKeys('kukaramuk20102020');
        await driver.findElement(By.name('login')).click();
        await driver.wait(until.titleIs('Facebook'), 600000);
})();
