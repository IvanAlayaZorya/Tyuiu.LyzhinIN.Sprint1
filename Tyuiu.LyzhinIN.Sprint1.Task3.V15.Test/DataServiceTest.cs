using Tyuiu.LyzhinIN.Sprint1.Task3.V15.Lib;

namespace Tyuiu.LyzhinIN.Sprint1.Task3.V15.Test
{
    [TestClass]
    public sealed class DataServiceTest
    {
        [TestMethod]
        public void ValidDist()
        {
            DataService dataService = new DataService();
            double v1, v2, S, T;
            v1 = 5;
            v2 = 5;
            S = 10;
            T = 10;
            Assert.AreEqual(110,dataService.DistanceOverTime(v1,v2,S,T));
        }
    }
}
