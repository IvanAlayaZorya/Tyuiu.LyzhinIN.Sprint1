using Tyuiu.LyzhinIN.Sprint1.Task1.V15.Lib;

namespace Tyuiu.LyzhinIN.Sprint1.Task1.V15.Test
{
    [TestClass]
    public sealed class DataServiceTest
    {
        //(4+2*x)/7

        [TestMethod]
        public void ValidExp()
        {
            DataService dataService = new DataService();
            double x = 1.5;
            var res = dataService.Calculate(x);
            Assert.AreEqual(1, res);
        }
    }
}
