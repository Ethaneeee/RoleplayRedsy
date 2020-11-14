	#include <a_samp>
	#include <sscanf2>
	#define FILTERSCRIPT

	#pragma tabsize 0

	new MAX_OBJECT_FIJOS;

	#define MAX_RADIO_STREAM			(500)
	#define MAX_RADIO_STREAM_MIN		(250)

	forward RemoveBuildingForPlayerEx(playerid);

	public RemoveBuildingForPlayerEx(playerid)
	{
                       /*——————————————————————————————————————————————————< REMOVES >——————————————————————————————————————————————————*/

//Mapeo Barrio: Nose
RemoveBuildingForPlayer(playerid, 3695, 2239.9297, -1790.6953, 17.0078, 0.25);
RemoveBuildingForPlayer(playerid, 3695, 2282.9922, -1790.6953, 17.0078, 0.25);
RemoveBuildingForPlayer(playerid, 3695, 2314.8203, -1790.6953, 17.0078, 0.25);
RemoveBuildingForPlayer(playerid, 3695, 2352.7188, -1790.6953, 17.0078, 0.25);
RemoveBuildingForPlayer(playerid, 3695, 2387.8203, -1790.6953, 17.0078, 0.25);
RemoveBuildingForPlayer(playerid, 3584, 2239.9297, -1790.6953, 17.0078, 0.25);
RemoveBuildingForPlayer(playerid, 620, 2258.3438, -1804.7422, 12.0938, 0.25);
RemoveBuildingForPlayer(playerid, 645, 2259.2656, -1773.2422, 11.1250, 0.25);
RemoveBuildingForPlayer(playerid, 17886, 2264.0391, -1789.2578, 20.7734, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2265.2969, -1791.0000, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2265.2969, -1796.4531, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2265.2969, -1807.3281, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2265.2969, -1801.8672, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2265.2969, -1770.0469, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2265.2969, -1775.5078, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2265.2969, -1780.9844, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 620, 2275.3906, -1820.7266, 12.0938, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2268.1875, -1810.0313, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2273.6953, -1810.0313, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 3584, 2282.9922, -1790.6953, 17.0078, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2267.8125, -1767.2734, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2273.3359, -1767.3438, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 620, 2271.6484, -1772.3984, 8.3516, 0.25);
RemoveBuildingForPlayer(playerid, 645, 2285.7578, -1762.1250, 12.2891, 0.25);
RemoveBuildingForPlayer(playerid, 1226, 2297.8984, -1793.8203, 16.4219, 0.25);
RemoveBuildingForPlayer(playerid, 620, 2297.3828, -1798.5391, 8.3516, 0.25);
RemoveBuildingForPlayer(playerid, 620, 2297.1484, -1775.8750, 8.3516, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2305.0625, -1810.0313, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2302.1719, -1807.3281, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2302.1719, -1801.8672, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2302.1719, -1791.0000, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2302.1719, -1796.4531, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 3584, 2314.8203, -1790.6953, 17.0078, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2302.1719, -1775.5078, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2302.1719, -1770.0469, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2302.1719, -1780.9844, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2304.7813, -1767.3828, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1307, 2322.6484, -1815.4141, 12.7500, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2341.7578, -1810.0313, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2338.8672, -1807.3281, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2338.8672, -1801.8672, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1226, 2335.6484, -1796.6328, 16.4219, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2338.8672, -1791.0000, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2338.8672, -1796.4531, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 620, 2334.7109, -1785.0625, 12.0938, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2338.8672, -1775.5078, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2338.8672, -1780.9844, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 17887, 2343.6094, -1784.5078, 20.3125, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2338.8672, -1770.0469, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2341.3828, -1767.2734, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1307, 2295.7031, -1742.1953, 12.7500, 0.25);
RemoveBuildingForPlayer(playerid, 1307, 2331.2656, -1742.4141, 12.7500, 0.25);
RemoveBuildingForPlayer(playerid, 3584, 2352.7188, -1790.6953, 17.0078, 0.25);
RemoveBuildingForPlayer(playerid, 1307, 2364.2500, -1742.1172, 12.7500, 0.25);
RemoveBuildingForPlayer(playerid, 620, 2367.6484, -1780.7734, 11.0469, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2374.1016, -1800.4688, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2374.1016, -1805.9297, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2376.9922, -1813.9297, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2374.1016, -1811.3828, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2374.1016, -1780.9844, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2374.1016, -1789.6016, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2374.1016, -1795.0547, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2376.6172, -1767.2734, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2374.1016, -1770.0469, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 1408, 2374.1016, -1775.5078, 13.1563, 0.25);
RemoveBuildingForPlayer(playerid, 3584, 2387.8203, -1790.6953, 17.0078, 0.25);
RemoveBuildingForPlayer(playerid, 17518, 2361.9375, -1699.9375, 15.9219, 0.25);


//Mapeo Mansion: Vinewood
RemoveBuildingForPlayer(playerid, 708, 2308.507, -956.625, 65.445, 0.250);
RemoveBuildingForPlayer(playerid, 617, 2334.656, -1006.656, 57.648, 0.250);


//Mapeo Gaso: Idlewood
RemoveBuildingForPlayer(playerid, 955, 1928.729, -1772.449, 12.945, 0.250);
RemoveBuildingForPlayer(playerid, 1226, 1951.930, -1756.520, 16.359, 0.250);
RemoveBuildingForPlayer(playerid, 1283, 1952.520, -1751.380, 15.554, 0.250);
	



//Mapeo Barrio Idlewood
RemoveBuildingForPlayer(playerid, 3662, 2142.7031, -1657.9297, 17.5547, 0.25);
RemoveBuildingForPlayer(playerid, 3662, 2164.9375, -1666.3047, 17.5547, 0.25);
RemoveBuildingForPlayer(playerid, 3662, 2141.8672, -1693.3516, 17.5547, 0.25);
RemoveBuildingForPlayer(playerid, 3662, 2154.3516, -1713.6641, 17.4844, 0.25);
RemoveBuildingForPlayer(playerid, 5633, 2089.3594, -1643.9297, 18.2188, 0.25);
RemoveBuildingForPlayer(playerid, 1501, 2138.3438, -1697.1094, 14.0703, 0.25);
RemoveBuildingForPlayer(playerid, 3661, 2141.8672, -1693.3516, 17.5547, 0.25);
RemoveBuildingForPlayer(playerid, 3661, 2154.3516, -1713.6641, 17.4844, 0.25);
RemoveBuildingForPlayer(playerid, 1501, 2150.8281, -1717.4297, 14.0703, 0.25);
RemoveBuildingForPlayer(playerid, 1308, 2138.8984, -1678.9688, 14.1797, 0.25);
RemoveBuildingForPlayer(playerid, 3661, 2142.7031, -1657.9297, 17.5547, 0.25);
RemoveBuildingForPlayer(playerid, 1501, 2142.8594, -1663.0859, 14.0703, 0.25);
RemoveBuildingForPlayer(playerid, 1501, 2165.1094, -1671.4531, 14.0703, 0.25);
RemoveBuildingForPlayer(playerid, 3661, 2164.9375, -1666.3047, 17.5547, 0.25);



//Mapeo Favel By Abelleira
      RemoveBuildingForPlayer(playerid, 710, 2422.8516, -1022.1953, 66.4453, 0.25);
      RemoveBuildingForPlayer(playerid, 709, 2653.4219, -909.7031, 71.0625, 0.25);
      RemoveBuildingForPlayer(playerid, 706, 2691.1953, -849.9297, 63.0234, 0.25);
      RemoveBuildingForPlayer(playerid, 706, 2699.8438, -961.7969, 75.1250, 0.25);
      RemoveBuildingForPlayer(playerid, 709, 2626.3828, -847.2813, 71.7656, 0.25);
      RemoveBuildingForPlayer(playerid, 706, 2559.3047, -915.7422, 81.7266, 0.25);
      RemoveBuildingForPlayer(playerid, 3298, 2512.1797, -1023.9219, 69.5313, 0.25);
      RemoveBuildingForPlayer(playerid, 3298, 2578.9531, -1029.9844, 69.0859, 0.25);
      RemoveBuildingForPlayer(playerid, 3300, 2544.5469, -1029.1250, 70.4688, 0.25);
      RemoveBuildingForPlayer(playerid, 3299, 2493.3906, -944.1484, 81.6094, 0.25);
      RemoveBuildingForPlayer(playerid, 3299, 2564.9609, -1028.2422, 69.0078, 0.25); 
      RemoveBuildingForPlayer(playerid, 620, 2417.4922, -1015.3516, 50.3359, 0.25);
      RemoveBuildingForPlayer(playerid, 700, 2443.3594, -1015.9219, 54.2266, 0.25);
      RemoveBuildingForPlayer(playerid, 673, 2447.0625, -1021.2734, 56.2734, 0.25);
      RemoveBuildingForPlayer(playerid, 660, 2467.0391, -1021.4063, 59.5234, 0.25);
      RemoveBuildingForPlayer(playerid, 617, 2492.2969, -1029.8594, 64.9531, 0.25);
      RemoveBuildingForPlayer(playerid, 617, 2520.8984, -1031.3750, 67.9531, 0.25);
      RemoveBuildingForPlayer(playerid, 3241, 2512.1797, -1023.9219, 69.5313, 0.25);
      RemoveBuildingForPlayer(playerid, 656, 2511.2734, -1014.6641, 68.0391, 0.25);
      RemoveBuildingForPlayer(playerid, 700, 2443.0000, -1006.6641, 55.9688, 0.25);
      RemoveBuildingForPlayer(playerid, 673, 2441.3672, -967.4766, 79.0703, 0.25);
      RemoveBuildingForPlayer(playerid, 671, 2471.6250, -976.6953, 78.6953, 0.25);
      RemoveBuildingForPlayer(playerid, 1410, 2468.1172, -975.4297, 79.7422, 0.25);
      RemoveBuildingForPlayer(playerid, 617, 2484.9297, -966.9922, 80.1641, 0.25);
      RemoveBuildingForPlayer(playerid, 673, 2516.9688, -979.1406, 80.9766, 0.25);
      RemoveBuildingForPlayer(playerid, 1407, 2508.9844, -977.7891, 81.3359, 0.25);
      RemoveBuildingForPlayer(playerid, 1410, 2486.6563, -952.0859, 81.9453, 0.25);
      RemoveBuildingForPlayer(playerid, 3283, 2493.3906, -944.1484, 81.6094, 0.25);
      RemoveBuildingForPlayer(playerid, 656, 2536.5000, -1019.5859, 69.3281, 0.25);
      RemoveBuildingForPlayer(playerid, 3285, 2544.5469, -1029.1250, 70.4688, 0.25);
      RemoveBuildingForPlayer(playerid, 3241, 2578.9531, -1029.9844, 69.0859, 0.25);
      RemoveBuildingForPlayer(playerid, 3283, 2564.9609, -1028.2422, 69.0078, 0.25);
      RemoveBuildingForPlayer(playerid, 659, 2555.4297, -1026.7969, 68.2500, 0.25);
      RemoveBuildingForPlayer(playerid, 659, 2568.9375, -1021.5078, 68.0938, 0.25);
      RemoveBuildingForPlayer(playerid, 620, 2693.3984, -1037.4609, 68.1094, 0.25);
      RemoveBuildingForPlayer(playerid, 620, 2731.0938, -1037.1016, 54.4219, 0.25);
      RemoveBuildingForPlayer(playerid, 620, 2765.2813, -1037.1016, 41.8438, 0.25);
      RemoveBuildingForPlayer(playerid, 617, 2540.5859, -975.1641, 80.7422, 0.25);
      RemoveBuildingForPlayer(playerid, 617, 2620.9688, -966.2422, 78.8828, 0.25);
      RemoveBuildingForPlayer(playerid, 671, 2571.2422, -958.1016, 80.6484, 0.25);
        


       //Mapeo Cancha Futbol By Hanks
	RemoveBuildingForPlayer(playerid, 620, 2114.5547, -1928.1875, 5.0313, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2113.3984, -1925.0391, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2115.6719, -1922.7656, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2123.3594, -1928.0703, 6.8438, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2122.6563, -1916.7891, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2116.9297, -1916.0781, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2121.5078, -1909.5313, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2110.2734, -1906.5859, 5.0313, 0.25);

	//Mapeo Unity By Hanks
	RemoveBuildingForPlayer(playerid, 4098, 1622.6250, -1824.7891, 17.4922, 0.25);
	RemoveBuildingForPlayer(playerid, 1266, 1648.0156, -1795.0703, 25.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 4229, 1597.9063, -1699.7500, 30.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 4230, 1597.9063, -1699.7500, 30.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 4085, 1622.6250, -1824.7891, 17.4922, 0.25);
	RemoveBuildingForPlayer(playerid, 1260, 1648.0156, -1795.0703, 25.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 642, 1561.7969, -1894.7578, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 643, 1561.8203, -1894.7188, 12.8672, 0.25);
	RemoveBuildingForPlayer(playerid, 625, 1566.1797, -1893.1016, 13.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 625, 1573.4531, -1893.1016, 13.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 642, 1573.9766, -1894.8281, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 643, 1574.0000, -1894.7891, 12.8672, 0.25);
	RemoveBuildingForPlayer(playerid, 642, 1561.7969, -1889.8906, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 643, 1561.8203, -1889.8594, 12.8672, 0.25);
	RemoveBuildingForPlayer(playerid, 625, 1566.1797, -1887.3438, 13.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 642, 1561.6250, -1884.8672, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 643, 1561.6484, -1884.8281, 12.8672, 0.25);
	RemoveBuildingForPlayer(playerid, 625, 1573.4531, -1887.3438, 13.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 643, 1574.0000, -1889.9453, 12.8672, 0.25);
	RemoveBuildingForPlayer(playerid, 642, 1573.9766, -1889.9844, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 642, 1574.0156, -1884.9531, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 643, 1574.0391, -1884.9219, 12.8672, 0.25);

	//Mapeo Idlewood By Hanks
	RemoveBuildingForPlayer(playerid, 1490, 2046.4063, -1635.8438, 13.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2020.7344, -1689.4297, 12.0938, 0.25);
	RemoveBuildingForPlayer(playerid, 673, 2064.0313, -1687.7031, 12.5156, 0.25);

	//Mapeo Idlewood by Frann
	RemoveBuildingForPlayer(playerid, 5515, 1931.6484, -1577.5703, 12.3594, 0.25);
	RemoveBuildingForPlayer(playerid, 5516, 1977.8359, -1569.0469, 19.0703, 0.25);
	RemoveBuildingForPlayer(playerid, 740, 1887.1953, -1565.8984, 9.7813, 0.25);
	RemoveBuildingForPlayer(playerid, 740, 1863.3125, -1568.6484, 11.7734, 0.25);
	RemoveBuildingForPlayer(playerid, 1524, 1959.3984, -1577.7578, 13.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 5474, 1931.6484, -1577.5703, 12.3594, 0.25);
	RemoveBuildingForPlayer(playerid, 700, 1942.5625, -1599.2969, 12.9922, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1954.3594, -1603.6406, 12.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 5475, 1977.8359, -1569.0469, 19.0703, 0.25);
	RemoveBuildingForPlayer(playerid, 700, 2021.3359, -1599.2969, 12.9922, 0.25);

	//Mapeo Villa By Hanks
	RemoveBuildingForPlayer(playerid, 17535, 2364.0547, -1391.5313, 41.3516, 0.25);
	RemoveBuildingForPlayer(playerid, 17722, 2411.1641, -1402.8828, 28.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 17735, 2386.6406, -1454.3438, 27.2266, 0.25);
	RemoveBuildingForPlayer(playerid, 17754, 2402.3125, -1503.5938, 28.9922, 0.25);
	RemoveBuildingForPlayer(playerid, 17820, 2391.1797, -1414.3281, 22.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1490, 2353.5391, -1508.2109, 24.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 1490, 2394.1016, -1468.3672, 24.7813, 0.25);
	RemoveBuildingForPlayer(playerid, 1261, 2369.2422, -1403.8672, 41.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 17967, 2431.3672, -1393.3281, 25.3750, 0.25);
	RemoveBuildingForPlayer(playerid, 1266, 2356.5781, -1454.6484, 36.2734, 0.25);
	RemoveBuildingForPlayer(playerid, 17970, 2364.0547, -1391.5313, 41.3516, 0.25);
	RemoveBuildingForPlayer(playerid, 1307, 2385.7578, -1511.8516, 23.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1533, 2419.3047, -1510.4844, 22.9922, 0.25);
	RemoveBuildingForPlayer(playerid, 17534, 2402.3125, -1503.5938, 28.9922, 0.25);
	RemoveBuildingForPlayer(playerid, 1537, 2419.3047, -1507.4688, 22.9922, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 2426.2344, -1503.8047, 26.2266, 0.25);
	RemoveBuildingForPlayer(playerid, 1307, 2352.9922, -1481.8516, 23.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 669, 2386.4922, -1482.2813, 23.7344, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2385.6953, -1479.7031, 24.2891, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2391.0313, -1479.7031, 24.2891, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2396.3672, -1479.7031, 24.2891, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2401.7031, -1479.7031, 24.2891, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2407.0391, -1479.7031, 24.2891, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2412.3672, -1479.7031, 24.2891, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 2417.8047, -1479.7031, 24.2891, 0.25);
	RemoveBuildingForPlayer(playerid, 1260, 2356.5859, -1454.6406, 36.2813, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 2347.1406, -1434.1250, 26.2266, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 2375.9141, -1422.9453, 23.1953, 0.25);
	RemoveBuildingForPlayer(playerid, 3593, 2377.4141, -1427.9922, 23.6875, 0.25);
	RemoveBuildingForPlayer(playerid, 17504, 2378.6719, -1455.2578, 26.7422, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2379.1797, -1443.7969, 22.7266, 0.25);
	RemoveBuildingForPlayer(playerid, 700, 2378.2891, -1435.5234, 23.3984, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 2362.4531, -1394.7422, 23.1953, 0.25);
	RemoveBuildingForPlayer(playerid, 1267, 2369.2422, -1403.8672, 41.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 700, 2378.2891, -1405.6328, 23.3984, 0.25);
	RemoveBuildingForPlayer(playerid, 17503, 2386.6406, -1454.3438, 27.2266, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 2386.4297, -1431.9766, 26.2266, 0.25);
	RemoveBuildingForPlayer(playerid, 17637, 2391.1797, -1414.3281, 22.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 17636, 2411.1641, -1402.8828, 28.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 17526, 2431.3672, -1393.3281, 25.3750, 0.25);

	//Mappeo Calle Grove by Hanks
	RemoveBuildingForPlayer(playerid, 1311, 2234.7500, -1737.4766, 16.5547, 0.25);

	//-> Obelisco | By. NúO
	RemoveBuildingForPlayer(playerid, 4828, 1474.4141, -2286.7969, 26.3594, 0.25);
	RemoveBuildingForPlayer(playerid, 4942, 1474.4141, -2286.7969, 26.3594, 0.25);
	RemoveBuildingForPlayer(playerid, 4985, 1394.9453, -2286.1563, 17.5391, 0.25);

	//-> Casas del 24/7 Ayuntamiento | By. NúO
	RemoveBuildingForPlayer(playerid, 4049, 1330.3750, -1793.0781, 22.9688, 0.25);
	RemoveBuildingForPlayer(playerid, 4219, 1330.3281, -1792.5938, 23.4922, 0.25);
	RemoveBuildingForPlayer(playerid, 1265, 1336.1563, -1844.0156, 12.9844, 0.25);
	RemoveBuildingForPlayer(playerid, 1372, 1336.3359, -1842.8516, 12.6641, 0.25);
	RemoveBuildingForPlayer(playerid, 1265, 1336.3750, -1841.5391, 13.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1265, 1337.2578, -1841.8750, 13.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 1265, 1336.8750, -1818.2266, 12.9844, 0.25);
	RemoveBuildingForPlayer(playerid, 1372, 1336.7891, -1816.3047, 12.6641, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1338.1250, -1816.5781, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1230, 1338.0781, -1815.7578, 12.9766, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1338.8984, -1816.1641, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1342.2734, -1806.2031, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1230, 1342.6328, -1807.0391, 12.9766, 0.25);
	RemoveBuildingForPlayer(playerid, 1221, 1342.5156, -1805.0703, 12.9844, 0.25);
	RemoveBuildingForPlayer(playerid, 4231, 1342.0547, -1800.2188, 25.4297, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1338.9531, -1796.4297, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1230, 1338.9609, -1796.0000, 13.6641, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1338.9375, -1795.4609, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 4112, 1330.3750, -1793.0781, 22.9688, 0.25);
	RemoveBuildingForPlayer(playerid, 1221, 1338.9688, -1793.7266, 12.9844, 0.25);
	RemoveBuildingForPlayer(playerid, 1372, 1337.6953, -1774.7344, 12.6641, 0.25);
	RemoveBuildingForPlayer(playerid, 1265, 1338.7891, -1775.3203, 12.9688, 0.25);
	RemoveBuildingForPlayer(playerid, 1265, 1337.0078, -1773.8672, 13.0000, 0.25);

	//-> Leñador | By. Edinson
	RemoveBuildingForPlayer(playerid, 1454, -574.3906, -1476.8203, 10.3828, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -577.3438, -1478.5703, 10.6563, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -580.2891, -1480.3125, 10.7422, 0.25);
	RemoveBuildingForPlayer(playerid, 17457, -570.7344, -1490.3203, 15.0703, 0.25);
	RemoveBuildingForPlayer(playerid, 3286, -559.3047, -1486.3281, 12.8359, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -586.1953, -1483.7969, 11.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -584.1328, -1485.9844, 10.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -583.2422, -1482.0547, 10.7969, 0.25);

	//-> Villa 3 | By. Julian Llorca y Ema Baqué
	RemoveBuildingForPlayer(playerid, 708, 2713.0781, -1916.7109, 12.1875, 0.25);
	RemoveBuildingForPlayer(playerid, 708, 2648.6484, -1916.7109, 12.1875, 0.25);
	RemoveBuildingForPlayer(playerid, 708, 2679.6406, -1916.7109, 12.1875, 0.25);
	RemoveBuildingForPlayer(playerid, 3244, 2632.3906, -2033.4375, 12.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 3244, 2632.3906, -1954.8203, 12.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 3290, 2647.1016, -2073.3750, 12.4453, 0.25);
	RemoveBuildingForPlayer(playerid, 3290, 2658.7188, -2073.3750, 12.4453, 0.25);
	RemoveBuildingForPlayer(playerid, 3290, 2671.5000, -2073.3750, 12.4453, 0.25);
	RemoveBuildingForPlayer(playerid, 3591, 2632.2734, -2014.9844, 15.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 3654, 2695.0859, -1983.7734, 15.0625, 0.25);
	RemoveBuildingForPlayer(playerid, 3654, 2674.5547, -2026.8750, 15.0078, 0.25);
	RemoveBuildingForPlayer(playerid, 3592, 2672.5469, -1985.5469, 15.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 3647, 2694.0156, -2026.0781, 15.2656, 0.25);
	RemoveBuildingForPlayer(playerid, 3647, 2654.1484, -1983.8984, 15.2422, 0.25);
	RemoveBuildingForPlayer(playerid, 3592, 2634.1719, -1989.0547, 15.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 708, 2639.2734, -1976.3281, 12.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 708, 2687.4688, -2036.9766, 12.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 708, 2628.1094, -2006.8828, 12.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3256, 2647.1016, -2073.3750, 12.4453, 0.25);
	RemoveBuildingForPlayer(playerid, 3256, 2658.7188, -2073.3750, 12.4453, 0.25);
	RemoveBuildingForPlayer(playerid, 3256, 2671.5000, -2073.3750, 12.4453, 0.25);
	RemoveBuildingForPlayer(playerid, 671, 2637.3594, -2023.8594, 12.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 671, 2660.2813, -2034.0000, 12.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 712, 2680.2578, -2037.5469, 21.7188, 0.25);
	RemoveBuildingForPlayer(playerid, 3649, 2674.5547, -2026.8750, 15.0078, 0.25);
	RemoveBuildingForPlayer(playerid, 671, 2701.0000, -2037.4141, 12.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 3648, 2694.0156, -2026.0781, 15.2656, 0.25);
	RemoveBuildingForPlayer(playerid, 1446, 2704.1172, -2020.9375, 13.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 1446, 2704.1172, -2025.6016, 13.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2663.0625, -2017.2109, 9.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 3590, 2632.2734, -2014.9844, 15.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1460, 2632.4297, -2006.4844, 13.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 1460, 2632.5391, -2001.9063, 13.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 5265, 2678.9688, -2003.8125, 21.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 1407, 2649.8281, -1993.8438, 13.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 1460, 2632.6484, -1997.3203, 13.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 1307, 2643.2969, -1986.0781, 12.2891, 0.25);
	RemoveBuildingForPlayer(playerid, 3589, 2634.1719, -1989.0547, 15.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 1407, 2647.5625, -1991.3984, 13.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 1460, 2641.5000, -1986.0703, 13.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 1407, 2657.1875, -1993.8438, 13.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 1407, 2661.8516, -1993.8438, 13.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 1460, 2664.2969, -1991.4453, 13.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 671, 2664.3750, -1987.2188, 12.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 1460, 2642.8828, -1981.8125, 13.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 1460, 2630.9141, -1973.0313, 13.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 1460, 2626.3359, -1973.0781, 13.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 3638, 2644.6172, -1955.7031, 15.7344, 0.25);
	RemoveBuildingForPlayer(playerid, 3648, 2654.1484, -1983.8984, 15.2422, 0.25);
	RemoveBuildingForPlayer(playerid, 3638, 2666.4375, -1955.7031, 15.7344, 0.25);
	RemoveBuildingForPlayer(playerid, 3589, 2672.5469, -1985.5469, 15.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 1446, 2701.7109, -2014.0234, 13.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 1446, 2704.1172, -2016.2734, 13.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 1446, 2696.9453, -2014.0234, 13.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 1446, 2690.4141, -2014.0234, 13.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 1446, 2688.1328, -2016.3672, 13.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 2699.5078, -2008.1719, 16.3203, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2702.9063, -2007.2969, 15.8203, 0.25);
	RemoveBuildingForPlayer(playerid, 712, 2680.1563, -1978.2500, 21.5313, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2682.2188, -1988.7813, 9.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 3638, 2687.1250, -1955.7031, 15.7344, 0.25);
	RemoveBuildingForPlayer(playerid, 3649, 2695.0859, -1983.7734, 15.0625, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2703.4609, -1983.5938, 9.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 17912, 2672.9141, -1883.7734, 13.8750, 0.25);
	RemoveBuildingForPlayer(playerid, 714, 2654.5781, -1900.8047, 11.6172, 0.25);
	RemoveBuildingForPlayer(playerid, 669, 2685.2422, -1914.6563, 12.3125, 0.25);

	//-> Garitas de Policía | By. NúO
	// El Corona (G-1)
	RemoveBuildingForPlayer(playerid, 620, 1949.7969, -1943.5781, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1935.6719, -1942.4063, 13.7188, 0.25);

	//-> Telefe Exterior | By. NúO
	RemoveBuildingForPlayer(playerid, 6491, 717.4844, -1357.3047, 20.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 6490, 717.4844, -1357.3047, 20.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 6516, 717.6875, -1357.2813, 18.0469, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 642.0938, -1359.8203, 16.2734, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 642.0938, -1334.8516, 16.2734, 0.25);

	//-> Departamento Commerce - By. NúO
	RemoveBuildingForPlayer(playerid, 1537, 1725.4297, -1637.4375, 19.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1533, 1728.4453, -1637.4375, 19.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 641, 1722.3750, -1620.6016, 15.7266, 0.25);
	RemoveBuildingForPlayer(playerid, 641, 1722.1797, -1615.7188, 11.7969, 0.25);

	//-> Plaza Central | By. NúO
	RemoveBuildingForPlayer(playerid, 4057, 1479.5547, -1693.1406, 19.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 4210, 1479.5625, -1631.4531, 12.0781, 0.25);
	RemoveBuildingForPlayer(playerid, 4186, 1479.5547, -1693.1406, 19.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 3985, 1479.5625, -1631.4531, 12.0781, 0.25);

	//-> Hospital Exterior | By. NúO
	RemoveBuildingForPlayer(playerid, 739, 1231.1406, -1341.8516, 12.7344, 0.25);
	RemoveBuildingForPlayer(playerid, 739, 1231.1406, -1328.0938, 12.7344, 0.25);
	RemoveBuildingForPlayer(playerid, 739, 1231.1406, -1356.2109, 12.7344, 0.25);
	RemoveBuildingForPlayer(playerid, 1440, 1085.7031, -1361.0234, 13.2656, 0.25);
	RemoveBuildingForPlayer(playerid, 1440, 1141.9844, -1346.1094, 13.2656, 0.25);
	RemoveBuildingForPlayer(playerid, 1440, 1148.6797, -1385.1875, 13.2656, 0.25);
	RemoveBuildingForPlayer(playerid, 617, 1178.6016, -1332.0703, 12.8906, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1184.0078, -1353.5000, 12.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1184.0078, -1343.2656, 12.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 618, 1177.7344, -1315.6641, 13.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1184.8125, -1292.9141, 12.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1184.8125, -1303.1484, 12.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 1190.7734, -1383.2734, 15.9453, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 1190.7734, -1350.4141, 15.9453, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 1210.8047, -1367.3828, 15.7734, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1222.6641, -1374.6094, 12.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1222.6641, -1356.5547, 12.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1240.9219, -1374.6094, 12.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1240.9219, -1356.5547, 12.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 1190.7734, -1320.8594, 15.9453, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 1210.8047, -1337.8359, 15.7734, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 1190.7734, -1299.7422, 15.9453, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 1210.8047, -1304.9688, 15.7734, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1222.6641, -1335.0547, 12.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1222.6641, -1317.7422, 12.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1240.9219, -1335.0547, 12.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1240.9219, -1317.7422, 12.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1222.6641, -1300.9219, 12.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1240.9219, -1300.9219, 12.2969, 0.25);

	//-> Villa 1 | By. LFran22
	RemoveBuildingForPlayer(playerid, 1412, 1658.8359, -2114.9609, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 1413, 1658.8359, -2109.6875, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 5134, 2045.4922, -1903.6172, 16.1875, 0.25);
	RemoveBuildingForPlayer(playerid, 1525, 2065.4375, -1897.2344, 13.6094, 0.25);
	RemoveBuildingForPlayer(playerid, 5321, 2045.4922, -1903.6172, 16.1875, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1983.1953, -1943.5781, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 2035.9063, -1928.1406, 16.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 5374, 2085.2813, -1909.7109, 23.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 2077.2500, -1894.4531, 16.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 955, 2060.1172, -1897.6406, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2084.5313, -1905.4922, 15.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2092.9141, -1891.3750, 15.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 2114.3203, -1890.3672, 16.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 2101.2578, -1900.1797, 16.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 2134.6016, -1900.4063, 16.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 2155.2344, -1890.3672, 16.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2078.6328, -1883.3281, 15.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1962.6016, -1823.5234, 15.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 1224, 2127.0234, -1845.6641, 3.5938, 0.25);

	//-> Penal | By. NúO
	RemoveBuildingForPlayer(playerid, 3366, 276.6563, 2023.7578, 16.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3366, 276.6563, 1989.5469, 16.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3366, 276.6563, 1955.7656, 16.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 1411, 347.1953, 1799.2656, 18.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1411, 342.9375, 1796.2891, 18.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 16670, 330.7891, 1813.2188, 17.8281, 0.25);
	RemoveBuildingForPlayer(playerid, 16095, 279.1328, 1829.7813, 16.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 16094, 191.1406, 1870.0391, 21.4766, 0.25);
	RemoveBuildingForPlayer(playerid, 16096, 120.5078, 1934.0313, 19.8281, 0.25);
	RemoveBuildingForPlayer(playerid, 16671, 193.9531, 2051.7969, 20.1797, 0.25);
	RemoveBuildingForPlayer(playerid, 3268, 276.6563, 2023.7578, 16.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3268, 276.6563, 1989.5469, 16.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3268, 276.6563, 1955.7656, 16.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3267, 354.4297, 2028.4922, 22.4141, 0.25);
	RemoveBuildingForPlayer(playerid, 3277, 354.4141, 2028.5000, 22.3750, 0.25);
	RemoveBuildingForPlayer(playerid, 16668, 357.9375, 2049.4219, 16.8438, 0.25);
	RemoveBuildingForPlayer(playerid, 16669, 380.2578, 1914.9609, 17.4297, 0.25);

	//-> PC Interior | By. NúO
	RemoveBuildingForPlayer(playerid, 2165, 223.0703, 120.0625, 998.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2165, 223.0703, 122.0469, 998.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 223.3984, 120.4219, 998.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 2356, 224.2031, 121.7266, 997.9922, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 226.7500, 119.2578, 998.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 2165, 227.1094, 118.9297, 998.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 14895, 234.7031, 122.0625, 1004.3203, 0.25);
	RemoveBuildingForPlayer(playerid, 1722, 240.2891, 108.7500, 1002.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1722, 240.2891, 109.4375, 1002.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1722, 240.2891, 110.0859, 1002.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1722, 240.2891, 110.7500, 1002.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1722, 252.5391, 113.2891, 1002.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1722, 252.5391, 113.9531, 1002.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1722, 252.5391, 114.6016, 1002.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1722, 252.5391, 115.2891, 1002.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 14851, 246.2500, 118.1484, 1005.9063, 0.25);
	RemoveBuildingForPlayer(playerid, 14847, 246.2344, 117.8047, 1005.6094, 0.25);

	//-> PC Exterior | By. NúO
	RemoveBuildingForPlayer(playerid, 1266, 1538.5234, -1609.8047, 19.8438, 0.25);
	RemoveBuildingForPlayer(playerid, 4229, 1597.9063, -1699.7500, 30.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 4230, 1597.9063, -1699.7500, 30.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1260, 1538.5234, -1609.8047, 19.8438, 0.25);
	RemoveBuildingForPlayer(playerid, 1266, 1538.5234, -1609.8047, 19.8438, 0.25);
	RemoveBuildingForPlayer(playerid, 4229, 1597.9063, -1699.7500, 30.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 4230, 1597.9063, -1699.7500, 30.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1541.4453, -1713.3047, 14.4297, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1541.4531, -1709.6406, 13.0469, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1541.2969, -1702.6016, 14.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1546.6016, -1693.3906, 14.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1547.5703, -1689.9844, 13.0469, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1546.8672, -1687.1016, 14.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 646, 1545.5234, -1678.8438, 14.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 646, 1553.8672, -1677.7266, 16.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 646, 1553.8672, -1673.4609, 16.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 646, 1545.5625, -1672.2188, 14.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1546.6016, -1664.6250, 14.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1546.8672, -1658.3438, 14.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1547.5703, -1661.0313, 13.0469, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1541.4766, -1648.4531, 14.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1541.4531, -1642.0313, 13.0469, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1541.7422, -1638.9141, 14.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 1260, 1538.5234, -1609.8047, 19.8438, 0.25);
	RemoveBuildingForPlayer(playerid, 1525, 1549.8906, -1714.5234, 15.1016, 0.25);
	RemoveBuildingForPlayer(playerid, 1490, 2353.5391, -1508.2109, 24.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 2347.1406, -1498.8516, 26.2266, 0.25);
	RemoveBuildingForPlayer(playerid, 4064, 1571.6016, -1675.7500, 35.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 3976, 1571.6016, -1675.7500, 35.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 4063, 1578.4688, -1676.4219, 13.0703, 0.25);
	RemoveBuildingForPlayer(playerid, 3975, 1578.4688, -1676.4219, 13.0703, 0.25);

	//-> Villa 2 | By. LFran22
	RemoveBuildingForPlayer(playerid, 3669, 1669.9141, -2126.1563, 15.3359, 0.25);
	RemoveBuildingForPlayer(playerid, 3670, 1668.7266, -2096.1953, 15.1875, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1658.8359, -2114.9609, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 1413, 1658.8359, -2109.6875, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 3634, 1669.9141, -2126.1563, 15.3359, 0.25);
	RemoveBuildingForPlayer(playerid, 3635, 1668.7266, -2096.1953, 15.1875, 0.25);

	//-> Granjeros | By. NúO
	RemoveBuildingForPlayer(playerid, 3425, -370.3750, -1446.9688, 35.9531, 0.25);
	RemoveBuildingForPlayer(playerid, 17298, -366.6719, -1422.6875, 30.3750, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -372.1797, -1434.6094, 25.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -369.1953, -1434.6094, 25.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -366.2031, -1434.6094, 25.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -363.2109, -1434.6094, 25.3984, 0.25);

	//-> B. Camionero | By. NúO
	RemoveBuildingForPlayer(playerid, 5305, 2198.8516, -2213.9219, 14.8828, 0.25);
	RemoveBuildingForPlayer(playerid, 3747, 2234.3906, -2244.8281, 14.9375, 0.25);
	RemoveBuildingForPlayer(playerid, 3747, 2226.9688, -2252.1406, 14.9375, 0.25);
	RemoveBuildingForPlayer(playerid, 3747, 2219.4219, -2259.5234, 14.8828, 0.25);
	RemoveBuildingForPlayer(playerid, 3747, 2212.0938, -2267.0703, 14.9375, 0.25);
	RemoveBuildingForPlayer(playerid, 3747, 2204.6328, -2274.4141, 14.9375, 0.25);
	RemoveBuildingForPlayer(playerid, 3569, 2204.6328, -2274.4141, 14.9375, 0.25);
	RemoveBuildingForPlayer(playerid, 3569, 2212.0938, -2267.0703, 14.9375, 0.25);
	RemoveBuildingForPlayer(playerid, 3569, 2219.4219, -2259.5234, 14.8828, 0.25);
	RemoveBuildingForPlayer(playerid, 3569, 2226.9688, -2252.1406, 14.9375, 0.25);
	RemoveBuildingForPlayer(playerid, 3569, 2234.3906, -2244.8281, 14.9375, 0.25);
	RemoveBuildingForPlayer(playerid, 5244, 2198.8516, -2213.9219, 14.8828, 0.25);

	//-> E1. Bayside | By. NúO
	RemoveBuildingForPlayer(playerid, 688, -2668.2188, 2304.3125, 22.6172, 0.25);
	RemoveBuildingForPlayer(playerid, 9391, -2631.0391, 2314.3125, 11.1172, 0.25);
	RemoveBuildingForPlayer(playerid, 9427, -2631.2891, 2287.6797, 11.1250, 0.25);
	RemoveBuildingForPlayer(playerid, 9275, -2631.2891, 2287.6797, 11.1250, 0.25);
	RemoveBuildingForPlayer(playerid, 715, -2625.8125, 2300.8047, 15.1094, 0.25);
	RemoveBuildingForPlayer(playerid, 9347, -2630.1328, 2301.0234, 7.9063, 0.25);
	RemoveBuildingForPlayer(playerid, 647, -2628.4219, 2301.7891, 8.5625, 0.25);
	RemoveBuildingForPlayer(playerid, 9258, -2631.0391, 2314.3125, 11.1172, 0.25);
	RemoveBuildingForPlayer(playerid, 715, -2626.7891, 2327.8984, 15.0859, 0.25);

	//-> Ayuntamiento (Exterior) | By. NúO
	RemoveBuildingForPlayer(playerid, 1220, 1420.4922, -1842.4375, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1419.7266, -1842.8516, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1230, 1419.6719, -1842.0313, 12.9766, 0.25);
	RemoveBuildingForPlayer(playerid, 1231, 1432.3047, -1832.9141, 15.2891, 0.25);
	RemoveBuildingForPlayer(playerid, 4003, 1481.0781, -1747.0313, 33.5234, 0.25);

	//-> Renta de Vehículos (El Corona) | By. NúO
	RemoveBuildingForPlayer(playerid, 1413, 1879.9922, -1879.8906, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 1413, 1885.2578, -1879.8984, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 1413, 1864.1797, -1879.6641, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 1413, 1869.4609, -1879.6641, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1874.7344, -1879.6641, 13.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 1412, 1890.5234, -1879.6641, 13.6797, 0.25);

	//-> Bar (Villa 2) | By. NúO
	RemoveBuildingForPlayer(playerid, 3669, 1762.4453, -2096.7109, 15.0469, 0.25);
	RemoveBuildingForPlayer(playerid, 3670, 1782.7109, -2090.5234, 15.1719, 0.25);
	RemoveBuildingForPlayer(playerid, 5025, 1728.0703, -2125.8047, 21.1797, 0.25);
	RemoveBuildingForPlayer(playerid, 3634, 1762.4453, -2096.7109, 15.0469, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 1772.1172, -2108.6953, 16.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1770.5234, -2102.5391, 12.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 3635, 1782.7109, -2090.5234, 15.1719, 0.25);

	//-> Edificios de El Corona | By. NúO
	RemoveBuildingForPlayer(playerid, 3668, 1852.8047, -1909.7969, 16.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 3668, 1871.0313, -1907.3203, 16.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 3668, 1890.6953, -1909.9297, 16.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 3668, 1912.2500, -1907.4375, 16.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 3668, 1927.3984, -1911.4375, 16.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 3668, 1943.0078, -1910.1016, 16.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1844.4219, -1922.5469, 11.5391, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1868.0859, -1921.5313, 11.5391, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1887.4453, -1926.8203, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 673, 1880.4766, -1919.4609, 11.4453, 0.25);
	RemoveBuildingForPlayer(playerid, 1307, 1891.3672, -1922.3438, 12.5469, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1913.6563, -1926.7656, 10.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1915.4063, -1922.4922, 11.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1939.0703, -1922.3828, 11.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 673, 1919.3203, -1919.1719, 14.4609, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 1836.7188, -1898.8984, 13.7344, 0.25);
	RemoveBuildingForPlayer(playerid, 3587, 1852.8047, -1909.7969, 16.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 4981, 1898.3984, -1913.4063, 20.8203, 0.25);
	RemoveBuildingForPlayer(playerid, 5084, 1898.3984, -1913.4063, 20.8203, 0.25);
	RemoveBuildingForPlayer(playerid, 3587, 1890.6953, -1909.9297, 16.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 3587, 1871.0313, -1907.3203, 16.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 3587, 1912.2500, -1907.4375, 16.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 3587, 1927.3984, -1911.4375, 16.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 3587, 1943.0078, -1910.1016, 16.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 673, 1948.8984, -1892.7344, 11.4453, 0.25);

	//-> Peaje: LS y LV | By. NúO
	RemoveBuildingForPlayer(playerid, 620, 2889.5234, -692.9141, 9.4844, 0.25);

	//-> Peaje: SF y Pueblos | By. Edinson
	RemoveBuildingForPlayer(playerid, 9868, -2681.3516, 1274.6094, 57.4219, 0.25);
	RemoveBuildingForPlayer(playerid, 9623, -2681.3516, 1274.6094, 57.4219, 0.25);

	//-> Gasolinera Grotti | By. ZC
	RemoveBuildingForPlayer(playerid, 4194, 1360.3828, -1840.6172, 26.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 4226, 1359.2813, -1796.4688, 24.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 1265, 1337.2578, -1841.8750, 13.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 4193, 1360.3828, -1840.6172, 26.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1340.8906, -1835.3672, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1230, 1340.1328, -1835.0391, 12.9766, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1340.8672, -1834.4844, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1220, 1342.2734, -1806.2031, 12.9297, 0.25);
	RemoveBuildingForPlayer(playerid, 1230, 1342.6328, -1807.0391, 12.9766, 0.25);
	RemoveBuildingForPlayer(playerid, 1221, 1342.5156, -1805.0703, 12.9844, 0.25);
	RemoveBuildingForPlayer(playerid, 4023, 1359.2813, -1796.4688, 24.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 1230, 1338.9609, -1796.0000, 13.6641, 0.25);

		return 1;
		}

		stock cargar_maps()
		{
	                       /*——————————————————————————————————————————————————< MAPAS >——————————————————————————————————————————————————*/

	 //-> Barrio idlewood | By. Abelleira
CreateObject(12938, 2149.31860, -1700.24500, 17.98168,   0.00000, 0.00000, -88.80000);
CreateObject(12940, 2148.39282, -1666.28088, 17.90306,   0.00000, 0.00000, -87.24002);
CreateObject(1264, 2175.75977, -1664.65320, 14.57031,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2175.12280, -1664.71887, 14.57031,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2174.78638, -1664.25952, 14.57031,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2175.23853, -1663.81653, 14.57031,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2174.99268, -1664.23755, 14.86930,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2175.29199, -1664.69495, 14.86930,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2175.41211, -1664.20374, 14.86930,   3.14159, 0.00000, 2.53073);
CreateObject(14497, 2150.76831, -1692.10657, 14.58194,   0.00000, 0.00000, 0.00000);
CreateObject(1710, 2139.34204, -1677.13025, 14.07798,   0.00000, 0.00000, 59.88000);
CreateObject(1710, 2142.60400, -1681.23267, 14.07798,   0.00000, 0.00000, 147.48000);
CreateObject(1710, 2144.61060, -1676.07129, 14.07798,   0.00000, 0.00000, -98.57999);
CreateObject(1264, 2149.87866, -1668.77222, 14.27568,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2149.90942, -1668.16968, 14.27568,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2149.88501, -1667.67004, 14.27568,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2149.51147, -1668.22961, 14.27568,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2142.06396, -1672.97314, 14.27568,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2141.83276, -1672.45911, 14.27568,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2141.17041, -1672.52234, 14.27568,   3.14159, 0.00000, 2.53073);
CreateObject(1292, 2142.60107, -1698.29944, 14.58457,   0.00000, 0.00000, -135.00002);
CreateObject(1292, 2144.95630, -1668.28503, 14.58457,   0.00000, 0.00000, 35.45998);
CreateObject(1369, 2138.32373, -1697.41809, 14.67586,   0.00000, 0.00000, 145.91997);
CreateObject(1362, 2152.49536, -1692.97339, 14.66582,   0.00000, 0.00000, 0.00000);
CreateObject(1362, 2147.37793, -1695.83325, 14.66582,   0.00000, 0.00000, 0.00000);
CreateObject(1362, 2156.25806, -1684.60071, 14.66582,   0.00000, 0.00000, 0.00000);
CreateObject(1362, 2156.22729, -1686.21960, 14.66582,   0.00000, 0.00000, 0.00000);
CreateObject(1362, 2141.84131, -1677.72009, 14.66582,   0.00000, 0.00000, 0.00000);
CreateObject(3127, 2156.73511, -1677.40479, 10.35010,   0.00000, 0.00000, -151.07999);
CreateObject(3127, 2137.63330, -1689.36658, 10.28839,   0.00000, 0.00000, -151.07999);
CreateObject(1211, 2153.03320, -1684.62415, 14.13390,   68.93999, 91.92005, 0.00000);
CreateObject(1211, 2139.59253, -1683.14478, 14.13390,   68.93999, 91.92005, -99.89999);
CreateObject(1299, 2145.62036, -1701.98303, 14.04797,   0.00000, 0.00000, 0.00000);
CreateObject(1327, 2145.38452, -1678.47900, 14.43393,   -3.00000, 44.82001, 133.98000);
CreateObject(1440, 2143.98193, -1687.22375, 14.59416,   0.00000, 0.00000, 89.82001);
CreateObject(1440, 2147.37256, -1666.01880, 14.59416,   0.00000, 0.00000, 7.92000);
CreateObject(1227, 2128.45239, -1693.67664, 14.87828,   0.00000, 0.00000, 270.59988);
CreateObject(1227, 2128.56006, -1696.48328, 14.87828,   0.00000, 0.00000, 270.59988);
CreateObject(1227, 2167.95361, -1692.68176, 14.87583,   0.00000, 0.00000, 90.96001);
CreateObject(1227, 2167.93604, -1695.25269, 14.87583,   0.00000, 0.00000, 90.96001);
CreateObject(1264, 2168.69727, -1691.36865, 14.45872,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2168.02222, -1691.11560, 14.45872,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2168.88184, -1691.91138, 14.45872,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2168.54468, -1693.94714, 14.45872,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2168.28540, -1696.57434, 14.45872,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2167.50439, -1696.73254, 14.45872,   3.14159, 0.00000, 2.53073);
CreateObject(1264, 2167.46704, -1693.87158, 15.91056,   3.14159, 0.00000, 2.53073);
CreateObject(1946, 2148.16333, -1691.21643, 14.21075,   0.00000, 0.00000, 0.00000);
CreateObject(1946, 2141.51416, -1678.62427, 14.23054,   0.00000, 0.00000, 0.00000);
CreateObject(946, 2147.35400, -1667.18530, 16.26323,   3.14159, 0.00000, -175.98010);
CreateObject(946, 2148.11987, -1698.82495, 16.26323,   3.14159, 0.00000, 361.68005);
CreateObject(19868, 2162.65942, -1718.58044, 14.28498,   0.00000, 0.00000, 0.72000);
CreateObject(19868, 2167.85425, -1718.52075, 14.28498,   0.00000, 0.00000, 0.72000);
CreateObject(19868, 2170.76270, -1715.86023, 14.28498,   0.00000, 0.00000, 82.01997);
CreateObject(19868, 2171.30444, -1710.68750, 14.28498,   0.00000, 0.00000, 86.99994);
CreateObject(19868, 2168.83154, -1707.44458, 14.28498,   0.00000, 0.00000, 165.89992);
CreateObject(19868, 2159.98926, -1715.91345, 14.28498,   0.00000, 0.00000, -84.83998);
CreateObject(19868, 2160.48926, -1710.82532, 14.28498,   0.00000, 0.00000, -106.01999);
CreateObject(946, 2161.38257, -1717.29382, 16.41716,   3.14159, 0.00000, 309.17996);
CreateObject(1946, 2166.35425, -1715.52869, 14.39479,   0.00000, 0.00000, 0.00000);
CreateObject(946, 2170.12476, -1709.08154, 16.60114,   3.14159, 0.00000, 492.30029);
CreateObject(18663, 2137.72095, -1655.48169, 15.45434,   0.00000, 0.00000, 2.76000);
CreateObject(18663, 2131.69751, -1662.99036, 15.40218,   0.00000, 0.00000, 92.76000);
CreateObject(18663, 2155.69482, -1654.35889, 15.50738,   0.00000, 0.00000, 3.00000);
CreateObject(18663, 2155.78320, -1656.58044, 15.44910,   16.02000, 0.42000, 3.00000);
CreateObject(18663, 2166.64160, -1671.72937, 15.54291,   0.00000, 0.00000, 2.64000);
CreateObject(18663, 2164.26465, -1704.31567, 15.45391,   0.00000, 0.00000, 91.25999);
CreateObject(18663, 2139.51953, -1711.24780, 15.46285,   0.00000, 0.00000, 1.26000);
CreateObject(18663, 2132.32568, -1704.96716, 15.46772,   0.00000, 0.00000, -88.86000);
CreateObject(18663, 2134.03784, -1704.96008, 15.46772,   -59.22000, 178.31992, -88.86000);
CreateObject(2672, 2149.63647, -1695.53955, 14.37355,   0.00000, 0.00000, 0.00000);
CreateObject(2672, 2142.94458, -1675.05530, 14.37355,   0.00000, 0.00000, 0.00000);
CreateObject(19868, 2181.57593, -1654.95923, 14.28498,   0.00000, 0.00000, 79.19994);
CreateObject(19868, 2181.03491, -1656.71863, 14.28498,   0.00000, 0.00000, 67.61992);
CreateObject(19868, 2174.55078, -1659.72925, 14.28498,   0.00000, 0.00000, -24.24007);
CreateObject(19868, 2171.31445, -1656.17920, 14.28498,   0.00000, 0.00000, -70.98006);
CreateObject(19868, 2172.50854, -1652.10095, 14.28498,   0.00000, 0.00000, -140.82008);
CreateObject(19868, 2177.09375, -1651.07593, 14.28498,   0.00000, 0.00000, -191.40012);
CreateObject(19868, 2179.64380, -1651.64246, 14.28498,   0.00000, 0.00000, -198.24010);
CreateObject(2629, 2174.67749, -1652.40247, 14.05883,   0.00000, 0.00000, 23.40000);
CreateObject(2629, 2172.73193, -1654.55139, 14.05883,   0.00000, 0.00000, 70.13999);
CreateObject(2629, 2179.14209, -1652.88477, 14.05883,   0.00000, 0.00000, -31.08002);
CreateObject(11730, 2172.68091, -1658.40649, 14.08169,   0.00000, 0.00000, 136.14001);
CreateObject(11730, 2172.12280, -1657.50256, 14.08169,   0.00000, 0.00000, 117.36003);
CreateObject(11730, 2138.01465, -1679.24353, 14.08057,   0.00000, 0.00000, 126.71999);
CreateObject(11730, 2138.09863, -1677.57227, 14.08057,   0.00000, 37.56000, 83.03996);
CreateObject(11730, 2137.73022, -1678.23840, 14.08057,   0.00000, 0.00000, 95.21998);
CreateObject(11730, 2139.29150, -1680.90515, 14.08057,   -1.86000, 54.06001, 126.71999);
CreateObject(11730, 2157.13599, -1689.40576, 14.08040,   -34.26001, 7.32001, 197.69989);
CreateObject(2632, 2179.62744, -1656.36475, 14.08060,   -1.32000, 1.44000, -113.22002);
CreateObject(19868, 2172.24170, -1652.47778, 14.28498,   0.00000, 0.00000, -140.82008);
CreateObject(19868, 2171.15210, -1655.78076, 14.28498,   0.00000, 0.00000, -70.98006);
CreateObject(19868, 2174.04639, -1659.50635, 14.28498,   0.00000, 0.00000, -24.24007);
CreateObject(19868, 2180.80786, -1657.27942, 14.28498,   0.00000, 0.00000, 67.61992);
CreateObject(19868, 2181.66284, -1654.51196, 14.28498,   0.00000, 0.00000, 79.19994);
CreateObject(19868, 2170.77539, -1715.32190, 14.28498,   0.00000, 0.00000, 82.01997);
CreateObject(19868, 2171.25781, -1710.27747, 14.28498,   0.00000, 0.00000, 86.99994);
CreateObject(19868, 2168.06226, -1707.29675, 14.28498,   0.00000, 0.00000, 165.89992);
CreateObject(19868, 2160.33423, -1711.65112, 14.28498,   0.00000, 0.00000, -106.01999);
CreateObject(19868, 2159.93555, -1716.53259, 14.28498,   0.00000, 0.00000, -84.83998);
CreateObject(19868, 2163.12598, -1718.62549, 14.28498,   0.00000, 0.00000, 0.72000);
CreateObject(19868, 2168.21167, -1718.47168, 14.28498,   0.00000, 0.00000, 0.72000);
CreateObject(2063, 2139.78345, -1691.31750, 14.92751,   0.00000, 0.00000, 62.93998);
CreateObject(2063, 2156.92480, -1674.36243, 14.92751,   -8.58000, 0.00000, -128.28003);
CreateObject(2693, 2156.10254, -1690.90527, 14.77523,   0.00000, 0.00000, -129.65997);
CreateObject(2693, 2180.54004, -1659.34082, 14.77523,   0.00000, 0.00000, 7.08001);
CreateObject(2692, 2139.13208, -1697.93457, 14.64941,   0.00000, 0.00000, 164.04004);
CreateObject(2691, 2147.18018, -1664.98438, 15.45279,   0.00000, 0.00000, 2.70000);
CreateObject(2696, 2166.55762, -1669.55566, 15.54572,   0.00000, 0.00000, 91.73999);
CreateObject(2680, 2173.17603, -1658.13184, 15.07598,   0.00000, 0.00000, 122.88004);
CreateObject(2680, 2172.68091, -1657.39270, 15.07598,   0.00000, 0.00000, 122.88004);
CreateObject(2695, 2166.47974, -1704.25659, 15.90061,   0.00000, 0.00000, 0.00000);
CreateObject(2696, 2165.87915, -1704.27734, 15.90174,   0.00000, 0.00000, 0.00000);
CreateObject(2696, 2138.15430, -1678.12537, 15.11956,   0.00000, 0.00000, 122.16007);
CreateObject(2695, 2147.29517, -1667.27710, 17.82212,   -2.16000, 63.42003, 4.50000);
CreateObject(3594, 2144.26611, -1647.42957, 14.39655,   0.00000, 0.00000, 38.64000);
CreateObject(3594, 2146.87744, -1647.16541, 14.39655,   -11.27999, -2.46000, -31.02000);




//-> Favela | By. Abelleira
         CreateDynamicObject(3655, 2608.99976, -1031.84192, 72.31073,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2589.36353, -1032.11230, 72.31073,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2588.86450, -1018.97418, 75.50790,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(3655, 2609.49048, -1018.90131, 76.22925,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(3655, 2606.63550, -1004.89429, 77.56875,   0.00000, 0.00000, 22.99210);
CreateDynamicObject(3655, 2587.20679, -1009.94879, 77.87171,   0.00000, 0.00000, 20.18665);
CreateDynamicObject(3655, 2581.56543, -1002.21344, 80.95146,   0.00000, 0.00000, 45.50563);
CreateDynamicObject(3655, 2601.86426, -993.59015, 80.91378,   0.00000, 0.00000, 22.99210);
CreateDynamicObject(3655, 2588.94702, -971.90009, 83.69572,   0.00000, 0.00000, 94.30769);
CreateDynamicObject(3655, 2576.93872, -972.70428, 83.69572,   0.00000, 0.00000, 94.30769);
CreateDynamicObject(3655, 2570.78125, -954.18097, 83.69572,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2582.48682, -951.64185, 83.69572,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2553.78906, -957.93323, 83.69572,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2593.89990, -947.92004, 83.69572,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2604.02271, -967.87189, 82.77140,   0.00000, 0.00000, 102.49490);
CreateDynamicObject(3655, 2615.67285, -964.33051, 82.77142,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2627.21533, -961.41901, 82.64950,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2605.13013, -943.49170, 82.87344,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2616.50415, -939.62488, 82.00202,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2610.04395, -987.09491, 82.77140,   0.00000, 0.00000, 102.49490);
CreateDynamicObject(3655, 2621.85376, -984.92822, 82.77140,   0.00000, 0.00000, 102.49490);
CreateDynamicObject(3655, 2633.41382, -983.14398, 82.36433,   0.00000, 0.00000, 102.08578);
CreateDynamicObject(3655, 2573.93848, -996.72388, 82.29117,   0.00000, 0.00000, 61.90626);
CreateDynamicObject(3655, 2560.16821, -989.35474, 83.62772,   0.00000, 0.00000, 61.90626);
CreateDynamicObject(3655, 2549.62500, -983.78589, 83.62772,   0.00000, 0.00000, 61.90626);
CreateDynamicObject(3655, 2532.05249, -980.89203, 84.20581,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2565.67383, -1010.40009, 81.68581,   0.00000, 0.00000, 94.30769);
CreateDynamicObject(19377, 2567.45020, -999.56183, 78.91843,   0.00000, 90.00000, 332.82407);
CreateDynamicObject(19377, 2559.87183, -1006.40662, 78.91843,   0.00000, 90.00000, 332.82407);
CreateDynamicObject(19377, 2558.00586, -994.88086, 78.91843,   0.00000, 90.00000, 332.82407);
CreateDynamicObject(3655, 2552.07690, -1004.86548, 83.02068,   0.00000, 0.00000, 61.90626);
CreateDynamicObject(19377, 2538.32129, -985.92566, 80.59683,   0.00000, 90.00000, 332.82407);
CreateDynamicObject(19377, 2546.46216, -989.99377, 80.49482,   0.00000, 90.00000, 332.82407);
CreateDynamicObject(19377, 2555.51099, -994.11774, 78.31060,   0.00000, 115.00000, 333.00000);
CreateDynamicObject(3655, 2541.97803, -998.95197, 83.52469,   0.00000, 0.00000, 61.90626);
CreateDynamicObject(3655, 2542.78760, -959.28638, 83.69572,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2532.23901, -960.71649, 84.20581,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2520.65234, -960.58673, 84.20581,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2506.78101, -961.30066, 84.20581,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2495.27490, -962.48352, 84.20581,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2485.61914, -959.94293, 83.57824,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2468.20093, -961.65118, 82.45295,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2456.59009, -960.84210, 82.45295,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2444.96338, -962.08441, 82.45295,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(18368, 2515.07837, -1002.54315, 76.25788,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(19377, 2535.23413, -995.22650, 80.59683,   0.00000, 90.00000, 332.82407);
CreateDynamicObject(3655, 2530.17090, -990.41968, 83.52469,   0.00000, 0.00000, 61.90626);
CreateDynamicObject(3655, 2516.09668, -995.05841, 83.79977,   0.00000, 0.00000, 100.50851);
CreateDynamicObject(19377, 2526.89917, -996.40845, 80.59680,   0.00000, 90.00000, 0.00000);
CreateDynamicObject(3655, 2509.12939, -994.14941, 83.52469,   0.00000, 0.00000, 61.90626);
CreateDynamicObject(3655, 2496.87988, -983.00702, 83.52469,   0.00000, 0.00000, 61.90626);
CreateDynamicObject(3655, 2520.36084, -981.33240, 84.20581,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(19377, 2503.79736, -993.70337, 80.79780,   0.00000, 90.00000, 332.69931);
CreateDynamicObject(19377, 2505.95776, -984.27209, 80.79780,   0.00000, 90.00000, 332.69931);
CreateDynamicObject(19377, 2510.33960, -975.72125, 80.79780,   0.00000, 90.00000, 332.69931);
CreateDynamicObject(19377, 2517.13623, -985.23877, 80.79780,   0.00000, 90.00000, 332.69931);
CreateDynamicObject(14409, 2469.08276, -979.72101, 77.61694,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2494.51294, -988.91858, 80.79780,   0.00000, 90.00000, 332.69931);
CreateDynamicObject(3655, 2488.38843, -981.22992, 84.20581,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2476.97119, -980.76868, 82.45295,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2461.40527, -981.00317, 82.45295,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2449.92944, -980.67200, 82.45295,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2438.51147, -981.57758, 81.64594,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2432.92822, -960.77802, 82.45295,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(19377, 2485.61694, -986.80774, 80.79780,   0.00000, 90.00000, 271.66339);
CreateDynamicObject(3629, 2539.79785, -1003.40649, 58.16787,   0.00000, 90.00000, 240.37004);
CreateDynamicObject(3629, 2527.38452, -839.38293, 72.37581,   0.00000, -90.00000, 271.87460);
CreateDynamicObject(19377, 2457.19995, -987.61670, 80.79780,   0.00000, 90.00000, 271.66339);
CreateDynamicObject(19377, 2447.67944, -987.91241, 80.79780,   0.00000, 90.00000, 271.66339);
CreateDynamicObject(14409, 2494.19116, -996.32977, 77.61690,   0.00000, 0.00000, 152.00000);
CreateDynamicObject(14409, 2440.75391, -987.80133, 77.61690,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2424.60571, -981.57367, 80.02393,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(19377, 2434.17017, -980.30579, 77.69466,   0.00000, 90.00000, 271.66339);
CreateDynamicObject(3629, 2417.80225, -991.07715, 55.39502,   0.00000, 90.00000, 271.87463);
CreateDynamicObject(3285, 2434.60938, -1009.07813, 55.24219,   3.14159, 0.00000, 1.32002);
CreateDynamicObject(19377, 2434.09546, -988.68732, 77.66050,   0.00000, 90.00000, 1.35501);
CreateDynamicObject(19377, 2423.86548, -988.99164, 77.66050,   0.00000, 90.00000, 1.35501);
CreateDynamicObject(19377, 2413.43921, -989.25452, 77.66050,   0.00000, 90.00000, 1.35501);
CreateDynamicObject(19377, 2402.94336, -989.47913, 77.66050,   0.00000, 90.00000, 1.35501);
CreateDynamicObject(19377, 2397.76587, -989.80127, 77.66050,   0.00000, 90.00000, 1.35501);
CreateDynamicObject(3655, 2412.63306, -981.95758, 80.02393,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2401.76489, -983.56482, 80.02393,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2401.71460, -983.33997, 72.63282,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(14409, 2394.47656, -982.78204, 74.49690,   0.00000, 0.00000, 1.51589);
CreateDynamicObject(19377, 2392.34766, -981.16235, 72.96937,   0.00000, 0.00000, 1.35500);
CreateDynamicObject(3655, 2421.41357, -961.86810, 81.00069,   0.00000, 0.00000, 94.39017);
CreateDynamicObject(3655, 2406.13599, -963.33881, 78.61256,   0.00000, 0.00000, 96.47125);
CreateDynamicObject(3655, 2404.89648, -954.38263, 86.06733,   0.00000, 0.00000, 96.47125);
CreateDynamicObject(3655, 2420.70874, -953.91071, 84.80464,   0.00000, 0.00000, 94.92133);
CreateDynamicObject(3629, 2510.74463, -992.16022, 58.16787,   0.00000, 90.00000, 240.37004);
CreateDynamicObject(19791, 2565.29053, -1013.30664, 67.95702,   0.00000, 0.00000, 1.49474);
CreateDynamicObject(19791, 2572.96509, -1014.31476, 69.59487,   0.00000, 0.00000, 1.49474);
CreateDynamicObject(19791, 2582.06030, -1014.83459, 69.59487,   0.00000, 0.00000, 1.49474);
CreateDynamicObject(19791, 2574.54126, -1005.03070, 69.59487,   0.00000, 0.00000, 1.49474);
CreateDynamicObject(19313, 2482.88501, -992.09167, 81.36220,   0.00000, 0.00000, 1.49474);
CreateDynamicObject(19313, 2392.68628, -988.58380, 78.06810,   0.00000, 0.00000, 91.75595);
CreateDynamicObject(19377, 2392.45337, -981.11188, 72.96937,   0.00000, 0.00000, 1.35500);
CreateDynamicObject(19377, 2494.87329, -999.20044, 76.56506,   0.00000, 0.00000, 331.57217);
CreateDynamicObject(3655, 2611.78149, -920.15424, 80.92349,   0.00000, 0.00000, 100.45744);
CreateDynamicObject(3655, 2600.63086, -923.70374, 82.74361,   0.00000, 0.00000, 100.45744);
CreateDynamicObject(3655, 2589.44287, -929.60199, 83.66151,   0.00000, 0.00000, 100.45744);
CreateDynamicObject(3655, 2563.80713, -934.14069, 84.66705,   0.00000, 0.00000, 100.45744);
CreateDynamicObject(3655, 2552.39282, -936.98529, 85.23017,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2540.77441, -938.63806, 85.23017,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2525.55884, -940.27039, 85.23017,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2510.68726, -943.88928, 85.23017,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2497.55103, -942.32721, 84.20581,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2485.98145, -941.80225, 83.57824,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2467.30762, -944.17224, 82.64139,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2455.37769, -942.98730, 82.39830,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2443.69336, -944.07043, 82.65692,   0.00000, 0.00000, 91.89890);
CreateDynamicObject(3655, 2433.91333, -942.43127, 83.68127,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2418.06104, -938.09064, 86.86395,   0.00000, 0.00000, 94.92133);
CreateDynamicObject(3655, 2399.61548, -941.45764, 95.16232,   0.00000, 0.00000, 96.47125);
CreateDynamicObject(17513, 2505.21094, -890.45038, 89.21368,   0.00000, 0.00000, 5.33978);
CreateDynamicObject(19377, 2476.08472, -987.09833, 80.79780,   0.00000, 90.00000, 271.66339);
CreateDynamicObject(19377, 2475.97144, -931.68054, 80.37267,   2.00000, 102.00000, 272.00000);
CreateDynamicObject(3655, 2484.86865, -919.08960, 96.85624,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2485.44629, -928.19464, 83.57824,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2485.93994, -929.75275, 90.46906,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2466.84082, -932.37347, 90.46906,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2466.83960, -931.23230, 83.57824,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2466.46558, -919.33234, 96.85624,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(12814, 2476.76880, -925.85883, 87.82265,   22.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2466.52905, -987.37903, 80.79780,   0.00000, 90.00000, 271.66339);
CreateDynamicObject(12814, 2427.42261, -905.22754, 98.06187,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2484.29810, -904.98773, 97.46327,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2484.75464, -919.07562, 90.46906,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2485.18164, -883.78937, 100.38031,   0.00000, 0.00000, 271.54996);
CreateDynamicObject(3655, 2473.91846, -886.03552, 100.38031,   0.00000, 0.00000, 271.54996);
CreateDynamicObject(3655, 2462.71777, -888.89667, 101.53599,   0.00000, 0.00000, 271.54996);
CreateDynamicObject(3655, 2451.60425, -891.02716, 101.53599,   0.00000, 0.00000, 271.54996);
CreateDynamicObject(3655, 2452.89038, -907.78583, 101.18060,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2465.15454, -907.63281, 96.85624,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2466.44458, -919.35150, 90.46906,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(19791, 2487.61792, -912.75916, 93.49819,   0.00000, 0.00000, 4.14120);
CreateDynamicObject(19791, 2491.10498, -922.09442, 84.18095,   0.00000, 0.00000, 4.14120);
CreateDynamicObject(19791, 2490.90210, -920.78668, 93.58898,   0.00000, 0.00000, 4.14120);
CreateDynamicObject(3655, 2501.44971, -919.52081, 99.55683,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2508.97876, -925.72241, 86.17020,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2520.94189, -922.42682, 86.67421,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2532.76025, -921.08667, 86.67421,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2544.72217, -921.24567, 86.67421,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2497.22437, -926.96960, 86.17020,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2514.95337, -919.55768, 92.22934,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2526.73706, -919.71332, 92.22934,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2538.71753, -917.86188, 92.22934,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2550.29663, -916.02905, 92.22934,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2554.99683, -919.99603, 86.06087,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2503.04419, -921.84961, 92.22934,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2512.70215, -917.13715, 100.07314,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2524.10278, -914.15790, 99.24458,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2535.78662, -915.71649, 99.02692,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(14409, 2549.17480, -869.55310, 91.33546,   0.00000, 0.00000, 276.39542);
CreateDynamicObject(19791, 2551.76416, -885.92035, 93.60630,   0.00000, 0.00000, 4.14120);
CreateDynamicObject(19791, 2552.44971, -895.72137, 93.60630,   0.00000, 0.00000, 4.14120);
CreateDynamicObject(19791, 2553.21680, -905.64606, 93.60630,   0.00000, 0.00000, 4.14120);
CreateDynamicObject(19791, 2546.43799, -913.04407, 93.60630,   0.00000, 0.00000, 4.14120);
CreateDynamicObject(19791, 2551.45654, -876.04510, 84.19096,   0.00000, 0.00000, 4.14120);
CreateDynamicObject(19791, 2548.72852, -876.28479, 93.60630,   0.00000, 0.00000, 4.14120);
CreateDynamicObject(19791, 2550.69189, -862.39069, 93.77136,   0.00000, 0.00000, 8.16697);
CreateDynamicObject(19791, 2550.69189, -862.39069, 84.19096,   0.00000, 0.00000, 8.16697);
CreateDynamicObject(3655, 2569.33057, -869.02594, 91.33399,   0.00000, 0.00000, 5.80459);
CreateDynamicObject(3655, 2569.58789, -880.60187, 91.33399,   0.00000, 0.00000, 5.80459);
CreateDynamicObject(12814, 2555.96680, -882.41467, 88.64074,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(12814, 2557.40674, -895.09894, 70.02989,   90.00000, 90.00000, 4.05447);
CreateDynamicObject(3655, 2569.60767, -891.73334, 91.33399,   0.00000, 0.00000, 5.80459);
CreateDynamicObject(3655, 2570.26099, -903.13507, 91.33399,   0.00000, 0.00000, 0.37847);
CreateDynamicObject(14409, 2561.36890, -909.28601, 85.40608,   0.00000, 0.00000, 180.00000);
CreateDynamicObject(19791, 2554.63721, -909.30994, 84.53017,   0.00000, 0.00000, 4.14120);
CreateDynamicObject(19791, 2568.00366, -912.88507, 83.59332,   0.00000, 0.00000, 4.14120);
CreateDynamicObject(3655, 2570.49780, -917.80658, 85.02922,   0.00000, 0.00000, 8.55854);
CreateDynamicObject(3655, 2566.14868, -858.83215, 91.33399,   0.00000, 0.00000, 5.80459);
CreateDynamicObject(12814, 2491.98779, -859.82013, 94.44500,   0.00000, 0.00000, 90.51320);
CreateDynamicObject(3655, 2544.90894, -860.88177, 91.75229,   0.00000, 0.00000, 97.49607);
CreateDynamicObject(3655, 2533.44653, -861.85901, 91.75229,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2522.73267, -863.29370, 92.21650,   0.00000, 0.00000, 93.88690);
CreateDynamicObject(3655, 2559.87256, -847.43896, 91.75229,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2550.47363, -844.23694, 91.03094,   0.00000, 0.00000, 1.38480);
CreateDynamicObject(3655, 2537.04712, -843.41553, 91.03094,   0.00000, 0.00000, 1.38480);
CreateDynamicObject(3655, 2522.72095, -842.86029, 97.74789,   0.00000, 0.00000, 1.38480);
CreateDynamicObject(3655, 2522.76563, -863.39014, 99.65382,   0.00000, 0.00000, 93.88690);
CreateDynamicObject(12814, 2539.86914, -858.46698, 84.69042,   23.00000, 0.00000, 90.00000);
CreateDynamicObject(12814, 2536.50708, -859.22540, 88.53869,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2522.91650, -842.88837, 91.03094,   0.00000, 0.00000, 1.38480);
CreateDynamicObject(3655, 2501.98999, -856.47443, 97.74789,   0.00000, 0.00000, 1.38480);
CreateDynamicObject(3655, 2503.22363, -869.49323, 99.82561,   0.00000, 0.00000, 94.95812);
CreateDynamicObject(3655, 2492.42334, -870.61017, 99.82561,   0.00000, 0.00000, 94.95812);
CreateDynamicObject(3629, 2542.57935, -840.42065, 72.37581,   0.00000, -90.00000, 271.87460);
CreateDynamicObject(3629, 2572.09888, -864.67078, 72.37580,   0.00000, -90.00000, 187.32394);
CreateDynamicObject(3629, 2574.15698, -895.15204, 70.09157,   0.00000, -90.00000, 187.32394);
CreateDynamicObject(3655, 2439.89551, -892.73755, 101.53599,   0.00000, 0.00000, 271.54996);
CreateDynamicObject(3655, 2438.36646, -906.61621, 101.53599,   0.00000, 0.00000, 271.54996);
CreateDynamicObject(3655, 2457.25439, -918.22382, 99.64718,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2446.95850, -924.92322, 101.18060,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2435.52100, -925.59131, 101.18060,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2424.28857, -922.88165, 101.18060,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2426.71484, -906.68909, 101.18060,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2415.32739, -906.79749, 101.18060,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2412.69067, -924.16437, 93.01060,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3629, 2432.46997, -932.70789, 75.55666,   0.00000, 90.00000, 273.62860);
CreateDynamicObject(3655, 2397.87476, -928.46497, 100.73978,   0.00000, 0.00000, 96.47125);
CreateDynamicObject(14409, 2406.15186, -931.31812, 89.49863,   0.00000, 0.00000, 186.28352);
CreateDynamicObject(3655, 2421.41748, -961.15527, 86.16010,   0.00000, 0.00000, 94.30614);
CreateDynamicObject(3655, 2408.51172, -906.25519, 101.42116,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2397.80078, -917.46783, 92.78745,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2398.31396, -928.89563, 92.85089,   0.00000, 0.00000, 96.47125);
CreateDynamicObject(3655, 2399.79077, -941.70483, 88.31675,   0.00000, 0.00000, 96.47125);
CreateDynamicObject(3655, 2397.80762, -917.62238, 101.18060,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2412.69067, -924.16437, 101.18060,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2461.99854, -929.65479, 91.23531,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2534.19824, -862.36505, 99.72764,   0.00000, 0.00000, 96.34878);
CreateDynamicObject(19791, 2543.79004, -862.96368, 93.77136,   0.00000, 0.00000, 8.16697);
CreateDynamicObject(946, 2505.88281, -879.09839, 99.15108,   0.00000, 0.00000, 185.02946);
CreateDynamicObject(946, 2532.29712, -876.71344, 97.84440,   0.00000, 0.00000, 184.51727);
CreateDynamicObject(946, 2534.69556, -903.76892, 97.72488,   0.00000, 0.00000, 5.02950);
CreateDynamicObject(946, 2508.42212, -906.50220, 99.35210,   0.00000, 0.00000, 5.02950);
CreateDynamicObject(16151, 2493.45728, -908.51245, 97.58057,   0.00000, 0.00000, 183.95886);
CreateDynamicObject(643, 2498.96216, -910.24420, 97.59750,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(643, 2503.75488, -910.09595, 97.59750,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(643, 2495.18872, -903.13727, 97.59750,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(643, 2494.69165, -899.61115, 97.59750,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(14409, 2405.14648, -922.11279, 94.91566,   0.00000, 0.00000, 186.28352);
CreateDynamicObject(19791, 2487.03027, -902.92041, 93.60629,   0.00000, 0.00000, 4.14120);
CreateDynamicObject(3629, 2467.85669, -989.95123, 58.68929,   0.00000, 90.00000, 271.87463);
CreateDynamicObject(12814, 2477.22949, -877.67181, 97.18370,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(3655, 2580.13232, -1018.66235, 71.57103,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(3655, 2620.58374, -1032.74976, 72.31073,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2632.60742, -1031.55518, 71.69553,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2644.62280, -1032.21423, 71.69553,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2656.60669, -1032.56445, 71.69553,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2668.48853, -1033.32544, 71.69553,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2680.30396, -1032.52832, 78.62075,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2680.43164, -1033.45520, 71.69553,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2680.00439, -1021.11987, 87.12814,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2656.90576, -1023.94720, 79.55020,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2645.07129, -1024.37012, 79.55020,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2633.08960, -1024.19568, 79.55020,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2621.44141, -1024.08093, 79.55020,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2668.77710, -1024.19482, 79.55025,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19791, 2681.05518, -1022.06525, 73.42297,   0.00000, 0.00000, 0.04779);
CreateDynamicObject(3655, 2668.32471, -1014.80554, 87.83718,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2656.89868, -1016.17004, 87.83718,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2645.14844, -1013.86670, 87.83718,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2633.22168, -1013.64606, 85.56132,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2621.27075, -1011.62732, 83.84549,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2610.74097, -999.70844, 84.60151,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2643.77271, -993.83313, 85.55005,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2655.07300, -994.18146, 86.88660,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2679.77759, -1008.50299, 88.03048,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2669.68262, -993.13092, 88.03048,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2666.06104, -980.65955, 85.06247,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2643.01855, -979.79419, 82.05116,   0.00000, 0.00000, 102.49490);
CreateDynamicObject(3655, 2636.52612, -958.54254, 81.77735,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2651.08765, -977.18384, 81.89262,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2691.52808, -1031.95728, 71.69553,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2705.39429, -1025.63525, 76.06490,   20.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2716.14746, -1025.73230, 72.39368,   20.00000, 0.00000, 91.12047);
CreateDynamicObject(3655, 2725.17334, -1033.86145, 59.99419,   20.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2769.25513, -1033.39124, 43.69220,   20.00000, 0.00000, 89.76846);
CreateDynamicObject(3655, 2779.97852, -1031.74597, 39.61226,   20.00000, 0.00000, 89.77076);
CreateDynamicObject(3655, 2790.87061, -1032.71375, 35.84403,   20.00000, 0.00000, 89.77303);
CreateDynamicObject(3655, 2758.39648, -1033.11511, 47.96202,   20.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2747.17798, -1032.15063, 51.85143,   20.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2736.12695, -1033.80078, 56.05378,   20.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2802.35791, -1033.02075, 32.42219,   20.00000, 0.00000, 89.65302);
CreateDynamicObject(3655, 2811.60620, -1033.37830, 30.60669,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2819.61914, -1032.97119, 33.22741,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2691.39746, -1022.83423, 78.62075,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2702.96533, -1032.42029, 68.81844,   20.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2714.31104, -1032.69873, 64.75281,   20.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2727.25122, -1025.32849, 68.09232,   20.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2749.08081, -1022.80615, 59.82476,   20.00000, 0.00000, 90.48908);
CreateDynamicObject(3655, 2738.20313, -1024.73645, 63.78463,   20.00000, 0.00000, 90.84000);
CreateDynamicObject(3655, 2764.05786, -1016.14923, 63.51627,   20.00000, 0.00000, 90.48908);
CreateDynamicObject(3655, 2791.03369, -1006.51776, 59.01030,   20.00000, 0.00000, 90.73927);
CreateDynamicObject(3655, 2781.77979, -1023.05267, 47.46576,   20.00000, 0.00000, 90.48908);
CreateDynamicObject(3655, 2797.67310, -1016.15247, 47.96262,   20.00000, 0.00000, 89.66051);
CreateDynamicObject(3655, 2804.21362, -1026.99109, 38.53531,   20.00000, 0.00000, 89.66051);
CreateDynamicObject(3655, 2811.36035, -1030.80933, 36.83879,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2821.29419, -1034.20874, 26.21035,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(19791, 2694.59229, -1033.73181, 65.78124,   0.00000, 0.00000, 1.13223);
CreateDynamicObject(19791, 2696.84619, -1024.47461, 72.78608,   0.00000, 0.00000, 359.17078);
CreateDynamicObject(17513, 2738.38892, -972.39093, 64.77603,   0.00000, 0.00000, 90.55604);
CreateDynamicObject(3655, 2774.70288, -975.74756, 62.81962,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2766.95337, -965.54852, 69.61797,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2766.87231, -953.63019, 68.44992,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2768.23730, -921.26685, 70.47320,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2767.40649, -931.82104, 68.65748,   0.00000, 0.00000, 0.14100);
CreateDynamicObject(3655, 2761.96899, -985.32678, 76.03636,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3629, 2773.34058, -946.50916, 44.82541,   0.00000, -90.00000, 180.03865);
CreateDynamicObject(3629, 2773.29980, -969.10071, 44.82541,   0.00000, -90.00000, 180.03865);
CreateDynamicObject(3655, 2764.63257, -974.32446, 75.94257,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2774.79053, -988.12653, 62.81962,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2774.39258, -963.87671, 62.81962,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2773.60669, -952.18762, 62.81962,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2774.93140, -940.17401, 62.81962,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2774.31274, -927.84412, 62.81962,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3629, 2784.13037, -969.17993, 37.52227,   0.00000, -90.00000, 180.03865);
CreateDynamicObject(3655, 2792.01270, -987.78113, 62.20440,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2791.86743, -976.78497, 62.20440,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2792.37988, -964.62775, 62.20442,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2791.79883, -953.41791, 62.20440,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2791.98364, -941.86108, 62.20440,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2799.97559, -987.88599, 53.60807,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3629, 2809.39868, -968.38336, 28.22012,   0.00000, -90.00000, 179.63261);
CreateDynamicObject(3629, 2785.66577, -940.34235, 37.52227,   0.00000, -90.00000, 180.03865);
CreateDynamicObject(3629, 2776.72754, -910.92084, 38.65130,   -24.00000, -90.00000, 272.44717);
CreateDynamicObject(3629, 2810.61108, -932.67950, 28.22012,   0.00000, -90.00000, 179.63261);
CreateDynamicObject(3655, 2776.99829, -921.18518, 62.81962,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2793.45483, -930.36780, 62.20440,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2793.51489, -921.14386, 62.20440,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2799.07861, -977.09106, 53.60807,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2799.97559, -965.22937, 53.60807,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2799.20728, -953.39557, 53.60807,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2800.41797, -941.84491, 53.60807,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2799.07739, -930.41309, 53.60807,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2798.41870, -919.54224, 53.60807,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2793.60083, -920.35724, 58.71607,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2821.18726, -1022.54846, 25.39724,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2822.38525, -1010.29309, 24.96117,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2823.72314, -998.20227, 23.69161,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2815.71631, -986.58197, 52.25350,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2830.20435, -909.63818, 15.01453,   0.00000, 0.00000, -6.06000);
CreateDynamicObject(3655, 2825.09326, -908.96161, 35.07872,   0.00000, 0.00000, -6.06000);
CreateDynamicObject(3655, 2827.07251, -910.01331, 27.18668,   0.00000, 0.00000, -5.94000);
CreateDynamicObject(3655, 2826.45850, -921.13593, 27.31514,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2823.98120, -920.79865, 35.01287,   0.00000, 0.00000, -5.94000);
CreateDynamicObject(3655, 2828.51660, -920.67017, 19.88295,   0.00000, 0.00000, -5.28000);
CreateDynamicObject(3655, 2828.05957, -931.82715, 19.94560,   0.00000, 0.00000, -5.94000);
CreateDynamicObject(3655, 2825.61279, -932.51874, 27.56450,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2824.92188, -943.85065, 27.62529,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2827.01611, -943.57526, 20.24966,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2822.67505, -943.84009, 35.64271,   0.00000, 0.00000, -6.06000);
CreateDynamicObject(3655, 2823.54053, -932.30072, 35.46030,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2827.02466, -954.41272, 20.30867,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2824.22437, -954.44861, 27.86256,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2822.21167, -953.40552, 35.87762,   0.00000, 0.00000, -6.06000);
CreateDynamicObject(3655, 2822.81079, -963.28619, 36.79187,   0.00000, 0.00000, -5.94000);
CreateDynamicObject(3655, 2825.05859, -963.77515, 29.02472,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2826.83350, -963.38812, 21.38741,   0.00000, 0.00000, -5.94000);
CreateDynamicObject(3655, 2823.69775, -975.36304, 28.97790,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2821.41675, -975.18439, 36.74314,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2820.22144, -986.84521, 36.69394,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2822.35327, -986.90106, 28.68704,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2824.46362, -986.74200, 21.57560,   0.00000, 0.00000, -6.12000);
CreateDynamicObject(3655, 2825.53931, -974.95966, 21.43515,   0.00000, 0.00000, -5.88000);
CreateDynamicObject(3655, 2828.86011, -909.90082, 19.75576,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2830.24951, -920.62360, 16.67595,   0.00000, 0.00000, -6.06000);
CreateDynamicObject(3655, 2829.81885, -931.76440, 17.39302,   0.00000, 0.00000, -6.06000);
CreateDynamicObject(3655, 2828.97363, -943.05316, 18.42259,   0.00000, 0.00000, -6.06000);
CreateDynamicObject(5441, 2785.53003, -876.64056, 31.59497,   0.00000, 23.00000, 357.91888);
CreateDynamicObject(5441, 2670.40649, -871.91809, 55.13486,   0.00000, 0.00000, 357.46490);
CreateDynamicObject(12814, 2725.73022, -834.13202, 55.26149,   0.00000, 0.00000, 357.04742);
CreateDynamicObject(12814, 2737.81152, -923.90613, 68.99265,   0.00000, 0.00000, 90.40604);
CreateDynamicObject(3655, 2830.47754, -900.40546, 15.01453,   0.00000, 0.00000, -6.06000);
CreateDynamicObject(3655, 2831.31274, -867.16675, 13.43532,   0.00000, 0.00000, 358.54147);
CreateDynamicObject(3655, 2826.25659, -900.23547, 20.00655,   0.00000, 0.00000, 358.54147);
CreateDynamicObject(3655, 2823.38721, -899.97705, 27.18668,   0.00000, 0.00000, -5.94000);
CreateDynamicObject(3655, 2820.66016, -902.80817, 35.07872,   0.00000, 0.00000, -6.06000);
CreateDynamicObject(3655, 2788.95752, -864.87701, 33.52820,   20.00000, 0.00000, 89.60052);
CreateDynamicObject(3655, 2734.76636, -862.26923, 56.46773,   20.00000, 0.00000, 85.27533);
CreateDynamicObject(3655, 2746.40332, -862.49786, 52.52772,   20.00000, 0.00000, 86.90590);
CreateDynamicObject(3655, 2768.17261, -864.14197, 42.15866,   20.00000, 0.00000, 86.50803);
CreateDynamicObject(3655, 2778.44165, -864.66626, 39.03959,   20.00000, 0.00000, 88.83195);
CreateDynamicObject(3655, 2830.93701, -889.00110, 13.43532,   0.00000, 0.00000, 358.54147);
CreateDynamicObject(3655, 2821.53418, -889.80914, 19.38553,   20.00000, 0.00000, 89.66051);
CreateDynamicObject(3655, 2766.76660, -887.94525, 42.26025,   20.00000, 0.00000, 86.93649);
CreateDynamicObject(3655, 2757.08569, -863.57190, 47.22546,   20.00000, 0.00000, 88.56558);
CreateDynamicObject(3655, 2811.35474, -865.79694, 24.11872,   20.00000, 0.00000, 88.83195);
CreateDynamicObject(3655, 2820.40894, -866.12317, 19.38553,   20.00000, 0.00000, 89.60052);
CreateDynamicObject(3655, 2800.09058, -865.34296, 28.82928,   20.00000, 0.00000, 86.50803);
CreateDynamicObject(3655, 2811.00830, -889.68988, 24.11872,   20.00000, 0.00000, 88.83195);
CreateDynamicObject(3655, 2788.94653, -888.67725, 33.70529,   20.00000, 0.00000, 85.77503);
CreateDynamicObject(3655, 2777.56885, -888.19604, 37.80058,   20.00000, 0.00000, 87.20889);
CreateDynamicObject(3655, 2744.64648, -887.21283, 52.52772,   20.00000, 0.00000, 86.90590);
CreateDynamicObject(3655, 2755.44995, -887.46393, 47.22546,   20.00000, 0.00000, 88.56558);
CreateDynamicObject(3655, 2807.52783, -900.70886, 35.07872,   0.00000, 0.00000, -6.06000);
CreateDynamicObject(3655, 2799.59814, -889.39117, 28.82928,   20.00000, 0.00000, 86.50803);
CreateDynamicObject(3655, 2814.88770, -972.91028, 52.25350,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2815.71655, -959.00525, 52.25350,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2815.24487, -944.53436, 52.25350,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2816.10205, -929.93591, 52.25350,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2815.34058, -916.08179, 52.25350,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(12814, 2714.87158, -886.84515, 58.07551,   -26.00000, 0.00000, 1.06315);
CreateDynamicObject(12814, 2713.52930, -904.12201, 55.26149,   0.00000, 0.00000, 357.04742);
CreateDynamicObject(3655, 2743.40430, -897.78210, 59.55960,   20.00000, 0.00000, 86.08128);
CreateDynamicObject(3655, 2767.30933, -941.60718, 68.61514,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2735.06616, -905.36591, 69.04529,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2747.44702, -902.86108, 63.51361,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2755.40356, -905.81799, 70.47320,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2746.31738, -904.32593, 71.60059,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2755.40356, -905.81799, 61.90995,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2823.38721, -899.97705, 27.18668,   0.00000, 0.00000, -5.94000);
CreateDynamicObject(3629, 2764.79932, -1000.81433, 43.53353,   -24.00000, 90.00000, 272.54721);
CreateDynamicObject(3629, 2792.13989, -999.31488, 32.19796,   -18.00000, 90.00000, 272.00000);
CreateDynamicObject(3655, 2819.73535, -998.28687, 30.91825,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2815.82129, -999.96045, 45.94700,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2817.76782, -997.99030, 38.29014,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2814.82446, -1000.41235, 52.25350,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3655, 2803.99414, -902.61530, 53.36876,   20.00000, 0.00000, 91.51564);
CreateDynamicObject(3655, 2783.94873, -904.31177, 62.43070,   20.00000, 0.00000, 91.51564);
CreateDynamicObject(3655, 2793.09717, -903.12555, 56.98660,   20.00000, 0.00000, 91.51564);
CreateDynamicObject(3655, 2772.13818, -904.86285, 66.77034,   20.00000, 0.00000, 91.51564);
CreateDynamicObject(3655, 2761.88013, -904.72339, 70.47320,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3629, 2777.86328, -898.50818, 36.55777,   -24.00000, -90.00000, 272.44717);
CreateDynamicObject(3655, 2753.74780, -898.84937, 55.15716,   20.00000, 0.00000, 86.08128);
CreateDynamicObject(3655, 2806.96387, -905.60815, 43.25922,   0.00000, 0.00000, -6.06000);
CreateDynamicObject(3655, 2771.14087, -1024.14612, 51.41101,   20.00000, 0.00000, 90.73927);
CreateDynamicObject(3655, 2779.23633, -1007.71930, 64.21158,   20.00000, 0.00000, 90.73927);
CreateDynamicObject(3655, 2802.11182, -1006.95471, 55.12341,   20.00000, 0.00000, 90.73927);
CreateDynamicObject(19791, 2810.34082, -1004.46765, 46.84639,   0.00000, 0.00000, 359.17078);
CreateDynamicObject(3629, 2725.62329, -1002.64001, 51.97185,   0.00000, 90.00000, 272.54721);
CreateDynamicObject(3655, 2818.73999, -1011.02118, 30.91825,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2814.91016, -1020.87939, 30.91825,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2815.06787, -1007.64246, 38.29014,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2811.81104, -1019.36035, 38.29014,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2813.23730, -1007.01617, 45.94700,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2809.74048, -1017.88824, 45.94700,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2793.36572, -1025.67212, 42.49555,   20.00000, 0.00000, 89.66051);
CreateDynamicObject(3655, 2786.87402, -1015.15967, 53.08194,   20.00000, 0.00000, 89.56052);
CreateDynamicObject(3655, 2776.00464, -1014.90247, 57.43021,   20.00000, 0.00000, 89.56052);
CreateDynamicObject(3655, 2769.20996, -1008.15082, 70.28011,   20.00000, 0.00000, 90.73927);
CreateDynamicObject(3655, 2758.52197, -1007.32159, 74.71833,   20.00000, 0.00000, 90.73927);
CreateDynamicObject(3655, 2748.31665, -989.61774, 76.31139,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2734.89673, -991.30133, 76.31139,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2747.39404, -1007.59595, 76.31139,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2734.13477, -1007.39172, 76.31139,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2760.43286, -1022.88715, 55.81352,   20.00000, 0.00000, 90.48908);
CreateDynamicObject(3655, 2752.16382, -1017.22308, 68.27571,   20.00000, 0.00000, 90.38908);
CreateDynamicObject(3655, 2739.41870, -1018.52307, 69.29456,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2726.52515, -1014.58514, 73.86423,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2719.89307, -1007.74316, 79.34185,   0.00000, 0.00000, 4.06797);
CreateDynamicObject(3655, 2715.49146, -993.10077, 76.31139,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2708.96582, -994.75977, 79.92466,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2732.62231, -991.50775, 75.90536,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2715.35815, -1014.96625, 78.60546,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2706.03198, -1012.20862, 83.84753,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2691.92212, -1011.52100, 84.64764,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2695.59180, -996.48004, 84.45131,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2688.39258, -992.80261, 86.66740,   0.00000, 0.00000, 4.00797);
CreateDynamicObject(3655, 2682.15137, -985.80151, 88.03048,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2679.04761, -973.87360, 83.49738,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2716.15454, -978.72644, 75.88463,   0.00000, 0.00000, 1.31062);
CreateDynamicObject(3655, 2716.67749, -967.39087, 75.88463,   0.00000, 0.00000, 359.70093);
CreateDynamicObject(3655, 2715.89795, -955.25336, 75.04845,   0.00000, 0.00000, 359.70093);
CreateDynamicObject(3655, 2712.51099, -943.20776, 75.04845,   0.00000, 0.00000, 359.70093);
CreateDynamicObject(3655, 2713.13599, -931.33215, 72.88715,   0.00000, 0.00000, 359.70093);
CreateDynamicObject(3655, 2707.28711, -919.66980, 72.16579,   0.00000, 0.00000, 359.70093);
CreateDynamicObject(3655, 2703.88208, -979.35883, 81.17347,   0.00000, 0.00000, 93.96278);
CreateDynamicObject(3655, 2689.06396, -984.47864, 83.51083,   0.00000, 0.00000, 95.19739);
CreateDynamicObject(3655, 2687.22070, -970.87683, 82.80179,   0.00000, 0.00000, 95.19739);
CreateDynamicObject(3655, 2701.24951, -965.86847, 81.17347,   0.00000, 0.00000, 93.96278);
CreateDynamicObject(3655, 2698.93237, -954.74036, 81.17347,   0.00000, 0.00000, 93.96278);
CreateDynamicObject(3655, 2685.49585, -959.19531, 81.17347,   0.00000, 0.00000, 93.96278);
CreateDynamicObject(3655, 2698.40552, -947.91638, 73.77048,   0.00000, 0.00000, 93.96278);
CreateDynamicObject(3655, 2684.95898, -950.32269, 73.77048,   0.00000, 0.00000, 93.96278);
CreateDynamicObject(3655, 2698.75537, -935.44263, 71.05849,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2684.35010, -936.57086, 71.05849,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2711.55322, -896.70380, 64.31734,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2712.48486, -884.76038, 58.93801,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2710.72192, -908.00232, 70.61493,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2722.94556, -863.73914, 58.93801,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2708.82935, -868.07794, 58.93801,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2733.72388, -894.85040, 63.14736,   0.00000, 0.00000, 1.26998);
CreateDynamicObject(3655, 2733.58643, -885.64862, 55.95356,   0.00000, 0.00000, 1.26998);
CreateDynamicObject(3655, 2815.76001, -999.99841, 45.94700,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2818.97534, -987.04108, 45.94700,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2820.30347, -975.44702, 44.67117,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2821.11987, -963.89343, 44.67117,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2821.39697, -951.97638, 44.67117,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2822.26587, -940.32263, 44.67117,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2823.45410, -928.92432, 44.67117,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2824.53613, -917.09387, 44.67117,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2819.49878, -907.08984, 44.67117,   0.00000, 0.00000, -6.00000);
CreateDynamicObject(3655, 2663.96729, -971.60022, 80.86404,   0.00000, 0.00000, 102.49490);
CreateDynamicObject(3655, 2676.37524, -959.11090, 81.29079,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2671.70996, -947.69031, 78.46291,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2660.69897, -956.37531, 79.90667,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2643.69189, -958.02490, 81.77735,   0.00000, 0.00000, 102.49493);
CreateDynamicObject(3655, 2628.29053, -937.92474, 80.26350,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2642.48071, -936.26013, 79.34737,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2624.58838, -918.93835, 80.87870,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2638.51880, -917.21307, 79.13821,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2662.89160, -937.68939, 78.30965,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2652.87280, -914.44312, 76.56659,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2668.97705, -937.01654, 75.26108,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2662.03687, -932.00415, 77.15997,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2672.09692, -929.13428, 74.22086,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2665.96753, -911.37451, 74.93816,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2677.78516, -908.99017, 72.65322,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(12814, 2681.50537, -924.56659, 68.35183,   0.00000, 0.00000, 1.06320);
CreateDynamicObject(3655, 2685.42993, -907.45892, 71.15848,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2700.59790, -911.42535, 71.15848,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2700.57007, -898.04712, 71.15848,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(12814, 2680.92358, -876.21649, 59.89936,   -20.00000, 0.00000, 1.00000);
CreateDynamicObject(3655, 2684.38281, -893.95544, 68.21937,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2699.56860, -888.02826, 58.53954,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2684.05542, -880.24091, 66.88642,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2697.58325, -869.67841, 62.71417,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2683.15576, -866.70575, 66.72221,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2699.56860, -888.02826, 66.88642,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2711.75464, -887.13043, 64.31734,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2734.34766, -885.77319, 60.76674,   0.00000, 0.00000, 1.26998);
CreateDynamicObject(10675, 2725.61890, -820.97455, 58.50078,   0.00000, 0.00000, 358.03851);
CreateDynamicObject(3629, 2754.39697, -857.41638, 22.31389,   -24.00000, -90.00000, 266.25055);
CreateDynamicObject(3629, 2792.54883, -859.51660, 4.63979,   -24.00000, -90.00000, 266.25055);
CreateDynamicObject(3629, 2737.90405, -834.91718, 33.05577,   0.00000, 90.00000, 357.79807);
CreateDynamicObject(10675, 2724.41968, -844.05377, 58.50078,   0.00000, 0.00000, 358.03851);
CreateDynamicObject(19313, 2734.91699, -809.78589, 55.48026,   0.00000, 0.00000, 357.48438);
CreateDynamicObject(19313, 2720.89648, -809.09308, 55.48026,   0.00000, 0.00000, 357.48438);
CreateDynamicObject(19313, 2741.54175, -816.98169, 55.48030,   0.00000, 0.00000, 87.23875);
CreateDynamicObject(19313, 2740.85962, -830.97913, 55.48030,   0.00000, 0.00000, 87.23875);
CreateDynamicObject(19313, 2740.17017, -844.89368, 55.48030,   0.00000, 0.00000, 87.23875);
CreateDynamicObject(19313, 2739.58789, -858.83093, 55.48030,   0.00000, 0.00000, 87.23875);
CreateDynamicObject(3629, 2715.69678, -811.06555, 33.05580,   0.00000, 90.00000, 87.28943);
CreateDynamicObject(3655, 2706.37451, -814.10400, 58.32281,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2706.08423, -825.77399, 58.32281,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2704.16333, -836.61310, 58.32281,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2689.52881, -848.17645, 65.52814,   0.00000, 0.00000, 4.81286);
CreateDynamicObject(3655, 2709.91528, -863.30896, 58.93801,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2699.19556, -864.89954, 62.82848,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2703.73364, -847.91437, 58.32281,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2679.96680, -848.15710, 67.08586,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2702.87573, -847.74774, 64.84874,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2734.35034, -860.35535, 58.12181,   0.00000, 0.00000, 355.71918);
CreateDynamicObject(3655, 2402.57129, -1001.04810, 78.68527,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3629, 2417.88599, -1011.88861, 53.74884,   0.00000, 90.00000, 271.87463);
CreateDynamicObject(3655, 2398.98193, -1018.07361, 54.35648,   0.00000, 0.00000, 89.61490);
CreateDynamicObject(3655, 2399.11011, -1016.23993, 69.91960,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2399.19995, -1017.29956, 61.81458,   0.00000, 0.00000, 89.61490);
CreateDynamicObject(3655, 2410.64282, -1018.76904, 54.35648,   0.00000, 0.00000, 89.61490);
CreateDynamicObject(3655, 2410.73315, -1017.82159, 61.81458,   0.00000, 0.00000, 89.61490);
CreateDynamicObject(3655, 2410.54272, -1016.17236, 69.91960,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2422.27344, -1018.56116, 54.35648,   0.00000, 0.00000, 89.61490);
CreateDynamicObject(3655, 2422.36182, -1017.21423, 61.81458,   0.00000, 0.00000, 89.61490);
CreateDynamicObject(3655, 2422.14551, -1016.28876, 69.91960,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2433.15674, -1014.46875, 68.89432,   0.00000, 0.00000, 96.54688);
CreateDynamicObject(3655, 2433.38086, -1017.22351, 54.35648,   0.00000, 0.00000, 96.54688);
CreateDynamicObject(3655, 2433.45190, -1016.10040, 61.43637,   0.00000, 0.00000, 96.54688);
CreateDynamicObject(3655, 2443.50928, -1011.93176, 71.08360,   0.00000, 0.00000, 96.54688);
CreateDynamicObject(3655, 2444.50830, -1015.03009, 58.32443,   0.00000, 0.00000, 96.54688);
CreateDynamicObject(3655, 2443.94580, -1013.27435, 65.01295,   0.00000, 0.00000, 96.54688);
CreateDynamicObject(3629, 2467.90259, -1010.14624, 53.74884,   0.00000, 90.00000, 271.87463);
CreateDynamicObject(3655, 2456.45557, -1010.72339, 70.97121,   0.00000, 0.00000, 87.93685);
CreateDynamicObject(3655, 2456.40698, -1015.48071, 60.94545,   0.00000, 0.00000, 87.93685);
CreateDynamicObject(3655, 2456.50781, -1013.53137, 67.72005,   0.00000, 0.00000, 87.93685);
CreateDynamicObject(3655, 2468.10938, -1017.00433, 60.94545,   0.00000, 0.00000, 87.93685);
CreateDynamicObject(3655, 2468.21680, -1015.33679, 67.72005,   0.00000, 0.00000, 87.93685);
CreateDynamicObject(3655, 2468.28271, -1013.15479, 70.97121,   0.00000, 0.00000, 87.93685);
CreateDynamicObject(3655, 2410.20654, -1000.66614, 78.68527,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2422.13525, -1000.30566, 78.68527,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2433.90527, -1000.47510, 78.68527,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2446.11743, -1000.59869, 78.68527,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2457.33154, -1000.38385, 78.68527,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2469.35278, -1000.05511, 78.68527,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(3655, 2480.86304, -999.70477, 78.68527,   0.00000, 0.00000, 91.69283);
CreateDynamicObject(19313, 2468.80200, -992.47998, 81.36220,   0.00000, 0.00000, 1.49474);
CreateDynamicObject(19313, 2454.69507, -992.79999, 81.36220,   0.00000, 0.00000, 1.49474);
CreateDynamicObject(19313, 2440.67505, -993.37909, 81.36220,   0.00000, 0.00000, 1.49474);
CreateDynamicObject(3655, 2481.91333, -1016.65845, 70.62561,   0.00000, 0.00000, 77.87074);
CreateDynamicObject(3655, 2481.50269, -1019.02704, 65.90488,   0.00000, 0.00000, 77.87074);
CreateDynamicObject(3655, 2492.87598, -1022.98590, 68.09080,   0.00000, 0.00000, 77.87074);
CreateDynamicObject(3655, 2493.50024, -1018.79291, 72.00655,   0.00000, 0.00000, 77.87074);
CreateDynamicObject(14409, 2440.74927, -991.85211, 77.61690,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(14409, 2491.06738, -994.70178, 77.61690,   0.00000, 0.00000, 152.00000);
CreateDynamicObject(3629, 2467.60205, -997.76709, 53.74880,   0.00000, -90.00000, 271.87460);
CreateDynamicObject(19377, 2487.88428, -996.21869, 79.92366,   0.00000, 0.00000, 331.57217);
CreateDynamicObject(14409, 2495.33765, -1008.68317, 72.61932,   0.00000, 0.00000, 271.00000);
CreateDynamicObject(19377, 2497.40771, -1003.79211, 74.76652,   0.00000, 0.00000, 267.08209);
CreateDynamicObject(19377, 2497.18506, -1011.21448, 73.04073,   0.00000, 0.00000, 267.08209);
CreateDynamicObject(14409, 2495.26538, -1004.75885, 72.61932,   0.00000, 0.00000, 271.00000);
CreateDynamicObject(3629, 2511.53369, -1014.16034, 48.91864,   0.00000, 90.00000, 248.21964);
CreateDynamicObject(3655, 2508.89648, -1000.33002, 73.76144,   0.00000, 0.00000, 66.45991);
CreateDynamicObject(3655, 2519.50098, -1005.43591, 73.76144,   0.00000, 0.00000, 66.45991);
CreateDynamicObject(3655, 2530.38037, -1010.03003, 73.76144,   0.00000, 0.00000, 66.45991);
CreateDynamicObject(3655, 2504.44629, -1019.19092, 72.63405,   0.00000, 0.00000, 66.45991);
CreateDynamicObject(3655, 2515.67725, -1023.10712, 73.76144,   0.00000, 0.00000, 66.45991);
CreateDynamicObject(3655, 2526.73047, -1027.13159, 73.76144,   0.00000, 0.00000, 66.45991);
CreateDynamicObject(3655, 2511.54077, -1031.06140, 71.46148,   0.00000, 0.00000, 77.87074);
CreateDynamicObject(3655, 2522.64551, -1032.29895, 71.46150,   0.00000, 0.00000, 86.00000);
CreateDynamicObject(3655, 2534.52881, -1033.12256, 71.46150,   0.00000, 0.00000, 86.00000);
CreateDynamicObject(3655, 2546.36133, -1032.95618, 71.46150,   0.00000, 0.00000, 86.00000);
CreateDynamicObject(3629, 2559.09326, -1021.15051, 48.91860,   0.00000, 90.00000, 85.33592);
CreateDynamicObject(3655, 2541.63599, -1013.43060, 73.76144,   0.00000, 0.00000, 66.45991);
CreateDynamicObject(3655, 2536.45386, -1029.69568, 73.76144,   0.00000, 0.00000, 66.45991);
CreateDynamicObject(3655, 2557.24487, -1033.86523, 71.46150,   0.00000, 0.00000, 91.71721);
CreateDynamicObject(3655, 2551.48779, -1016.86444, 73.41959,   0.00000, 0.00000, 75.94067);
CreateDynamicObject(3655, 2560.58398, -1017.98029, 73.42297,   0.00000, 0.00000, 91.71721);
CreateDynamicObject(3655, 2572.84058, -1018.08405, 73.42300,   0.00000, 0.00000, 86.00000);
CreateDynamicObject(3655, 2568.86157, -1034.31812, 71.46150,   0.00000, 0.00000, 87.05840);
CreateDynamicObject(3655, 2574.80762, -1034.04956, 71.46150,   0.00000, 0.00000, 87.05840);
CreateDynamicObject(14409, 2582.56934, -1031.83191, 67.71648,   0.00000, 0.00000, 175.62263);
CreateDynamicObject(3655, 2503.09009, -1024.27014, 69.69080,   0.00000, 0.00000, 77.87074);
CreateDynamicObject(19313, 2484.43018, -1011.16107, 76.76064,   0.00000, 0.00000, 1.70183);
CreateDynamicObject(19313, 2470.39844, -1011.60095, 76.76064,   0.00000, 0.00000, 1.70183);
CreateDynamicObject(19313, 2456.33862, -1012.01282, 76.76064,   0.00000, 0.00000, 1.70183);
CreateDynamicObject(19313, 2442.29980, -1012.44727, 76.76064,   0.00000, 0.00000, 1.70183);
CreateDynamicObject(19313, 2428.26025, -1012.85266, 76.76064,   0.00000, 0.00000, 1.70183);
CreateDynamicObject(19313, 2414.24146, -1013.26678, 76.76064,   0.00000, 0.00000, 1.70183);
CreateDynamicObject(19313, 2400.19116, -1013.76471, 76.76064,   0.00000, 0.00000, 1.70183);
CreateDynamicObject(19377, 2398.25610, -997.93500, 77.66050,   0.00000, 90.00000, 1.35501);
CreateDynamicObject(14409, 2394.87036, -1005.70575, 74.31290,   0.00000, 0.00000, 178.26688);
CreateDynamicObject(19377, 2392.92114, -998.49634, 62.93925,   0.00000, 0.00000, 1.35500);
CreateDynamicObject(19377, 2392.92114, -998.49634, 72.96937,   0.00000, 0.00000, 1.35500);
CreateDynamicObject(19377, 2393.20923, -1001.83759, 72.32862,   0.00000, 0.00000, 351.30771);
CreateDynamicObject(19377, 2393.20923, -1001.83759, 62.93930,   0.00000, 0.00000, 351.30771);
CreateDynamicObject(19313, 2392.97217, -996.18256, 78.06810,   0.00000, 0.00000, 91.75595);
CreateDynamicObject(19313, 2393.00757, -1006.97894, 77.85075,   0.00000, 0.00000, 89.05861);
CreateDynamicObject(3655, 2755.25537, -926.94208, 71.63464,   0.00000, 0.00000, 359.70093);
CreateDynamicObject(3655, 2742.09082, -926.53998, 71.63464,   0.00000, 0.00000, 359.70093);
CreateDynamicObject(3655, 2730.01587, -927.12866, 71.63464,   0.00000, 0.00000, 359.70093);
CreateDynamicObject(14409, 2721.69824, -926.31360, 66.71030,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(3655, 2761.89404, -989.18195, 69.70060,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2767.01465, -977.36371, 69.65908,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2765.27026, -962.53070, 75.53653,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2763.88916, -950.61414, 74.48287,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3655, 2764.25049, -938.73615, 74.48287,   0.00000, 0.00000, 0.20100);
CreateDynamicObject(3594, 2591.63916, -988.52069, 78.85590,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3594, 2591.14868, -986.24084, 79.49223,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(3594, 2566.20483, -971.13403, 81.74191,   0.00000, 0.00000, 89.69775);
CreateDynamicObject(3594, 2566.80786, -973.96149, 81.74191,   0.00000, 0.00000, 89.69775);
CreateDynamicObject(3594, 2566.94556, -972.27094, 82.50765,   0.00000, 0.00000, 89.69775);
CreateDynamicObject(3655, 2668.33057, -850.35651, 69.63810,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2668.97021, -867.38452, 70.16529,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2668.40747, -881.75024, 71.92260,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2668.24927, -894.44232, 71.92260,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3629, 2645.02075, -908.68604, 51.31740,   -9.00000, 90.00000, 276.84305);
CreateDynamicObject(3655, 2656.71069, -895.61261, 66.56615,   0.00000, 0.00000, 94.08279);
CreateDynamicObject(3655, 2644.88135, -898.44238, 69.24222,   0.00000, 0.00000, 94.08279);
CreateDynamicObject(3655, 2632.69678, -900.38293, 70.54388,   0.00000, 0.00000, 94.08279);
CreateDynamicObject(3655, 2621.11597, -902.56927, 72.23935,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3629, 2598.35278, -910.52649, 54.94385,   0.00000, -90.00000, 276.29227);
CreateDynamicObject(3655, 2607.43115, -903.76495, 80.26350,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2595.38916, -906.44531, 80.87870,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2573.07983, -933.26117, 85.02922,   0.00000, 0.00000, 8.55854);
CreateDynamicObject(3655, 2682.90210, -927.18762, 71.63895,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2682.90210, -927.18762, 71.63895,   0.00000, 0.00000, 93.90279);
CreateDynamicObject(3655, 2699.56787, -923.28003, 70.93118,   0.00000, 0.00000, 359.70093);
CreateDynamicObject(3655, 2575.73193, -896.05920, 82.97338,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2577.39087, -883.77612, 82.97338,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2594.35449, -888.90839, 80.39271,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2608.23071, -885.45978, 79.05832,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2621.11597, -902.56927, 80.87870,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2644.83691, -898.43671, 76.57190,   0.00000, 0.00000, 94.08279);
CreateDynamicObject(3655, 2656.71069, -895.61261, 74.53393,   0.00000, 0.00000, 94.08279);
CreateDynamicObject(3655, 2632.69678, -900.38293, 78.46083,   0.00000, 0.00000, 94.08279);
CreateDynamicObject(3655, 2621.82349, -882.44489, 77.36258,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2635.59277, -880.25623, 74.43933,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2649.19604, -879.07794, 72.35825,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2646.90137, -864.25488, 72.35825,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2655.10718, -847.33173, 71.41587,   0.00000, 0.00000, 5.31143);
CreateDynamicObject(3655, 2641.38696, -849.74420, 73.71461,   0.00000, 0.00000, 5.31143);
CreateDynamicObject(3655, 2627.75415, -851.89331, 76.52739,   0.00000, 6.00000, 5.00000);
CreateDynamicObject(3655, 2613.93164, -853.17719, 78.74725,   0.00000, 6.00000, 5.00000);
CreateDynamicObject(3655, 2599.96094, -854.57257, 80.89634,   0.00000, 6.00000, 5.00000);
CreateDynamicObject(3655, 2586.82495, -855.74426, 82.58814,   0.00000, 6.00000, 5.00000);
CreateDynamicObject(3655, 2576.98535, -872.58533, 82.97338,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2576.57983, -861.11633, 82.97338,   0.00000, 0.00000, 7.18622);
CreateDynamicObject(3655, 2633.04810, -865.97577, 76.52739,   0.00000, 6.00000, 5.00000);
CreateDynamicObject(3655, 2615.18359, -868.03729, 77.82176,   0.00000, 6.00000, 5.00000);
CreateDynamicObject(3655, 2604.47534, -869.93341, 79.70521,   0.00000, 6.00000, 5.00000);
CreateDynamicObject(3655, 2593.92261, -871.04236, 81.75499,   0.00000, 6.00000, 5.00000);
CreateDynamicObject(12814, 2502.03857, -823.97333, 94.46851,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(12814, 2531.72827, -823.90509, 94.46851,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(3655, 2491.18872, -844.71167, 97.81712,   0.00000, 0.00000, 94.95812);
CreateDynamicObject(3655, 2489.02271, -831.16351, 98.82470,   0.00000, 0.00000, 94.95810);
CreateDynamicObject(3655, 2489.11670, -817.07318, 98.82470,   0.00000, 0.00000, 94.95810);
CreateDynamicObject(3655, 2488.33569, -806.19910, 98.82471,   0.00000, 0.00000, 94.95812);
CreateDynamicObject(3655, 2535.96802, -841.85193, 96.95895,   0.00000, 0.00000, 1.38480);
CreateDynamicObject(3655, 2543.58936, -840.99225, 96.95895,   0.00000, 0.00000, 1.38480);
CreateDynamicObject(14407, 2530.63135, -817.85486, 92.86081,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(14407, 2534.61157, -819.94427, 94.31170,   0.00000, 0.00000, 0.63516);
CreateDynamicObject(18764, 2535.01514, -817.73181, 93.83035,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(14407, 2534.73779, -815.51428, 94.31170,   0.00000, 0.00000, 180.63519);
CreateDynamicObject(19377, 2530.61328, -815.82062, 89.19756,   58.00000, 0.00000, 90.00000);
CreateDynamicObject(19377, 2530.54443, -819.79877, 89.19756,   58.00000, 0.00000, 90.00000);
CreateDynamicObject(19377, 2532.69678, -819.87054, 90.67084,   58.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2532.75513, -815.57343, 90.67080,   58.00000, 0.00000, 180.00000);
CreateDynamicObject(19377, 2546.46680, -810.11957, 102.31927,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(18765, 2535.02832, -808.32135, 95.09563,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(18765, 2534.74756, -826.86591, 95.09050,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(18765, 2541.56470, -817.18793, 95.09050,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(18765, 2541.63452, -826.92511, 95.09050,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(18765, 2541.58984, -808.38330, 95.09050,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(18770, 2531.13843, -804.33893, 7.43829,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(18770, 2530.79272, -830.85278, 7.43829,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(18770, 2545.59790, -830.88269, 7.43829,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(18770, 2545.45850, -804.37689, 7.43829,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2536.63281, -817.63580, 92.89301,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2546.42529, -819.55963, 102.31927,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2546.44482, -826.88055, 102.31927,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(13641, 2539.20264, -816.38275, 86.57706,   0.00000, 0.00000, 89.93881);
CreateDynamicObject(19325, 2541.44092, -803.52960, 105.37310,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19325, 2534.94604, -803.53253, 105.37309,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19325, 2534.94604, -803.53253, 97.64958,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19325, 2534.94604, -803.53253, 101.49508,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19325, 2541.42261, -803.53772, 101.49510,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19325, 2541.44092, -803.52960, 97.64960,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2532.96826, -803.51349, 100.76306,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2537.66235, -803.54242, 105.65170,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2542.87354, -803.55029, 105.65170,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2532.96826, -803.51349, 105.65170,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2537.66235, -803.54242, 100.76310,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2542.87354, -803.55029, 100.76310,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(13641, 2539.01245, -844.05658, 86.57706,   0.00000, 0.00000, 90.34485);
CreateDynamicObject(19325, 2541.44238, -831.76764, 97.64960,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19325, 2534.94604, -803.53253, 97.64958,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19325, 2534.91016, -831.78387, 97.64960,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19325, 2534.91016, -831.78387, 105.37310,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19325, 2534.91016, -831.78387, 101.49510,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19325, 2541.44238, -831.76758, 101.49510,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19325, 2541.44238, -831.76758, 105.37310,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2543.08862, -831.69543, 100.76310,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2538.32935, -831.71515, 100.76310,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2533.47876, -831.74103, 100.76310,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2543.08862, -831.69537, 19362.00000,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2543.08862, -831.69537, 105.65170,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2538.32935, -831.71509, 105.65170,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19362, 2533.47876, -831.74103, 105.65170,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(18762, 2530.65454, -807.66730, 107.01789,   90.00000, 0.00000, 0.00000);
CreateDynamicObject(18762, 2530.65210, -812.53790, 107.01789,   90.00000, 0.00000, 0.00000);
CreateDynamicObject(18762, 2530.67627, -817.48730, 107.01789,   90.00000, 0.00000, 0.00000);
CreateDynamicObject(18762, 2530.66260, -822.47937, 107.01789,   90.00000, 0.00000, 0.00000);
CreateDynamicObject(18762, 2530.67017, -827.39984, 107.01789,   90.00000, 0.00000, 0.00000);
CreateDynamicObject(18762, 2534.47021, -803.90375, 107.01790,   90.00000, 0.00000, 90.00000);
CreateDynamicObject(18762, 2539.46362, -803.92407, 107.01790,   90.00000, 0.00000, 90.00000);
CreateDynamicObject(18762, 2543.63306, -803.92517, 107.01790,   90.00000, 0.00000, 90.00000);
CreateDynamicObject(18762, 2546.17163, -807.43011, 107.01789,   90.00000, 0.00000, 0.00000);
CreateDynamicObject(18762, 2546.17822, -812.25879, 107.01789,   90.00000, 0.00000, 0.00000);
CreateDynamicObject(18762, 2546.14307, -817.01697, 107.01789,   90.00000, 0.00000, 0.00000);
CreateDynamicObject(18762, 2546.14966, -821.86731, 107.01789,   90.00000, 0.00000, 0.00000);
CreateDynamicObject(18762, 2546.10938, -826.82898, 107.01789,   90.00000, 0.00000, 0.00000);
CreateDynamicObject(18762, 2546.09595, -829.36023, 107.01789,   90.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2535.29053, -808.81500, 107.50192,   0.00000, 90.00000, 90.00000);
CreateDynamicObject(19377, 2541.24731, -808.82050, 107.50192,   0.00000, 90.00000, 90.00000);
CreateDynamicObject(19377, 2541.30518, -818.99756, 107.50192,   0.00000, 90.00000, 90.00000);
CreateDynamicObject(19377, 2541.34668, -826.50867, 107.50192,   0.00000, 90.00000, 90.00000);
CreateDynamicObject(19377, 2535.32910, -826.37317, 107.50192,   0.00000, 90.00000, 90.00000);
CreateDynamicObject(19377, 2535.35522, -817.44336, 107.50192,   0.00000, 90.00000, 90.00000);
CreateDynamicObject(18762, 2533.67456, -831.34387, 107.01790,   90.00000, 0.00000, 90.00000);
CreateDynamicObject(18762, 2538.49463, -831.42078, 107.01790,   90.00000, 0.00000, 90.00000);
CreateDynamicObject(18762, 2542.96973, -831.33618, 107.01790,   90.00000, 0.00000, 90.00000);
CreateDynamicObject(2435, 2537.07666, -817.16608, 97.58810,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2435, 2537.07178, -818.08130, 97.58810,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2435, 2537.08154, -816.24579, 97.58810,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2435, 2537.09253, -815.32568, 97.58810,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2434, 2537.07495, -818.98138, 97.58810,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2434, 2537.27979, -814.19727, 97.58810,   0.00000, 0.00000, 178.00000);
CreateDynamicObject(14820, 2537.18018, -817.79742, 98.64230,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(14820, 2537.17163, -815.63007, 98.64230,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19377, 2546.50415, -832.04712, 95.08281,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2546.60156, -803.70844, 84.92168,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2541.83252, -798.95135, 84.86548,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19377, 2532.24756, -798.94360, 85.55583,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19377, 2522.71094, -798.98010, 95.08280,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19377, 2513.20435, -798.97937, 95.08280,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19377, 2503.56714, -799.04095, 95.08280,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19377, 2495.47485, -798.99518, 95.08280,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19377, 2546.60156, -803.70844, 95.08281,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2546.58521, -813.18640, 95.08281,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2546.57666, -822.68787, 95.08281,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2546.59888, -832.13727, 95.08281,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2546.58521, -813.18640, 84.92170,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2546.57666, -822.68793, 84.92170,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2546.59888, -832.13733, 84.92170,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19377, 2541.83252, -798.95135, 95.08280,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(19377, 2532.24756, -798.94360, 95.08280,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(2232, 2530.31519, -804.39294, 101.60281,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.30859, -804.44897, 100.42588,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.31494, -804.40631, 98.21279,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.31519, -804.39960, 99.36760,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.30933, -805.07056, 98.21279,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.30933, -805.07056, 99.36760,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.30933, -805.07056, 101.60281,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.30933, -805.07056, 100.42588,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.13208, -812.92493, 99.38766,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.13208, -812.92493, 98.21279,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.21191, -812.26917, 99.34121,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.21191, -812.26917, 98.21279,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.10425, -822.31158, 99.23605,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.10571, -823.02045, 99.33715,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.10571, -823.02045, 98.11179,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2530.10425, -822.31158, 98.11179,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2529.93213, -830.13153, 99.22998,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2529.89136, -830.79028, 99.25186,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2529.89136, -830.79028, 98.11179,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(2232, 2529.93213, -830.13153, 98.11179,   0.00000, 0.00000, -90.00000);
CreateDynamicObject(16151, 2498.42896, -800.09637, 94.80960,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(643, 2496.26709, -804.45654, 95.07982,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(643, 2500.00073, -804.61060, 95.07982,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(643, 2503.37256, -802.34229, 95.07982,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(643, 2498.09595, -808.82281, 95.07982,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(643, 2503.11328, -807.64313, 95.07982,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(643, 2506.30078, -804.59082, 95.07982,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(643, 2508.85010, -801.62091, 95.07982,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(1823, 2542.22046, -830.76074, 97.58736,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(1823, 2538.69922, -830.80005, 97.58736,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(1823, 2535.49463, -830.76178, 97.58736,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(1823, 2542.87915, -805.83008, 97.58736,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19457, 2536.58838, -829.92590, 97.58201,   0.00000, 90.00000, 90.00000);
CreateDynamicObject(19457, 2542.01050, -830.02002, 97.57695,   0.00000, 90.00000, 90.00000);
CreateDynamicObject(2125, 2543.30493, -804.33148, 97.97449,   0.00000, 0.00000, -0.06000);
CreateDynamicObject(2125, 2542.17310, -805.47925, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2535.07202, -830.22101, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2536.00488, -831.27643, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2538.07861, -830.23956, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2539.15894, -831.43481, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2541.51636, -830.25409, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2542.77393, -831.33105, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19457, 2536.88599, -805.26007, 97.58201,   0.00000, 90.00000, 90.00000);
CreateDynamicObject(19457, 2541.77661, -805.29138, 97.57695,   0.00000, 90.00000, 90.00000);
CreateDynamicObject(1823, 2532.70239, -830.70770, 97.58736,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2533.20654, -831.14142, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2532.03613, -830.24481, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(1823, 2533.95313, -805.89972, 97.58736,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2533.25366, -805.29749, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2534.32397, -804.40070, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2537.43945, -804.39014, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2536.44482, -805.37860, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(1823, 2536.98560, -805.88922, 97.58736,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(1823, 2539.88550, -805.87433, 97.58736,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(2125, 2540.28247, -804.37598, 97.97449,   0.00000, 0.00000, -0.06000);
CreateDynamicObject(2125, 2539.17261, -805.38885, 97.97449,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(18656, 2531.25977, -803.16528, 106.33739,   120.00000, 0.00000, 0.00000);
CreateDynamicObject(18656, 2532.20972, -832.02594, 106.33740,   120.00000, 0.00000, 193.00000);
CreateDynamicObject(8874, 2536.00439, -806.84064, 102.84232,   -105.00000, 0.00000, 25.00000);
CreateDynamicObject(8874, 2533.96021, -826.52686, 102.84230,   -105.00000, 0.00000, 91.00000);
CreateDynamicObject(3438, 2546.29761, -821.29285, 101.13535,   0.00000, 0.00000, 359.69696);
CreateDynamicObject(3438, 2546.36475, -814.45221, 101.13535,   0.00000, 0.00000, 359.69696);
CreateDynamicObject(19128, 2540.11670, -820.75854, 97.58782,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19128, 2540.23608, -816.75598, 97.58782,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19128, 2540.24243, -812.95758, 97.58782,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19128, 2544.24170, -812.92480, 97.58782,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19128, 2544.19312, -816.79315, 97.58782,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19128, 2544.08643, -820.73688, 97.58782,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(970, 2530.20239, -806.87549, 98.10220,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(970, 2530.21680, -811.02856, 98.10220,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(970, 2529.85107, -825.42487, 98.10220,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(970, 2529.83887, -829.48254, 98.10220,   0.00000, 0.00000, 90.00000);
CreateDynamicObject(1215, 2532.62305, -815.58704, 96.68025,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(1215, 2532.69751, -820.06708, 96.68025,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(1215, 2532.72095, -822.06079, 97.69638,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(1215, 2532.69800, -813.13116, 97.69638,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(19455, 2546.11816, -817.81702, 101.49570,   0.00000, 0.00000, 0.00000);
CreateDynamicObject(3655, 2774.38354, -988.01575, 69.70060,   0.00000, 0.00000, 0.20100);
  CreateDynamicObject(19791, 2788.69360, -989.24414, 49.30449,   0.00000, 0.00000, 0.00000);





        //-> Sala de Reuniones | By. NúO
	CreateDynamicObject(4604, 4.70000, 83.70000, 4012.20996,   0.00000, 0.00000, 87.99000);
	CreateDynamicObject(8565, -7.80000, 100.20000, 4015.80005,   0.00000, 0.00000, 357.98001);
	CreateDynamicObject(2774, -28.05000, 68.70000, 4024.00000,   0.00000, 0.00000, 357.98999);
	CreateDynamicObject(8565, 7.50000, 33.40000, 4015.80005,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(8565, 29.00000, 64.80000, 4015.80005,   0.00000, 0.00000, 269.98001);
	CreateDynamicObject(8565, -16.70000, 14.30000, 4015.80005,   0.00000, 0.00000, 269.98001);
	CreateDynamicObject(5156, -82.70000, 34.00000, 3999.69995,   0.00000, 89.99000, 271.98999);
	CreateDynamicObject(2774, -7.00000, 53.90000, 4024.00000,   0.00000, 0.00000, 357.98001);
	CreateDynamicObject(2774, -7.00000, 81.00000, 4024.00000,   0.00000, 0.00000, 357.97000);
	CreateDynamicObject(2774, -7.00000, 70.80000, 4024.00000,   0.00000, 0.00000, 357.97000);
	CreateDynamicObject(2774, -7.00000, 60.60000, 4024.00000,   0.00000, 0.00000, 357.97000);
	CreateDynamicObject(2774, -6.90000, 69.40000, 4015.50000,   0.00000, 89.99000, 269.98001);
	CreateDynamicObject(2774, -6.90000, 54.70000, 4015.50000,   0.00000, 89.99000, 269.98001);
	CreateDynamicObject(2395, -7.40000, 79.90000, 4012.19995,   0.00000, 0.00000, 267.98999);
	CreateDynamicObject(1491, -7.45000, 76.70000, 4012.19995,   0.00000, 0.00000, 267.98999);
	CreateDynamicObject(1491, -7.45000, 73.70000, 4012.19995,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2395, -7.60000, 73.30000, 4012.19995,   0.00000, 0.00000, 267.98001);
	CreateDynamicObject(1649, -7.10000, 67.90000, 4013.80005,   0.00000, 0.00000, 268.00000);
	CreateDynamicObject(1649, -7.25000, 63.50000, 4013.80005,   0.00000, 0.00000, 267.98999);
	CreateDynamicObject(1649, -7.30000, 57.70000, 4013.80005,   0.00000, 0.00000, 267.98999);
	CreateDynamicObject(1649, -7.45000, 53.30000, 4013.80005,   0.00000, 0.00000, 267.98999);
	CreateDynamicObject(2395, -7.30000, 79.70000, 4016.30005,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2395, -7.30000, 76.00000, 4016.30005,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2395, -7.30000, 72.30000, 4016.30005,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2395, -7.30000, 68.60000, 4016.30005,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2395, -7.30000, 64.90000, 4016.30005,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2395, -7.30000, 61.50000, 4016.30005,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2395, -7.30000, 57.80000, 4016.30005,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(5156, -7.70000, 55.00000, 4012.30005,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(2357, 4.90000, 61.60000, 4012.60010,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2357, 4.90000, 65.80000, 4012.60010,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2357, 4.90000, 70.00000, 4012.60010,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2357, -2.30000, 70.10000, 4012.60010,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2357, 3.40000, 72.80000, 4012.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2357, -0.80000, 72.80000, 4012.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2357, -2.30000, 65.90000, 4012.60010,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2357, -2.30000, 61.80000, 4012.60010,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2395, -7.40000, 70.50000, 4012.19995,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2395, -7.30000, 77.10000, 4012.19995,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2395, -6.60000, 77.10000, 4016.30005,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2395, -6.60000, 73.40000, 4016.30005,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2395, -6.60000, 69.70000, 4016.30005,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2395, -6.60000, 66.00000, 4016.30005,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2395, -6.60000, 62.30000, 4016.30005,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2395, -6.60000, 58.60000, 4016.30005,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2395, -6.60000, 54.90000, 4016.30005,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(1714, 1.40000, 74.60000, 4012.19995,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1714, 6.60000, 72.30000, 4012.19995,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1714, 6.60000, 70.80000, 4012.19995,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1714, 6.60000, 69.40000, 4012.19995,   0.00000, 0.00000, 266.00000);
	CreateDynamicObject(1714, 6.60000, 68.10000, 4012.19995,   0.00000, 0.00000, 265.98999);
	CreateDynamicObject(1714, 6.60000, 66.70000, 4012.19995,   0.00000, 0.00000, 265.98999);
	CreateDynamicObject(1714, 6.60000, 65.30000, 4012.19995,   0.00000, 0.00000, 265.98999);
	CreateDynamicObject(1714, 6.60000, 63.90000, 4012.19995,   0.00000, 0.00000, 265.98999);
	CreateDynamicObject(1714, 6.50000, 62.50000, 4012.19995,   0.00000, 0.00000, 265.98999);
	CreateDynamicObject(1714, 6.50000, 61.20000, 4012.19995,   0.00000, 0.00000, 265.98999);
	CreateDynamicObject(1714, 6.40000, 59.80000, 4012.19995,   0.00000, 0.00000, 265.98999);
	CreateDynamicObject(1714, -3.80000, 59.80000, 4012.19995,   0.00000, 0.00000, 91.99000);
	CreateDynamicObject(1714, -3.80000, 61.10000, 4012.19995,   0.00000, 0.00000, 91.99000);
	CreateDynamicObject(1714, -3.80000, 62.40000, 4012.19995,   0.00000, 0.00000, 91.99000);
	CreateDynamicObject(1714, -3.70000, 63.70000, 4012.19995,   0.00000, 0.00000, 91.99000);
	CreateDynamicObject(1714, -3.80000, 65.00000, 4012.19995,   0.00000, 0.00000, 91.99000);
	CreateDynamicObject(1714, -3.80000, 66.40000, 4012.19995,   0.00000, 0.00000, 91.99000);
	CreateDynamicObject(1714, -3.80000, 67.90000, 4012.19995,   0.00000, 0.00000, 91.99000);
	CreateDynamicObject(1714, -3.90000, 69.30000, 4012.19995,   0.00000, 0.00000, 91.99000);
	CreateDynamicObject(1714, -3.80000, 70.50000, 4012.19995,   0.00000, 0.00000, 91.99000);
	CreateDynamicObject(1714, -3.80000, 71.90000, 4012.19995,   0.00000, 0.00000, 91.99000);
	CreateDynamicObject(1714, -3.90000, 72.90000, 4012.19995,   0.00000, 0.00000, 91.99000);
	CreateDynamicObject(1667, 1.70000, 73.30000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, 5.40000, 72.30000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, 5.40000, 71.00000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, 5.40000, 69.70000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, 5.40000, 68.20000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, 5.40000, 66.90000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, 5.40000, 65.60000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, 5.40000, 64.00000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, 5.40000, 62.70000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, 5.40000, 61.40000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, 5.40000, 60.00000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, -2.80000, 59.90000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, -2.80000, 61.10000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, -2.70000, 62.20000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, -2.80000, 63.40000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, -2.80000, 64.60000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, -2.80000, 66.00000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, -2.80000, 67.40000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, -2.80000, 69.20000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, -2.70000, 70.40000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, -2.70000, 71.60000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, -2.70000, 72.70000, 4013.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1510, 1.10000, 73.30000, 4013.05005,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3044, 1.00000, 73.40000, 4013.10010,   0.00000, 0.00000, 28.00000);
	CreateDynamicObject(1846, 1.30000, 54.38000, 4015.00000,   90.00000, 90.00000, 270.00000);
	CreateDynamicObject(2229, 2.70000, 53.00000, 4014.30005,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2229, -0.70000, 53.00000, 4014.30005,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(2491, 4.00000, 57.90000, 4011.60010,   0.00000, 0.00000, 22.00000);
	CreateDynamicObject(1952, 3.90000, 57.40000, 4013.60010,   90.00000, 90.00000, 224.00000);
	CreateDynamicObject(2227, 1.60000, 70.80000, 4012.19995,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1726, 10.20000, 77.60000, 4012.19995,   0.00000, 0.00000, 268.00000);
	CreateDynamicObject(1726, 10.20000, 72.30000, 4012.19995,   0.00000, 0.00000, 267.98999);
	CreateDynamicObject(1726, 10.10000, 66.10000, 4012.19995,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(1726, 10.20000, 58.90000, 4012.19995,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2774, -11.70000, 52.60000, 4024.00000,   0.00000, 0.00000, 357.98001);
	CreateDynamicObject(2774, -18.60000, 52.60000, 4024.00000,   0.00000, 0.00000, 357.98001);
	CreateDynamicObject(2774, -13.30000, 52.50000, 4015.50000,   0.00000, 90.00000, 179.98000);
	CreateDynamicObject(1491, -13.80000, 53.00000, 4012.14990,   0.00000, 0.00000, 177.99001);
	CreateDynamicObject(1491, -16.80000, 53.00000, 4012.14990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2395, -17.20000, 53.10000, 4012.16992,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(2395, -10.60000, 53.10000, 4012.17993,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(2395, -12.90000, 52.90000, 4016.30005,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(2395, -16.60000, 52.90000, 4016.30005,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(2395, -13.00000, 52.90000, 4019.00000,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(2395, -16.40000, 52.90000, 4019.00000,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(2395, -13.34000, 52.87000, 4012.17993,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2395, -20.00000, 52.90000, 4012.17993,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2395, -17.40000, 52.70000, 4016.30005,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2395, -13.70000, 52.70000, 4016.30005,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2395, -17.50000, 52.70000, 4019.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2395, -13.80000, 52.70000, 4019.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1481, -11.10000, 50.00000, 4012.89990,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1481, -11.10000, 48.40000, 4012.89990,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2131, -11.30000, 46.40000, 4012.19995,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2131, -11.30000, 44.40000, 4012.19995,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2131, -11.30000, 42.40000, 4012.19995,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2132, -18.90000, 50.30000, 4012.19995,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2132, -18.90000, 48.30000, 4012.19995,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2339, -18.90000, 47.30000, 4012.19995,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2339, -18.90000, 46.30000, 4012.19995,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2339, -18.90000, 43.40000, 4012.19995,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2339, -18.90000, 42.40000, 4012.19995,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2339, -18.90000, 41.40000, 4012.19995,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2415, -11.50000, 39.20000, 4012.19995,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2415, -11.50000, 37.00000, 4012.19995,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2415, -11.50000, 34.80000, 4012.19995,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(2417, -14.30000, 34.70000, 4012.19995,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2417, -16.30000, 34.70000, 4012.19995,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(2417, -18.50000, 34.70000, 4012.19995,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(2426, -19.10000, 41.50000, 4013.29004,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2453, -19.10000, 42.30000, 4013.55005,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2453, -19.10000, 42.90000, 4013.55005,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2453, -19.10000, 43.50000, 4013.55005,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3461, -14.30000, 34.70000, 4011.62012,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3461, -16.30000, 34.70000, 4011.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3461, -18.50000, 34.80000, 4011.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1409, -17.30000, 52.50000, 4012.33008,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1370, -13.30000, 34.60000, 4012.69995,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1370, -15.30000, 34.70000, 4012.69995,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1370, -17.40000, 34.70000, 4012.69995,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(936, -18.70000, 39.20000, 4012.69995,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(936, -18.70000, 37.40000, 4012.69995,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(2804, -18.80000, 37.00000, 4013.28003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2804, -18.40000, 37.10000, 4013.28003,   0.00000, 0.00000, 48.00000);
	CreateDynamicObject(2804, -18.80000, 39.60000, 4013.28003,   0.00000, 0.00000, 48.00000);
	CreateDynamicObject(2806, -18.70000, 38.00000, 4013.37012,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2806, -18.50000, 38.80000, 4013.37012,   0.00000, 0.00000, 70.00000);
	CreateDynamicObject(2812, -19.00000, 48.20000, 4013.26001,   0.00000, 0.00000, 78.00000);
	CreateDynamicObject(2820, -19.10000, 50.10000, 4013.26001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2830, -19.00000, 50.60000, 4013.26001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2822, -18.90000, 46.40000, 4013.26001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2822, -18.90000, 47.10000, 4013.26001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1726, -17.60000, 81.70000, 4012.19995,   0.00000, 0.00000, 358.00000);
	CreateDynamicObject(1726, -11.40000, 81.40000, 4012.19995,   0.00000, 0.00000, 358.00000);
	CreateDynamicObject(1726, -24.70000, 68.50000, 4012.19995,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(1726, -18.90000, 56.80000, 4012.19995,   0.00000, 0.00000, 87.99000);
	CreateDynamicObject(1726, -18.80000, 64.00000, 4012.19995,   0.00000, 0.00000, 87.98000);
	CreateDynamicObject(630, -23.30000, 68.30000, 4013.19995,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(630, -13.40000, 81.70000, 4013.19995,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(630, -8.20000, 81.60000, 4013.19995,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(630, -19.00000, 61.30000, 4013.19995,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(5156, -67.80000, 95.50000, 4013.60010,   0.00000, 180.00000, 90.00000);
	CreateDynamicObject(5156, -28.10000, 78.00000, 4017.00000,   0.00000, 179.99001, 89.99000);
	CreateDynamicObject(5156, 2.40000, 66.30000, 4017.00000,   0.00000, 179.99001, 89.99000);
	CreateDynamicObject(335, -18.50000, 39.00000, 4013.69995,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(8565, -37.71130, 71.86260, 4015.80005,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(8565, -37.71130, 32.47270, 4015.80005,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(1566, -19.37670, 71.79020, 4013.59302,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1566, -19.37670, 74.91310, 4013.59302,   0.00000, 0.00000, -90.00000);


	//-> Gasolinera Grotti | By. ZC
	CreateDynamicObject(11547, 203.04, -1440.76, 14.98,   0.00, 0.00, 318.29);
	CreateDynamicObject(11546, 215.48, -1427.27, 12.16,   0.00, 0.00, 44.42);
	CreateDynamicObject(1676, 197.51, -1446.97, 13.71,   0.00, 0.00, 317.45);
	CreateDynamicObject(1676, 201.41, -1442.92, 13.71,   0.00, 0.00, 317.45);
	CreateDynamicObject(1676, 205.09, -1438.94, 13.71,   0.00, 0.00, 317.45);
	CreateDynamicObject(1676, 208.77, -1434.72, 13.71,   0.00, 0.00, 317.45);
	CreateDynamicObject(970, 198.17, -1446.31, 12.62,   0.00, 0.00, 317.76);
	CreateDynamicObject(970, 197.01, -1447.59, 12.58,   0.00, 0.00, 317.76);
	CreateDynamicObject(970, 201.75, -1442.23, 12.62,   0.00, 0.00, 317.76);
	CreateDynamicObject(970, 200.69, -1443.41, 12.62,   0.00, 0.00, 317.76);
	CreateDynamicObject(970, 204.44, -1439.43, 12.62,   0.00, 0.00, 318.28);
	CreateDynamicObject(970, 205.56, -1438.25, 12.62,   0.00, 0.00, 318.28);
	CreateDynamicObject(970, 208.06, -1435.31, 12.62,   0.00, 0.00, 318.28);
	CreateDynamicObject(970, 209.30, -1434.20, 12.62,   0.00, 0.00, 318.28);


	//-> Peaje: LS y LV | By. NúO
	CreateDynamicObjectEx(966, 1632.25537, 9.07947, 35.70000,   0.00000, 0.00000, 204.99939, 1000.0, 1000.0);
	CreateDynamicObjectEx(966, 1629.48706, -5.36000, 35.70000,   0.00000, 0.00000, 24.99939, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, 1616.91418, 35.96387, 36.00000,   0.00000, 0.00000, 22.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, 1649.62537, -41.13966, 35.73855,   0.00000, 0.00000, 21.99463, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, 1615.00000, 120.10000, 35.90000,   0.00000, 0.00000, 347.99463, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, 1634.90002, 205.60001, 30.70000,   0.00000, 0.00000, 347.99194, 1000.0, 1000.0);
	CreateDynamicObjectEx(7522, 1630.94373, 1.84988, 40.05271,   0.00000, 0.00000, 23.58000, 1000.0, 1000.0);
	CreateDynamicObject(1237, 1630.53210, 8.39224, 35.65030,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1631.51025, 8.83338, 35.65030,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1631.30273, -4.65554, 35.65030,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1630.29163, -5.04152, 35.65030,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1629.38037, 5.47883, 36.37953,   0.00000, 0.00000, 113.28000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1632.56482, -1.80627, 36.37953,   0.00000, 0.00000, 113.28000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1631.61011, -3.67795, 36.22434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1634.49597, -2.42500, 36.22434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1627.35950, 6.11797, 36.22434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1630.24707, 7.37902, 36.22434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 1626.00806, 90.51128, 37.11422,   0.00000, 0.00000, 92.46001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 1625.35730, 99.89941, 36.98363,   0.00000, 0.00000, 95.99996, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 1597.48157, 105.07399, 37.29366,   0.00000, 0.00000, -111.96004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 1593.60339, 96.42356, 37.48183,   0.00000, 0.00000, -117.83998, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3508, 1592.79626, 90.99478, 36.65805,   0.00000, 0.00000, 49.08000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3508, 1591.28894, 74.50330, 36.55390,   0.00000, 0.00000, 94.62000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3508, 1593.65381, 56.13440, 36.28920,   0.00000, 0.00000, 66.12000, -1, -1, -1, MAX_RADIO_STREAM);

	//-> Peaje: SF y Pueblos | By. Edinson
	CreateDynamicObjectEx(10829, -2681.59033, 1313.43054, 54.37108,   0.00000, 0.00000, 89.39999, 1000.0, 1000.0);
	CreateDynamicObject(1237, -2676.15796, 1317.10803, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2675.09619, 1317.10364, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2674.05444, 1317.05835, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, -2673.10034, 1317.03174, 54.40920,   0.00000, 0.00000, 180.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2665.45996, 1317.03931, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, -2689.82397, 1312.35840, 54.40920,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2686.89819, 1312.23828, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2687.88818, 1312.28101, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2688.94165, 1312.32813, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2697.65186, 1312.38110, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -2699.21216, 1312.80359, 55.71997,   0.00000, 0.00000, 141.18004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -2663.65381, 1316.90405, 55.79161,   0.00000, 0.00000, 320.69995, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -2686.25391, 1318.19739, 54.94259,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -2676.91016, 1318.08789, 54.94259,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -2676.96948, 1310.87915, 54.94259,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -2686.28906, 1310.99133, 54.94259,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2684.16406, 1310.87561, 54.93444,   0.00000, 0.00000, -90.90000, -1, -1, -1, MAX_RADIO_STREAM);

	//-> Peaje: Fort Carson | By. Edinson
	CreateDynamicObjectEx(10829, -494.15784, 590.95331, 15.83818,   0.00000, 0.00000, 70.49998, 1000.0, 1000.0);
	CreateDynamicObject(1360, -487.94073, 592.33453, 16.64247,   0.00000, 0.00000, -20.21999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1360, -499.21414, 592.72009, 16.76111,   0.00000, 0.00000, -20.21999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1361, -498.49997, 595.02454, 16.75411,   0.00000, 0.00000, -20.22000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(966, -496.17609, 597.59796, 15.69929,   0.00000, 0.00000, -107.51999, 1000.0, 1000.0);
	CreateDynamicObject(1237, -493.84543, 604.73712, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -493.51920, 605.58582, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -493.19504, 606.47931, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -495.58701, 597.08405, 16.71836,   0.00000, 0.00000, 133.56009, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(966, -491.96948, 586.18542, 15.69929,   0.00000, 0.00000, 68.82001, 1000.0, 1000.0);
	CreateDynamicObject(1237, -494.58945, 579.19574, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -495.23993, 577.57758, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -494.95584, 578.38971, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -492.26340, 586.89551, 16.71836,   0.00000, 0.00000, 286.14005, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(3512, -483.21484, 588.29370, 15.67256,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(3512, -476.90317, 585.86389, 15.67256,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(3512, -471.05170, 583.48816, 15.67256,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObject(870, -476.87411, 585.90314, 16.26664,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(869, -470.94504, 583.86298, 16.50610,   0.00000, 0.00000, 83.03999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(869, -482.91220, 588.18213, 16.50610,   0.00000, 0.00000, 88.86000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3521, -466.04016, 582.47876, 17.47508,   0.00000, 0.00000, 106.19999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -488.04901, 593.69055, 19.63258,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -497.18481, 596.95874, 19.63258,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -499.59946, 590.28625, 19.63258,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -490.39825, 587.03046, 19.63258,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(3463, -530.42249, 607.13184, 16.19658,   0.00000, 0.00000, 68.99999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, -582.35425, 631.43939, 16.19658,   0.00000, 0.00000, 68.99999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, -628.02094, 651.71002, 16.19658,   0.00000, 0.00000, 68.99999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, -695.20715, 680.91571, 16.19658,   0.00000, 0.00000, 68.99999, 1000.0, 1000.0);


	//-> Puerta de Licencias | By. NúO
	CreateObject(1533, 953.94623, -1587.07227, 12.52880,   0.00000, 0.00000, 180.00000, 500000.0);

	//-> Edificios de El Corona | By. NúO
	new Ed_Cor[3];

	Ed_Cor [0] = CreateObject(10392, 1853.29944, -1916.66760, 18.32740,   0.00000, 0.00000, 0.00000, 500000.0);
	SetObjectMaterial(Ed_Cor [0], 0, 10952, "shops2_sfse", "ws_japwin", 0 ); // Vidriera 1
	SetObjectMaterial(Ed_Cor [0], 1, 10952, "shops2_sfse", "ws_japwin", 0 ); // Vidriera 2
	SetObjectMaterial(Ed_Cor [0], 2, 10952, "shops2_sfse", "ws_japwin", 0 ); // Vidriera 3
	SetObjectMaterial(Ed_Cor [0], 3, 10952, "shops2_sfse", "ws_apartmentred1", 0 ); // Edificio 1
	SetObjectMaterial(Ed_Cor [0], 4, 10952, "shops2_sfse", "ws_apartmentred1", 0 ); // Edificio 2


	Ed_Cor [1] = CreateObject(10392, 1930.24426, -1916.66760, 18.32740,   0.00000, 0.00000, 0.00000, 500000.0);
	SetObjectMaterial(Ed_Cor [1], 0, 10990, "mission3_sfse", "ws_classyshop2", 0 ); // Vidriera 1
	SetObjectMaterial(Ed_Cor [1], 1, 10990, "mission3_sfse", "ws_classyshop2", 0 ); // Vidriera 2
	SetObjectMaterial(Ed_Cor [1], 2, 10990, "mission3_sfse", "ws_ed_shop1", 0 ); // Vidriera 3
	SetObjectMaterial(Ed_Cor [1], 3, 10063, "slapart01sfe", "sl_brwnaprtwin1", 0 ); // Edificio 1
	SetObjectMaterial(Ed_Cor [1], 4, 10063, "slapart01sfe", "sl_brwnaprtwin1", 0 ); // Edificio 2

	Ed_Cor [2] = CreateObject(10392, 1891.76025, -1916.67163, 18.33140,   0.00000, 0.00000, 0.00000, 500000.0);
	SetObjectMaterial(Ed_Cor [2], 0, 10979, "mission_sfse", "ws_classyshop2", 0 ); // Vidriera 1
	SetObjectMaterial(Ed_Cor [2], 1, 10979, "mission_sfse", "ws_ed_shop8", 0 ); // Vidriera 2
	SetObjectMaterial(Ed_Cor [2], 2, 10979, "mission_sfse", "ws_ed_shop3", 0 ); // Vidriera 3
	SetObjectMaterial(Ed_Cor [2], 3, 10979, "mission_sfse", "ws_aptwin", 0 ); // Edificio 1
	SetObjectMaterial(Ed_Cor [2], 4, 10979, "mission_sfse", "ws_aptwin", 0 ); // Edificio 2

	CreateDynamicObject(706, 1854.93066, -1896.85229, 12.53782,   0.00000, 0.00000, -123.24001);
	CreateDynamicObject(706, 1944.55579, -1894.18860, 13.60284,   0.00000, 0.00000, 17.88000);
	CreateDynamicObject(706, 1888.48181, -1893.95728, 13.53640,   0.00000, 0.00000, -76.44001);
	CreateDynamicObject(706, 1916.12146, -1895.94177, 12.42955,   0.00000, 0.00000, -185.40002);
	CreateDynamicObject(1280, 1934.68481, -1909.31445, 14.38420,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1280, 1916.72876, -1909.31445, 14.38420,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1280, 1889.54211, -1909.31445, 14.38420,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1280, 1868.25928, -1909.31445, 14.38420,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1280, 1852.39160, -1909.31445, 14.38420,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(883, 1876.61292, -1926.55310, 12.50930,   0.00000, 0.00000, 55.68000);
	CreateDynamicObject(883, 1893.42871, -1926.55310, 12.50930,   0.00000, 0.00000, 62.27999);
	CreateDynamicObject(883, 1885.09326, -1926.55310, 12.50930,   0.00000, 0.00000, 71.09999);
	CreateDynamicObject(883, 1889.36133, -1926.55310, 12.50930,   0.00000, 0.00000, -80.76000);
	CreateDynamicObject(883, 1880.53455, -1926.55310, 12.50930,   0.00000, 0.00000, -52.07999);
	CreateDynamicObject(883, 1912.47095, -1926.55310, 12.50930,   0.00000, 0.00000, 63.12000);
	CreateDynamicObject(883, 1930.95496, -1926.55310, 12.50930,   0.00000, 0.00000, 49.92000);
	CreateDynamicObject(883, 1922.24878, -1926.55310, 12.50930,   0.00000, 0.00000, 114.41999);
	CreateDynamicObject(883, 1926.62317, -1926.55310, 12.50930,   0.00000, 0.00000, -45.06000);
	CreateDynamicObject(883, 1917.13562, -1926.55310, 12.50930,   0.00000, 0.00000, -60.60000);


	//-> Banco (Interior) | By. Edinson
	CreateDynamicObject(19450, -1537.65881, 329.22021, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1542.52063, 319.61029, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1531.46594, 329.24762, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1532.86572, 330.07721, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(19450, -1528.27808, 324.38660, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(19450, -1542.40112, 324.47269, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(19450, -1536.29663, 310.22574, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1533.06201, 319.65121, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1533.06201, 310.08640, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1541.02576, 314.97348, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1536, -1536.36438, 330.01147, 52.51820,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(1536, -1533.34924, 330.05267, 52.51820,   0.00000, 0.00000, 180.00000, -1, 10);
	CreateDynamicObject(1536, -1531.48962, 326.23535, 52.51820,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1703, -1533.66980, 322.07257, 52.57190,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1703, -1535.76660, 322.07260, 52.57190,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1703, -1533.66980, 318.92349, 52.57190,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1703, -1535.76660, 318.92349, 52.57190,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(19450, -1533.34058, 309.28860, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1536, -1536.23059, 311.62656, 52.51820,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1536, -1535.43433, 309.31665, 52.51820,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(1806, -1541.87512, 323.01889, 52.54990,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1806, -1541.87512, 320.79800, 52.54990,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1806, -1541.87512, 318.43799, 52.54990,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(2008, -1540.63892, 323.80502, 52.55010,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(2008, -1540.65002, 321.42059, 52.55010,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(2008, -1540.66809, 319.14874, 52.55010,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(19450, -1540.02429, 322.26819, 56.27690,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1540.03186, 322.27670, 51.76950,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2773, -1539.16785, 322.18600, 52.96980,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(2773, -1539.16785, 319.66949, 52.96976,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(19450, -1544.77551, 317.55533, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1536, -1542.45520, 320.03131, 52.51820,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(957, -1541.19080, 318.43799, 55.96720,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(957, -1541.19080, 320.79800, 55.96720,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(957, -1541.19080, 323.01889, 55.96720,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2195, -1533.59680, 322.89450, 53.14320,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2195, -1533.59680, 316.10858, 53.14320,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2108, -1535.60291, 319.49460, 52.51200,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2108, -1533.68872, 319.49460, 52.51200,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(4604, -1534.38599, 314.16910, 52.49001,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2885, -1537.00110, 318.51682, 56.19600,   270.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2885, -1537.00110, 312.00070, 56.19600,   270.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2885, -1537.00110, 325.09451, 56.19600,   270.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2885, -1535.21655, 331.56821, 56.19604,   270.00000, 0.00000, 0.00000, -1, 10);


	//-> Bar (Villa 2) | By. NúO
	new o_Bar[12];

	CreateObject(17577, 1760.79028, -2088.51660, 17.34920,   0.00000, 0.00000, 90.00000, 500000.0); // BAR

	o_Bar[0] = CreateDynamicObject(19377, 1787.36047, -2097.98804, 12.46900,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(o_Bar[0], 0, 3987, "civic01_lan", "crazy paving", -1);

	o_Bar[1] = CreateDynamicObject(19377, 1776.88098, -2097.98804, 12.46900,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(o_Bar[1], 0, 3987, "civic01_lan", "crazy paving", -1);

	o_Bar[2] = CreateDynamicObject(19377, 1766.39856, -2097.98804, 12.46900,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(o_Bar[2], 0, 3987, "civic01_lan", "crazy paving", -1);

	o_Bar[3] = CreateDynamicObject(19377, 1757.67969, -2097.98804, 12.47300,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(o_Bar[3], 0, 3987, "civic01_lan", "crazy paving", -1);

	o_Bar[4] = CreateDynamicObject(19377, 1787.36047, -2082.77954, 12.46900,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(o_Bar[4], 0, 3987, "civic01_lan", "crazy paving", -1);

	o_Bar[5] = CreateDynamicObject(19377, 1776.88098, -2082.77954, 12.46900,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(o_Bar[5], 0, 3987, "civic01_lan", "crazy paving", -1);

	o_Bar[6] = CreateDynamicObject(19377, 1766.39856, -2082.77954, 12.46900,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(o_Bar[6], 0, 3987, "civic01_lan", "crazy paving", -1);

	o_Bar[7] = CreateDynamicObject(19377, 1787.36047, -2090.36255, 12.47300,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(o_Bar[7], 0, 3987, "civic01_lan", "crazy paving", -1);

	o_Bar[8] = CreateDynamicObject(19377, 1776.88098, -2090.36255, 12.47300,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(o_Bar[8], 0, 3987, "civic01_lan", "crazy paving", -1);

	o_Bar[9] = CreateDynamicObject(19377, 1766.39856, -2090.36255, 12.47300,   0.00000, 90.00000, 0.00000);
	SetDynamicObjectMaterial(o_Bar[9], 0, 3987, "civic01_lan", "crazy paving", -1);

	o_Bar[10] = CreateDynamicObject(3354, 1765.43555, -2083.13354, 14.2316,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(o_Bar[10], 0, 17578, "ganton02_lae2", "century02_LA", -1);

	o_Bar[11] = CreateDynamicObject(3354, 1765.43555, -2089.24121, 14.2316,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(o_Bar[11], 0, 17578, "ganton02_lae2", "century02_LA", -1);

	CreateDynamicObject(1294, 1790.95154, -2078.43115, 16.98900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1294, 1790.95154, -2091.18579, 16.98900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1294, 1790.95154, -2102.65259, 16.98900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1498, 1763.52429, -2096.22559, 12.95963,   0.00000, 0.00000, 45.00000);


	//-> Renta de Vehículos (El Corona) | By. NúO
	CreateDynamicObject(19447, 1866.00098, -1837.02234, 13.45600,   0.00000, 0.00000, 73.16000);
	CreateDynamicObject(19447, 1875.15442, -1839.79993, 13.45600,   0.00000, 0.00000, 73.16000);
	CreateDynamicObject(19447, 1884.32373, -1842.57617, 13.45600,   0.00000, 0.00000, 73.16000);
	CreateDynamicObject(19447, 1893.54126, -1845.23364, 13.45600,   0.00000, 0.00000, 74.90002);
	CreateDynamicObject(19355, 1899.72888, -1846.84192, 13.45600,   0.00000, 0.00000, 76.26000);
	CreateDynamicObject(19355, 1900.17676, -1846.93188, 13.45200,   0.00000, 0.00000, 76.26000);
	CreateDynamicObject(3626, 1870.41138, -1867.65527, 13.86038,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18275, 1881.07080, -1879.07922, 14.54570,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19447, 1896.73938, -1879.49866, 13.32043,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19447, 1872.72876, -1879.52820, 13.32040,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18275, 1888.40881, -1879.07922, 14.54570,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3281, 1884.76807, -1876.70251, 13.19760,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3281, 1877.51965, -1876.70251, 13.19760,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3281, 1891.95752, -1876.70251, 13.19760,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19425, 1880.21619, -1879.30615, 12.46152,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 1881.93042, -1879.30615, 12.45750,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 1887.57446, -1879.30615, 12.46150,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 1889.25586, -1879.30615, 12.45750,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1290, 1884.70837, -1879.04810, 18.46390,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1226, 1831.99097, -1880.94739, 16.15409,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1226, 1842.26917, -1880.94739, 16.15410,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1226, 1852.88745, -1880.94739, 16.15410,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1412, 1860.59998, -1879.57385, 13.67969,   356.85840, 0.00000, 3.14159);
	CreateDynamicObject(1226, 1863.30872, -1880.94739, 16.15410,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1412, 1865.12366, -1879.57239, 13.67969,   356.85840, 0.00000, 3.14159);
	CreateDynamicObject(1226, 1949.10303, -1880.94739, 16.15410,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1412, 1935.95386, -1879.70837, 13.67969,   356.85840, 0.00000, 3.14159);
	CreateDynamicObject(1412, 1941.12793, -1879.70984, 13.67969,   356.85840, 0.00000, 3.14159);
	CreateDynamicObject(1412, 1946.35388, -1879.67383, 13.67969,   356.85840, 0.00000, 3.14159);
	CreateDynamicObject(1226, 1938.66309, -1880.94739, 16.15410,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1226, 1928.20618, -1880.94739, 16.15410,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1226, 1917.78369, -1880.94739, 16.15410,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1226, 1907.27087, -1880.94739, 16.15410,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1498, 1872.07837, -1870.61401, 12.55670,   0.00000, 0.00000, 90.00000);

       //-> Barrio | By. Abelleira
CreateObject(3644, 2385.63867, -1772.65845, 15.35110,   0.00000, 0.00000, 0.00000);
CreateObject(622, 2323.67749, -1767.32581, 7.60810,   3.00000, 0.00000, -4.00000);
CreateObject(619, 2291.82690, -1806.79858, 7.60810,   3.00000, 0.00000, -4.00000);
CreateObject(673, 2289.33789, -1825.25989, 11.91406,   356.85840, 0.00000, -1.57080);
CreateObject(672, 2265.45825, -1827.06934, 11.91410,   356.85840, 0.00000, -1.57080);
CreateObject(3641, 2326.61255, -1807.14648, 14.87960,   0.00000, 0.00000, 0.00000);
CreateObject(3275, 2339.87891, -1789.23767, 13.46590,   0.00000, 0.00000, 90.00000);
CreateObject(3641, 2349.16553, -1773.46912, 14.87960,   0.00000, 0.00000, 90.00000);
CreateObject(3641, 2349.03711, -1804.97717, 14.87960,   0.00000, 0.00000, 90.00000);
CreateObject(8674, 2346.68604, -1759.69922, 14.86900,   0.00000, 0.00000, 0.00000);
CreateObject(8674, 2355.34375, -1759.70789, 14.86900,   0.00000, 0.00000, 0.00000);
CreateObject(8674, 2327.48560, -1759.60388, 14.86900,   0.00000, 0.00000, 0.00000);
CreateObject(8674, 2317.16724, -1759.61072, 14.86900,   0.00000, 0.00000, 0.00000);
CreateObject(8674, 2310.70801, -1759.63049, 14.86900,   0.00000, 0.00000, 0.00000);
CreateObject(8674, 2289.12476, -1759.66541, 14.86900,   0.00000, 0.00000, 0.00000);
CreateObject(8674, 2278.82520, -1759.65295, 14.86900,   0.00000, 0.00000, 0.00000);
CreateObject(8674, 2273.65503, -1759.64624, 14.86900,   0.00000, 0.00000, 0.00000);
CreateObject(3641, 2324.85889, -1785.53723, 14.87960,   0.00000, 0.00000, 90.00000);
CreateObject(3641, 2287.01099, -1795.85193, 14.87960,   0.00000, 0.00000, 90.00000);
CreateObject(3641, 2309.84351, -1807.11096, 14.87960,   0.00000, 0.00000, 0.00000);
CreateObject(3641, 2287.38794, -1772.52734, 14.87960,   0.00000, 0.00000, 90.00000);
CreateObject(3641, 2249.34497, -1795.76489, 14.87960,   0.00000, 0.00000, 90.00000);
CreateObject(3641, 2250.70605, -1773.13770, 14.87960,   0.00000, 0.00000, 90.00000);
CreateObject(3641, 2250.80688, -1814.87732, 14.87960,   0.00000, 0.00000, 90.00000);
CreateObject(1438, 2359.84595, -1779.90344, 12.54690,   0.00000, 0.00000, 91.00000);
CreateObject(3640, 2271.01221, -1814.10803, 16.75880,   0.00000, 0.00000, -90.00000);
CreateObject(1358, 2268.45776, -1764.60559, 13.47570,   0.00000, 0.00000, 62.00000);
CreateObject(12954, 2292.58691, -1781.52307, 13.01650,   0.00000, 0.00000, -90.00000);
CreateObject(12957, 2355.47021, -1794.19531, 13.01290,   0.00000, 0.00000, 69.00000);
CreateObject(14468, 2340.97803, -1784.77698, 12.54480,   0.00000, 0.00000, 68.00000);
CreateObject(823, 2356.15991, -1793.45959, 11.60710,   0.00000, 0.00000, 0.00000);
CreateObject(2673, 2370.73340, -1761.84033, 12.63000,   0.00000, 0.00000, 0.00000);
CreateObject(2673, 2371.35278, -1761.12598, 12.63000,   0.00000, 0.00000, 120.00000);
CreateObject(2677, 2372.71606, -1785.65588, 12.85000,   0.00000, 0.00000, 0.00000);
CreateObject(2677, 2370.99927, -1783.57703, 12.85000,   0.00000, 0.00000, 135.00000);
CreateObject(2677, 2370.15747, -1786.42664, 12.85000,   0.00000, 0.00000, 135.00000);
CreateObject(935, 2356.80688, -1806.97693, 13.20000,   0.00000, 0.00000, 0.00000);
CreateObject(935, 2355.51611, -1807.10767, 13.20000,   0.00000, 0.00000, 76.00000);
CreateObject(935, 2356.18579, -1806.38525, 13.20000,   0.00000, 0.00000, 149.00000);
CreateObject(16601, 2308.35864, -1791.58411, 16.76970,   0.00000, 0.00000, 0.00000);
CreateObject(14468, 2307.18555, -1791.72937, 12.54480,   0.00000, 0.00000, 68.00000);
CreateObject(14468, 2309.80640, -1791.20313, 12.54480,   0.00000, 0.00000, 251.00000);
CreateObject(1528, 2321.23413, -1777.14404, 14.44280,   0.00000, 0.00000, -90.00000);
CreateObject(1529, 2324.17529, -1777.13123, 14.44280,   0.00000, 0.00000, -90.00000);
CreateObject(17969, 2346.43115, -1796.54175, 14.95640,   0.00000, 0.00000, -90.00000);
CreateObject(2228, 2340.41577, -1775.93616, 13.40000,   0.00000, 0.00000, 90.00000);
CreateObject(1441, 2331.94043, -1776.53223, 13.20000,   0.00000, 0.00000, 180.00000);
CreateObject(1428, 2258.83008, -1781.94470, 13.78930,   0.00000, 0.00000, 0.00000);
CreateObject(3594, 2269.28198, -1779.34021, 13.01410,   0.00000, 0.00000, 40.00000);
CreateObject(823, 2268.96094, -1778.20178, 11.60710,   0.00000, 0.00000, 0.00000);
CreateObject(645, 2274.20410, -1766.36902, 12.11719,   3.14159, 0.00000, 2.44346);
CreateObject(3655, 2395.82422, -1804.69250, 15.34960,   0.00000, 0.00000, 90.00000);
CreateObject(3655, 2380.89746, -1804.86243, 15.34960,   0.00000, 0.00000, 0.00000);
CreateObject(3172, 2313.19434, -1769.07336, 12.62010,   0.00000, 0.00000, 25.00000);
CreateObject(2677, 2310.60718, -1771.76489, 12.89000,   0.00000, 0.00000, 0.00000);
CreateObject(2677, 2309.03149, -1771.32446, 12.96000,   0.00000, 0.00000, 48.00000);
CreateObject(3172, 2306.33472, -1779.33057, 12.62010,   0.00000, 0.00000, -41.00000);
//-> Talleres de Mecánicos | By. NúO
	// Idlewood
	CreateObject(9093, 1911.87781, -1771.89392, 13.96880,   0.00000, 0.00000, -90.00000, 500000.0);
	CreateObject(9093, 1911.87781, -1780.77576, 13.96880,   0.00000, 0.00000, 90.00000, 500000.0);
	// Rodeo
	CreateObject(5422, 647.43707, -1566.69531, 15.66540,   0.00000, 0.00000, 0.00000, 500000.0);
	// Temple
	CreateObject(5043, 1214.08008, -975.27802, 43.91270,   0.00000, 0.00000, 90.00000, 500000.0);


	//-> Cierres de Talleres | By. NúO
	CreateDynamicObject(971, 1025.27954, -1029.22986, 32.10160,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(971, 488.23410, -1735.45911, 11.14160,   0.00000, 0.00000, 174.00000);
	CreateDynamicObject(971, 2071.54102, -1831.41431, 13.54690,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(971, 719.81989, -462.47681, 16.33590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(971, -1904.45605, 277.85779, 41.04690,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1676, 1007.33362, -936.41272, 42.75810,   0.00000, 0.00000, 5.00000);
	CreateDynamicObject(1676, 1000.64063, -937.10272, 42.75810,   0.00000, 0.00000, 5.00000);
	CreateDynamicObject(980, 2385.96094, 1043.56250, 12.59370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(980, 1968.78955, 2162.33325, 12.59370,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(980, -1421.79968, 2590.89697, 56.80568,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(980, -1935.38757, 239.34282, 36.12965,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(980, -2425.79126, 1028.10962, 52.17105,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(971, -99.74067, 1111.51843, 20.36211,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(980, 2385.96094, 1043.56250, 12.59370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(980, 1968.78955, 2162.33325, 12.59370,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(980, -1421.79968, 2590.89697, 56.80568,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(980, -1935.38757, 239.34282, 36.12965,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(980, -2425.79126, 1028.10962, 52.17105,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(971, -99.74067, 1111.51843, 20.36211,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(971, 1042.32288, -1026.02527, 31.09317,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(971, 1843.29871, -1855.34778, 12.37470,   0.00000, 0.00000, 90.00000);


	//-> Ayuntamiento (Exterior) | By. NúO
	CreateDynamicObject(18758, 371.87997, 158.05321, 1014.89520,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(18757, 373.54199, 161.85500, 1015.07819,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18757, 369.59671, 158.05141, 1015.07819,   0.00000, 0.00000, -90.00000);


	//-> Ayuntamiento (Exterior) | By. NúO
	CreateDynamicObject(1231, 1495.88721, -1749.98645, 17.09230,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1231, 1466.24683, -1749.98645, 17.09231,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 1473.00000, 7451.00000, -1756.00000,   0.00000, 400.00000, 0.00000);
	CreateDynamicObject(3851, 1473.00000, 7451.00000, -1756.00000,   0.00000, 400.00000, 0.00000);
	CreateDynamicObject(1504, 1432.97058, -1824.46558, 12.54270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1504, 1433.09863, -1824.46558, 12.54270,   0.00000, 0.00000, 178.62010);
	CreateDynamicObject(1536, 1438.20935, -1788.85632, 32.36030,   0.00000, 0.00000, -89.34000);
	CreateDynamicObject(18766, 1438.69165, -1790.30151, 34.09246,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1536, 1438.22937, -1791.86121, 32.36030,   0.00000, 0.00000, 89.34000);
	CreateDynamicObject(638, 1437.58752, -1786.93054, 33.12400,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 1437.58752, -1793.82422, 33.12400,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 1436.97620, -1788.64221, 32.92510,   0.00000, 0.00000, -90.30000);
	CreateDynamicObject(2773, 1436.97620, -1792.03503, 32.92510,   0.00000, 0.00000, -90.30000);
	CreateDynamicObject(1223, 1481.03271, -1772.85681, 17.48130,   0.00000, 0.00000, 89.70000);
	CreateDynamicObject(1223, 1438.43896, -1788.66968, 31.22940,   0.00000, 0.00000, -181.44009);
	CreateDynamicObject(1223, 1438.43896, -1792.08215, 31.22940,   0.00000, 0.00000, -181.44009);
	CreateDynamicObject(970, 1421.23315, -1835.66504, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1417.08020, -1835.66504, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1412.93884, -1835.66504, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1408.78174, -1835.66504, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1404.62451, -1835.66504, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1401.22693, -1835.66504, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1421.23315, -1842.26990, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1417.08020, -1842.26990, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1412.93884, -1842.26990, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1408.78174, -1842.26990, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1404.62451, -1842.26990, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1401.22693, -1842.26990, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 1399.36902, -1837.31738, 12.54750,   0.00000, 0.00000, -90.42000);
	CreateDynamicObject(19425, 1399.34900, -1840.58984, 12.54750,   0.00000, 0.00000, -90.42000);
	CreateDynamicObject(18981, -1823.30334, 7.41660, 7.41656,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1411, 1473.35486, -1826.59558, 17.25910,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1473.35486, -1831.82629, 17.25910,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1473.35486, -1837.03027, 17.25910,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1473.35486, -1842.22742, 17.25910,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1473.35486, -1847.44836, 17.25910,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1425.52356, -1844.96460, 17.25910,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1411, 1425.52356, -1850.12500, 17.25910,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1411, 1425.52356, -1832.92847, 17.25910,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1411, 1425.52356, -1827.80762, 17.25910,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1411, 1425.52356, -1822.61023, 17.25910,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3851, 1489.44604, -1760.79114, 34.37740,   0.00000, 0.00000, -89.94000);
	CreateDynamicObject(3851, 1478.15857, -1760.79114, 34.37740,   0.00000, 0.00000, -89.94000);
	CreateDynamicObject(3851, 1472.88269, -1760.78223, 34.37740,   0.00000, 0.00000, -89.94000);
	CreateDynamicObject(3851, 1467.23242, -1766.44080, 34.37740,   0.00000, 0.00000, -180.12000);
	CreateDynamicObject(3851, 1495.08447, -1766.44946, 34.37740,   0.00000, 0.00000, -180.12000);
	CreateDynamicObject(3851, 1469.22314, -1766.44067, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1473.19238, -1766.44067, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1477.16821, -1766.42078, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1481.15540, -1766.44067, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1485.11292, -1766.44067, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1489.10168, -1766.44067, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1493.08887, -1766.44067, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1469.22314, -1777.73071, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1473.19238, -1777.73071, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1477.16821, -1777.73071, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1481.15540, -1777.73071, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1485.11292, -1777.73071, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1489.10168, -1777.73071, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1493.08887, -1777.73071, 36.37840,   0.00000, 90.00000, -180.10001);
	CreateDynamicObject(3851, 1467.21240, -1777.69568, 34.37740,   0.00000, 0.00000, -180.12000);
	CreateDynamicObject(3851, 1495.06885, -1777.74805, 34.37740,   0.00000, 0.00000, -180.12000);
	CreateDynamicObject(19124, 1398.99268, -1842.27576, 13.10380,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 1398.99268, -1835.66138, 13.10380,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1449.76721, -1748.02563, 13.57913,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1439.36414, -1748.02563, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1429.99548, -1748.02563, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1421.93616, -1748.02563, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1413.21191, -1748.02563, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1405.14990, -1747.99829, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1405.14990, -1755.46814, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1405.14990, -1764.51221, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1514.00171, -1748.02563, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1523.15381, -1748.02563, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1532.56848, -1748.02563, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1544.38196, -1748.02563, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1554.44165, -1748.02563, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1554.44165, -1756.38074, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1554.44165, -1764.91968, 13.57910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1425.32825, -1833.99622, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1425.32825, -1830.79333, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1425.32825, -1827.66394, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1425.32825, -1824.48877, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1423.32495, -1835.64819, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1425.32825, -1843.90491, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1423.32495, -1842.28992, 13.04770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1425.32825, -1847.09949, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1473.58301, -1824.80957, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1473.58301, -1827.99170, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1473.58301, -1831.20129, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1473.58301, -1834.41125, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1473.58301, -1837.62463, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1473.58301, -1840.82605, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1473.58301, -1844.02576, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1473.58301, -1847.22510, 14.25510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(10183, 1448.15344, -1844.37476, 12.56190,   0.00000, 0.00000, -134.75999);
	CreateDynamicObject(970, 1513.95300, -1745.21191, 13.54024,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1511.90662, -1747.27612, 13.54024,   0.00000, 0.00000, -90.23999);
	CreateDynamicObject(970, 1511.90247, -1749.36487, 13.54020,   0.00000, 0.00000, -90.24000);
	CreateDynamicObject(970, 1518.09375, -1745.21191, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1522.25537, -1745.21191, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1526.41956, -1745.21191, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1530.59106, -1745.21191, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1534.74402, -1745.21191, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1538.89001, -1745.21191, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1543.03540, -1745.21191, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1547.16528, -1745.21191, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1551.31946, -1745.21191, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1555.05164, -1745.21130, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1513.95300, -1751.42920, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1518.09375, -1751.42920, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1522.25537, -1751.42920, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1526.41956, -1751.42920, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1530.59106, -1751.42920, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1534.74402, -1751.42920, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1538.89001, -1751.42920, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1543.03540, -1751.42920, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1547.16528, -1751.42920, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1547.98535, -1751.42920, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1550.05713, -1753.51282, 13.54020,   0.00000, 0.00000, -90.00001);
	CreateDynamicObject(970, 1550.05713, -1757.66968, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1550.05713, -1761.84827, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1550.05115, -1765.75024, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1552.13342, -1767.83337, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1555.03687, -1767.84229, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1557.11804, -1747.30090, 13.54020,   0.00000, 0.00000, -90.00001);
	CreateDynamicObject(970, 1557.11804, -1751.46155, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1557.11804, -1755.61865, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1557.11804, -1759.74976, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1557.11804, -1763.89026, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1557.10999, -1765.81213, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1447.94788, -1745.21777, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1443.78601, -1745.21777, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1439.61475, -1745.21777, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1435.48132, -1745.21777, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1431.34326, -1745.21777, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1427.19849, -1745.21777, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1423.05811, -1745.21777, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1418.93469, -1745.21777, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1414.76746, -1745.21777, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1410.62720, -1745.21777, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1404.48291, -1767.92493, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1447.36694, 13.54020, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1447.94788, -1751.42834, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1443.78601, -1751.42834, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1439.61475, -1751.42834, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1435.48132, -1751.42834, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1431.34326, -1751.42834, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1427.19849, -1751.42834, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1423.05811, -1751.42834, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1418.93469, -1751.42834, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1414.76746, -1751.42834, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1410.84717, -1751.42834, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1450.03198, -1747.30579, 13.54020,   0.00000, 0.00000, -90.00001);
	CreateDynamicObject(970, 1450.02197, -1749.35364, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1402.43005, -1747.32971, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1402.43005, -1751.48962, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1402.43005, -1755.62000, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1402.43005, -1759.78186, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1402.43005, -1763.92810, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1402.41003, -1765.84314, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1406.68811, -1767.92395, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1408.76892, -1765.84119, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1408.76489, -1763.92810, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1408.76892, -1759.78186, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1408.76892, -1755.62000, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 1408.76892, -1753.53748, 13.54020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19121, 1443.21082, -1832.25037, 13.50743,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 1451.74963, -1832.25037, 13.50740,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 1459.75586, -1832.25037, 13.50740,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 1466.75745, -1832.25037, 13.50740,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1406.48535, -1745.21777, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1404.54346, -1745.21484, 13.54020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3934, 1423.56689, -1790.30151, 32.42262,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19467, 1425.00403, -1840.03699, 12.53890,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19467, 1425.00403, -1837.86047, 12.54290,   0.00000, 0.00000, 90.00000);


	//-> Garaje PC | By. Edinson
	CreateDynamicObject(10051, 1388.54358, 1354.55640, 10.01410,   0.00000, 0.00000, 0.00000, -1, 12);
	CreateDynamicObject(8378, 1347.08044, 1383.21814, 12.91029,   0.00000, 0.00000, 90.00000, -1, 12);


	//-> Interior PC | By. Edinson
	new g_Object[534];

	g_Object[0] = CreateDynamicObject(19461, 878.5662, 2286.3044, 1917.5322, 0.0000, 0.0000, -90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[0], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[1] = CreateDynamicObject(19461, 876.2761, 2287.7534, 1917.5322, 0.0000, 0.0000, 180.0000); //wall101
	SetDynamicObjectMaterial(g_Object[1], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[2] = CreateObject(19377, 881.2963, 2289.7866, 1915.6888, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[2], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[3] = CreateObject(19377, 881.2963, 2309.0498, 1915.6888, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[3], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[4] = CreateDynamicObject(11730, 869.3665, 2308.2819, 1909.3784, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[5] = CreateDynamicObject(1492, 882.2305, 2328.9194, 1915.7784, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[5], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[6] = CreateDynamicObject(19369, 884.9807, 2286.3041, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[6], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[7] = CreateDynamicObject(19461, 876.2761, 2297.3745, 1917.5322, 0.0000, 0.0000, 180.0000); //wall101
	SetDynamicObjectMaterial(g_Object[7], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[8] = CreateObject(19377, 881.2963, 2299.4201, 1915.6888, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[8], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[9] = CreateDynamicObject(1492, 882.2305, 2319.0944, 1915.7784, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[9], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[10] = CreateObject(19377, 881.3264, 2328.3144, 1915.6888, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[10], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[11] = CreateDynamicObject(19397, 880.2562, 2292.9462, 1917.5356, 0.0000, 0.0000, 0.0000); //wall045
	SetDynamicObjectMaterial(g_Object[11], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[12] = CreateDynamicObject(19461, 876.2761, 2307.0229, 1917.5322, 0.0000, 0.0000, 180.0000); //wall101
	SetDynamicObjectMaterial(g_Object[12], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[13] = CreateDynamicObject(19325, 880.2741, 2297.0405, 1917.2215, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[14] = CreateDynamicObject(19325, 880.2741, 2303.5214, 1917.2215, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[15] = CreateDynamicObject(1492, 880.2905, 2306.8276, 1915.7784, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[15], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[16] = CreateDynamicObject(19369, 881.7702, 2300.2932, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[16], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[17] = CreateDynamicObject(19369, 884.9802, 2300.2932, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[17], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[18] = CreateObject(19377, 881.3264, 2318.6806, 1915.6888, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[18], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[19] = CreateDynamicObject(19461, 852.7150, 2344.3391, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[20] = CreateDynamicObject(19397, 880.2562, 2310.7858, 1917.5356, 0.0000, 0.0000, 0.0000); //wall045
	SetDynamicObjectMaterial(g_Object[20], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[21] = CreateDynamicObject(1492, 877.7791, 2318.1242, 1915.7784, 0.0000, 0.0000, 0.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[21], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[22] = CreateDynamicObject(1492, 880.2905, 2310.0390, 1915.7784, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[22], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[23] = CreateDynamicObject(19325, 880.2741, 2314.8842, 1917.2215, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[24] = CreateDynamicObject(19369, 881.9301, 2309.2236, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[24], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[25] = CreateDynamicObject(19397, 895.9390, 2279.6882, 1911.1651, 0.0000, 0.0000, 0.0000); //wall045
	g_Object[26] = CreateDynamicObject(19369, 885.1397, 2309.2236, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[26], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[27] = CreateDynamicObject(19369, 881.7700, 2318.1396, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[27], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[28] = CreateDynamicObject(19369, 884.9812, 2318.1396, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[28], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[29] = CreateDynamicObject(19397, 878.5664, 2318.1362, 1917.5356, 0.0000, 0.0000, 90.0000); //wall045
	SetDynamicObjectMaterial(g_Object[29], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[30] = CreateDynamicObject(2828, 886.0900, 2322.1911, 1916.6142, 0.0000, 0.0000, 0.0000); //gb_ornament02
	g_Object[31] = CreateDynamicObject(19461, 872.1447, 2322.2521, 1917.5122, 0.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[31], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[32] = CreateDynamicObject(11729, 877.8356, 2296.7792, 1909.4522, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[33] = CreateDynamicObject(11730, 869.3995, 2297.3703, 1909.4635, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[34] = CreateDynamicObject(11730, 869.3995, 2296.1408, 1909.4635, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[35] = CreateDynamicObject(19461, 888.9244, 2278.6269, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[36] = CreateDynamicObject(19377, 881.5264, 2289.8784, 1919.3719, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[36], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[37] = CreateDynamicObject(19461, 886.6264, 2291.2260, 1917.5322, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[37], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[38] = CreateDynamicObject(19461, 886.6264, 2300.8552, 1917.5322, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[38], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[39] = CreateDynamicObject(19461, 876.8754, 2326.9807, 1917.5322, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[39], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[40] = CreateDynamicObject(19461, 886.6264, 2310.4863, 1917.5322, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[40], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[41] = CreateDynamicObject(19805, 878.2532, 2286.3945, 1917.5355, 0.0000, 0.0000, -180.0000); //Whiteboard1
	SetDynamicObjectMaterial(g_Object[41], 0, 4003, "cityhall_tr_lan", "mc_flags1", 0xFFFFFFFF);
	g_Object[42] = CreateDynamicObject(19786, 886.6868, 2294.3454, 1917.9626, 0.0000, 0.0000, -90.0000); //LCDTVBig1
	g_Object[43] = CreateDynamicObject(19325, 880.2741, 2288.8889, 1917.2215, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[44] = CreateDynamicObject(3657, 873.9056, 2303.5913, 1909.9948, 0.0000, 0.0000, 90.0000); //airseata_LAS
	g_Object[45] = CreateDynamicObject(19369, 876.2800, 2313.4387, 1917.5356, 0.0000, 0.0000, 0.0000); //wall017
	SetDynamicObjectMaterial(g_Object[45], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[46] = CreateDynamicObject(1663, 896.5239, 2322.5371, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[47] = CreateDynamicObject(19377, 903.8677, 2282.9196, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[47], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[48] = CreateDynamicObject(19461, 886.6264, 2332.6613, 1917.5322, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[48], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[49] = CreateDynamicObject(11729, 869.3939, 2296.7270, 1909.4681, 0.0000, 0.0000, 90.0000); //GymLockerClosed1
	g_Object[50] = CreateDynamicObject(1708, 877.5650, 2323.7854, 1915.7821, 0.0000, 0.0000, 90.0000); //kb_chair02
	g_Object[51] = CreateDynamicObject(19461, 886.6256, 2323.0568, 1917.5322, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[51], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[52] = CreateDynamicObject(19377, 881.5264, 2299.5065, 1919.3719, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[52], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[53] = CreateDynamicObject(19377, 881.5264, 2309.1269, 1919.3719, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[53], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[54] = CreateDynamicObject(19377, 881.5264, 2318.6669, 1919.3719, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[54], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[55] = CreateDynamicObject(19377, 881.5264, 2328.2976, 1919.3719, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[55], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[56] = CreateDynamicObject(11730, 877.8193, 2307.2229, 1909.3646, 0.0000, 0.0000, -90.0000); //GymLockerOpen1
	g_Object[57] = CreateDynamicObject(19461, 881.7854, 2331.3500, 1917.5322, 0.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[57], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[58] = CreateDynamicObject(19369, 883.8297, 2324.6398, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[58], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[59] = CreateDynamicObject(19461, 872.1447, 2318.1386, 1917.5122, 0.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[59], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[60] = CreateObject(19377, 869.1962, 2320.4077, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[60], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[61] = CreateDynamicObject(3657, 873.8826, 2300.2207, 1909.9948, 0.0000, 0.0000, 90.0000); //airseata_LAS
	g_Object[62] = CreateDynamicObject(19369, 887.0401, 2324.6398, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[62], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[63] = CreateDynamicObject(1663, 896.4688, 2320.5683, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[64] = CreateDynamicObject(19461, 868.8750, 2318.1384, 1910.9604, 90.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[64], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[65] = CreateDynamicObject(19369, 899.4807, 2308.5471, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[66] = CreateDynamicObject(19369, 886.6220, 2316.8984, 1917.5356, 0.0000, 0.0000, 0.0000); //wall017
	SetDynamicObjectMaterial(g_Object[66], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[67] = CreateDynamicObject(1708, 877.5650, 2327.9084, 1915.7821, 0.0000, 0.0000, 90.0000); //kb_chair02
	g_Object[68] = CreateDynamicObject(19442, 876.8784, 2318.1352, 1917.5423, 0.0000, 0.0000, 90.0000); //wall082
	SetDynamicObjectMaterial(g_Object[68], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[69] = CreateDynamicObject(19397, 878.5664, 2318.1237, 1917.5356, 0.0000, 0.0000, 90.0000); //wall045
	SetDynamicObjectMaterial(g_Object[69], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[70] = CreateDynamicObject(19325, 882.2141, 2324.7285, 1917.2215, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[71] = CreateDynamicObject(19397, 882.2166, 2319.8374, 1917.5356, 0.0000, 0.0000, 0.0000); //wall045
	SetDynamicObjectMaterial(g_Object[71], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[72] = CreateDynamicObject(19397, 882.2166, 2329.6608, 1917.5356, 0.0000, 0.0000, 0.0000); //wall045
	SetDynamicObjectMaterial(g_Object[72], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[73] = CreateObject(14407, 874.2399, 2320.1967, 1912.5898, 0.0000, 0.0000, 90.0000); //carter-stairs01
	SetObjectMaterial(g_Object[73], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[74] = CreateDynamicObject(19461, 872.3750, 2318.1384, 1910.9604, 90.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[74], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[75] = CreateDynamicObject(19461, 875.8654, 2318.1384, 1910.9604, 90.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[75], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[76] = CreateDynamicObject(19461, 868.8750, 2322.2524, 1910.9604, 90.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[76], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[77] = CreateDynamicObject(19461, 872.3656, 2322.2524, 1910.9604, 90.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[77], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[78] = CreateDynamicObject(19461, 875.8660, 2322.2524, 1910.9604, 90.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[78], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[79] = CreateDynamicObject(14494, 865.5442, 2302.8776, 1911.8187, 0.0000, 0.0000, -180.0000); //sweets_bath
	SetDynamicObjectMaterial(g_Object[79], 0, 10101, "2notherbuildsfe", "ferry_build14", 0xFFFFFFFF);
	g_Object[80] = CreateDynamicObject(19461, 867.2147, 2346.2309, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[81] = CreateObject(19377, 861.9464, 2330.0319, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[81], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[82] = CreateDynamicObject(19461, 871.7830, 2293.1442, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[83] = CreateObject(19377, 861.9464, 2339.6535, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[83], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[84] = CreateDynamicObject(19461, 868.1433, 2325.1811, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[85] = CreateDynamicObject(1663, 894.9893, 2320.6086, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[86] = CreateDynamicObject(19377, 861.9464, 2339.6533, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[86], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[87] = CreateDynamicObject(14855, 859.8189, 2338.5217, 1913.8989, 0.0000, 0.0000, 0.0000); //counterb
	SetDynamicObjectMaterial(g_Object[87], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[88] = CreateDynamicObject(19369, 887.8154, 2312.4980, 1911.1539, 0.0000, 0.0000, 90.0000); //wall017
	g_Object[89] = CreateDynamicObject(2173, 901.1516, 2309.3195, 1909.4011, 0.0000, 0.0000, -179.9998); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[89], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[90] = CreateObject(19377, 879.6975, 2310.7749, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[90], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[91] = CreateObject(19377, 879.6975, 2320.4057, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[91], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[92] = CreateDynamicObject(19325, 892.8845, 2316.6484, 1910.8502, 0.0000, 0.0000, 90.0000); //lsmall_window01
	g_Object[93] = CreateDynamicObject(2690, 866.9818, 2317.4309, 1910.8697, 0.0000, 0.0000, 270.0000); //CJ_FIRE_EXT
	g_Object[94] = CreateObject(19377, 890.1973, 2310.7961, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[94], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[95] = CreateDynamicObject(19461, 862.3148, 2344.3391, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[96] = CreateDynamicObject(19461, 856.6651, 2329.9125, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[97] = CreateDynamicObject(14855, 859.8189, 2338.5217, 1911.4176, 0.0000, 0.0000, 0.0000); //counterb
	SetDynamicObjectMaterial(g_Object[97], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[97], 1, 14581, "ab_mafiasuitea", "cof_wood2", 0xFFFFFFFF);
	g_Object[98] = CreateObject(19377, 890.1973, 2320.4052, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[98], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[99] = CreateDynamicObject(19461, 856.6651, 2339.5427, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[100] = CreateDynamicObject(19461, 853.5447, 2320.3554, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[101] = CreateDynamicObject(19461, 853.5447, 2310.7534, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[102] = CreateDynamicObject(19397, 890.5477, 2312.5041, 1911.1551, 0.0000, 0.0000, 90.0998); //wall045
	g_Object[103] = CreateObject(19377, 900.6976, 2320.4052, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[103], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[104] = CreateObject(19377, 900.6970, 2310.7797, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[104], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[105] = CreateDynamicObject(19367, 856.6771, 2329.0473, 1911.1540, 0.0000, 0.0000, 0.0000); //wall015
	SetDynamicObjectMaterial(g_Object[105], 0, 10377, "cityhall_sfs", "ws_copart2", 0xFFFFFFFF);
	g_Object[106] = CreateDynamicObject(19461, 881.5656, 2316.6699, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[107] = CreateDynamicObject(19367, 867.1967, 2338.1354, 1911.1540, 0.0000, 0.0000, 0.0000); //wall015
	SetDynamicObjectMaterial(g_Object[107], 0, 10377, "cityhall_sfs", "ws_copart3", 0xFFFFFFFF);
	g_Object[108] = CreateDynamicObject(19367, 867.1865, 2329.0473, 1911.1540, 0.0000, 0.0000, 0.0000); //wall015
	SetDynamicObjectMaterial(g_Object[108], 0, 10377, "cityhall_sfs", "ws_copart1", 0xFFFFFFFF);
	g_Object[109] = CreateDynamicObject(19461, 904.0454, 2321.5534, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[110] = CreateObject(19377, 879.6975, 2330.0266, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[110], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[111] = CreateObject(19377, 890.1978, 2330.0266, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[111], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[112] = CreateDynamicObject(19461, 881.5656, 2331.2038, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[112], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[113] = CreateDynamicObject(2173, 886.0626, 2322.5166, 1915.8100, 0.0000, 0.0000, -179.6000); //MED_OFFICE_DESK_3
	g_Object[114] = CreateDynamicObject(2190, 862.5996, 2341.8989, 1910.3920, 0.0000, 0.0000, -85.7996); //PC_1
	g_Object[115] = CreateDynamicObject(2190, 862.6029, 2339.5131, 1910.4020, 0.0000, 0.0000, -97.1996); //PC_1
	g_Object[116] = CreateDynamicObject(19461, 900.8461, 2326.4548, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[117] = CreateDynamicObject(3657, 873.0554, 2303.5893, 1909.9948, 0.0000, 0.0000, -90.0000); //airseata_LAS
	g_Object[118] = CreateDynamicObject(19461, 881.5653, 2286.9731, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[119] = CreateDynamicObject(19369, 899.5006, 2314.9511, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[120] = CreateDynamicObject(19999, 885.6135, 2323.7382, 1915.7447, 0.0000, 0.0000, 0.0000); //CutsceneChair2
	g_Object[121] = CreateDynamicObject(19461, 853.5447, 2301.1328, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[122] = CreateDynamicObject(19377, 851.4864, 2320.4130, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[122], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[123] = CreateObject(19377, 900.6981, 2330.0266, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[123], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[124] = CreateObject(19377, 879.6975, 2339.6591, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[124], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[125] = CreateDynamicObject(19461, 899.6569, 2278.0102, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[126] = CreateDynamicObject(1714, 883.2692, 2301.7978, 1915.7733, 0.0000, 0.0000, 180.0000); //kb_swivelchair1
	SetDynamicObjectMaterial(g_Object[126], 0, 18081, "cj_barb", "ab_leather_strips", 0xFFFFFFFF);
	g_Object[127] = CreateDynamicObject(19369, 905.9699, 2295.3303, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[128] = CreateDynamicObject(16732, 880.3662, 2290.4467, 1917.9780, 0.0000, 0.0000, -90.0000); //a51_ventcover
	g_Object[129] = CreateObject(19377, 890.1973, 2301.1833, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[129], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[130] = CreateDynamicObject(19461, 891.2161, 2326.4570, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[131] = CreateDynamicObject(19461, 901.4204, 2321.5534, 1909.4379, 0.0000, -90.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[131], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[132] = CreateDynamicObject(15038, 880.7318, 2317.7434, 1916.4107, 0.0000, 0.0000, 0.0000); //Plant_Pot_3_sv
	g_Object[133] = CreateDynamicObject(1715, 893.8584, 2285.9824, 1909.4268, 0.0000, 0.0000, 29.3999); //kb_swivelchair2
	g_Object[134] = CreateDynamicObject(19611, 900.2877, 2321.6015, 1909.5467, 0.0000, 0.0000, 0.0000); //MicrophoneStand1
	g_Object[135] = CreateDynamicObject(19369, 893.1973, 2312.4980, 1911.1539, 0.0000, 0.0000, 90.0000); //wall017
	g_Object[136] = CreateDynamicObject(19461, 886.4161, 2321.5703, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[137] = CreateDynamicObject(2167, 900.3826, 2321.4392, 1909.3736, 0.0000, 0.0000, 89.7990); //MED_OFFICE_UNIT_7
	g_Object[138] = CreateObject(19377, 890.1973, 2291.5500, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[138], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[139] = CreateObject(19377, 900.6970, 2301.1428, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[139], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[140] = CreateObject(19377, 900.6970, 2291.5097, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[140], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[141] = CreateDynamicObject(19325, 895.9345, 2302.7639, 1910.8502, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[142] = CreateDynamicObject(15038, 886.1317, 2317.7434, 1916.4107, 0.0000, 0.0000, 0.0000); //Plant_Pot_3_sv
	g_Object[143] = CreateDynamicObject(19611, 900.2877, 2321.8618, 1909.5467, 0.0000, 0.0000, 0.0000); //MicrophoneStand1
	g_Object[144] = CreateDynamicObject(1663, 895.0443, 2322.5776, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[145] = CreateDynamicObject(19325, 895.9345, 2296.5561, 1910.8502, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[146] = CreateDynamicObject(11729, 877.8213, 2298.0488, 1909.4572, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[147] = CreateDynamicObject(19369, 895.9398, 2298.1782, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[148] = CreateDynamicObject(19461, 881.4038, 2293.1442, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[149] = CreateDynamicObject(2167, 900.3836, 2321.8376, 1909.3736, 0.0000, 0.0000, 89.7990); //MED_OFFICE_UNIT_7
	g_Object[150] = CreateDynamicObject(19377, 903.8672, 2292.5515, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[150], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[151] = CreateDynamicObject(19377, 904.9157, 2321.5715, 1909.5992, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[151], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[152] = CreateDynamicObject(19377, 906.2567, 2331.2033, 1909.5992, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[152], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[153] = CreateDynamicObject(19461, 849.7252, 2302.7255, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[154] = CreateDynamicObject(2173, 901.1613, 2303.1135, 1909.4011, 0.0000, 0.0000, -179.9998); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[154], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[155] = CreateDynamicObject(2066, 886.1250, 2309.6096, 1915.7467, 0.0000, 0.0000, -91.4999); //CJ_M_FILEING2
	g_Object[156] = CreateDynamicObject(19461, 901.0847, 2321.5534, 1907.9310, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[156], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[157] = CreateDynamicObject(19461, 901.0847, 2331.1862, 1907.9310, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[157], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[158] = CreateDynamicObject(2357, 900.4942, 2321.6083, 1908.9199, 0.0000, -89.7998, 0.0000); //DUNC_DINNING
	g_Object[159] = CreateDynamicObject(19369, 895.9398, 2310.9882, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[160] = CreateDynamicObject(1492, 895.9553, 2287.7492, 1909.4075, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[160], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[161] = CreateDynamicObject(19325, 899.4765, 2306.9077, 1910.8502, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[162] = CreateDynamicObject(19461, 902.2575, 2316.6799, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[163] = CreateDynamicObject(19461, 905.9979, 2308.5666, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[164] = CreateDynamicObject(19325, 899.5266, 2316.6494, 1910.8502, 0.0000, 0.0000, 90.0000); //lsmall_window01
	g_Object[165] = CreateDynamicObject(19461, 905.9979, 2298.9331, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[166] = CreateDynamicObject(19461, 878.1644, 2307.6052, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[167] = CreateDynamicObject(19369, 905.9918, 2314.9812, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[168] = CreateDynamicObject(19461, 884.8854, 2297.9875, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[169] = CreateDynamicObject(19397, 895.9390, 2288.4931, 1911.1651, 0.0000, 0.0000, 0.0000); //wall045
	g_Object[170] = CreateDynamicObject(1663, 895.0790, 2323.8173, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[171] = CreateDynamicObject(19461, 888.9244, 2288.2568, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[172] = CreateDynamicObject(19461, 904.3773, 2296.9685, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[173] = CreateObject(19377, 858.6964, 2320.4118, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[173], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[174] = CreateDynamicObject(1492, 899.4539, 2311.0166, 1909.3974, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[174], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[175] = CreateDynamicObject(19461, 867.2147, 2326.9929, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[176] = CreateDynamicObject(14494, 865.5242, 2299.1652, 1911.8187, 0.0000, 0.0000, -180.0000); //sweets_bath
	SetDynamicObjectMaterial(g_Object[176], 0, 10101, "2notherbuildsfe", "ferry_build14", 0xFFFFFFFF);
	g_Object[177] = CreateDynamicObject(1561, 866.6322, 2344.2285, 1909.3620, 0.0000, 0.0000, 0.0000); //Gen_doorEXT7_11R
	SetDynamicObjectMaterial(g_Object[177], 2, 10377, "cityhall_sfs", "ws_copart2", 0xFFFFFFFF);
	g_Object[178] = CreateDynamicObject(19893, 884.9439, 2322.4846, 1916.6081, 0.0000, 0.0000, 148.6000); //LaptopSAMP1
	SetDynamicObjectMaterial(g_Object[178], 1, 15054, "savesfmid", "cspornmag", 0xFFFFFFFF);
	g_Object[179] = CreateDynamicObject(1561, 865.1322, 2344.2285, 1909.3620, 0.0000, 0.0000, 0.0000); //Gen_doorEXT7_11R
	SetDynamicObjectMaterial(g_Object[179], 2, 10377, "cityhall_sfs", "ws_copart2", 0xFFFFFFFF);
	g_Object[180] = CreateDynamicObject(2612, 885.7841, 2324.5114, 1917.7264, 0.0000, 0.0000, 0.0000); //POLICE_NB2
	g_Object[181] = CreateDynamicObject(2615, 883.7166, 2324.4841, 1917.6673, 0.0000, 0.0000, 0.0000); //POLICE_NB3
	g_Object[182] = CreateDynamicObject(2616, 884.1043, 2324.5117, 1917.6833, 0.0000, 0.0000, 0.0000); //POLICE_NB04
	g_Object[183] = CreateDynamicObject(19377, 879.7072, 2307.6071, 1909.3687, 0.0000, -90.0000, 0.0000); //wall025
	g_Object[184] = CreateDynamicObject(1663, 890.9544, 2319.4282, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[185] = CreateDynamicObject(2066, 883.2229, 2323.9316, 1915.7567, 0.0000, 0.0000, 0.0000); //CJ_M_FILEING2
	g_Object[186] = CreateDynamicObject(2066, 883.8029, 2324.0017, 1915.3260, 0.0000, 0.0000, 0.0000); //CJ_M_FILEING2
	g_Object[187] = CreateDynamicObject(2066, 884.3834, 2324.0017, 1915.7467, 0.0000, 0.0000, 0.0000); //CJ_M_FILEING2
	g_Object[188] = CreateDynamicObject(19461, 899.4973, 2292.1503, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[189] = CreateDynamicObject(2252, 883.7896, 2324.0954, 1917.0239, 0.0000, 0.0000, 0.0000); //Plant_Pot_21
	g_Object[190] = CreateDynamicObject(19904, 874.5324, 2293.4445, 1912.6279, 0.0000, 90.7000, 176.7999); //ConstructionVest1
	g_Object[191] = CreateDynamicObject(19461, 899.4973, 2282.5207, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[192] = CreateDynamicObject(18757, 897.9191, 2279.8820, 1911.2274, 0.0000, 0.0000, 90.0000); //ElevatorDoor2
	g_Object[193] = CreateDynamicObject(19922, 887.7305, 2323.5170, 1916.7795, 0.0000, -0.5999, -179.9998); //MKTable1
	g_Object[194] = CreateDynamicObject(18636, 886.3644, 2323.3620, 1917.6236, 0.0000, 0.0000, -179.1000); //PoliceCap1
	g_Object[195] = CreateDynamicObject(2202, 857.2639, 2337.3266, 1909.3940, 0.0000, 0.0000, 90.0000); //PHOTOCOPIER_2
	g_Object[196] = CreateDynamicObject(2186, 857.3233, 2340.5988, 1909.3830, 0.0000, 0.0000, 90.0000); //PHOTOCOPIER_1
	g_Object[197] = CreateDynamicObject(1663, 890.9221, 2318.2775, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[198] = CreateDynamicObject(2614, 903.9132, 2321.6062, 1911.5036, 0.0000, 0.0000, -90.3999); //CJ_US_FLAG
	SetDynamicObjectMaterial(g_Object[198], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[199] = CreateDynamicObject(19397, 887.9674, 2316.6748, 1911.1551, 0.0000, 0.0000, 90.0000); //wall045
	g_Object[200] = CreateDynamicObject(2166, 890.8992, 2284.7429, 1909.4177, 0.0000, 0.0000, 90.0000); //MED_OFFICE_DESK_2
	g_Object[201] = CreateDynamicObject(1715, 855.9852, 2318.7490, 1909.4072, 0.0000, 0.0000, -91.7000); //kb_swivelchair2
	g_Object[202] = CreateDynamicObject(2260, 886.0670, 2320.0510, 1917.4903, 0.0000, 0.0000, -89.1996); //Frame_SLIM_1
	g_Object[203] = CreateDynamicObject(2262, 886.0429, 2321.0822, 1917.8752, 0.0000, 0.0000, -89.9999); //Frame_SLIM_3
	g_Object[204] = CreateDynamicObject(1722, 889.8220, 2280.4282, 1909.4012, 0.0000, 0.0000, -60.3000); //off_chairnu
	g_Object[205] = CreateDynamicObject(2002, 882.9749, 2318.7631, 1915.7673, 0.0000, 0.0000, -178.8000); //water_coolnu
	g_Object[206] = CreateDynamicObject(2828, 882.6525, 2290.2092, 1916.5842, 0.0000, 0.0000, 165.3999); //gb_ornament02
	g_Object[207] = CreateDynamicObject(1663, 885.4868, 2321.2182, 1916.2331, 0.0000, 0.0000, 179.5997); //swivelchair_B
	g_Object[208] = CreateDynamicObject(19461, 891.0346, 2293.1442, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[209] = CreateDynamicObject(19325, 882.3342, 2324.7585, 1917.2215, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[210] = CreateDynamicObject(2607, 885.5344, 2326.5834, 1916.1678, 0.0000, 0.0000, -179.6997); //POLCE_DESK2
	g_Object[211] = CreateDynamicObject(19893, 884.8245, 2326.6035, 1916.5786, 0.0000, 0.0000, 38.6999); //LaptopSAMP1
	g_Object[212] = CreateDynamicObject(1714, 885.6104, 2325.0200, 1915.7689, 0.0000, 0.0000, 179.1000); //kb_swivelchair1
	g_Object[213] = CreateDynamicObject(1209, 885.2890, 2307.5310, 1909.4110, 0.0000, 0.0000, -270.0000); //vendmach
	g_Object[214] = CreateDynamicObject(2357, 900.4948, 2321.6083, 1908.7595, 0.0000, 89.7997, 0.0000); //DUNC_DINNING
	g_Object[215] = CreateDynamicObject(2205, 882.6712, 2303.3403, 1915.7722, 0.0000, 0.0000, 0.0000); //MED_OFFICE8_DESK_1
	g_Object[216] = CreateDynamicObject(2165, 854.1703, 2318.1281, 1909.4166, 0.0000, 0.0000, 90.0000); //MED_OFFICE_DESK_1
	g_Object[217] = CreateDynamicObject(2173, 901.1613, 2306.1765, 1909.4011, 0.0000, 0.0000, -179.9998); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[217], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[218] = CreateDynamicObject(2173, 905.4121, 2306.1765, 1909.4011, 0.0000, 0.0000, -179.9998); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[218], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[219] = CreateDynamicObject(2173, 905.4121, 2309.3195, 1909.4011, 0.0000, 0.0000, -179.9998); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[219], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[220] = CreateDynamicObject(19369, 895.9398, 2291.6416, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[221] = CreateDynamicObject(19369, 895.9398, 2304.5871, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[222] = CreateDynamicObject(2200, 886.3560, 2302.1662, 1915.7707, 0.0000, 0.0000, 270.0000); //MED_OFFICE5_UNIT_1
	g_Object[223] = CreateDynamicObject(1663, 901.2197, 2304.1621, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[224] = CreateDynamicObject(1663, 900.1392, 2304.1621, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[225] = CreateDynamicObject(1663, 904.2705, 2304.1621, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[226] = CreateDynamicObject(1663, 905.2711, 2304.1621, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[227] = CreateDynamicObject(1663, 905.2711, 2307.3247, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[228] = CreateDynamicObject(1663, 904.2905, 2307.3247, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[229] = CreateDynamicObject(19369, 899.4807, 2305.3752, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[230] = CreateDynamicObject(1663, 901.2202, 2307.3247, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[231] = CreateDynamicObject(1663, 900.2000, 2307.3247, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[232] = CreateDynamicObject(18757, 897.6989, 2276.0822, 1911.2274, 0.0000, 0.0000, -90.0000); //ElevatorDoor2
	g_Object[233] = CreateDynamicObject(1663, 900.2000, 2310.4064, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[234] = CreateDynamicObject(1663, 901.2003, 2310.4064, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[235] = CreateDynamicObject(19805, 901.5938, 2297.0292, 1911.2722, 0.0000, 0.0000, 179.9998); //Whiteboard1
	g_Object[236] = CreateDynamicObject(19397, 899.4793, 2311.7551, 1911.1551, 0.0000, 0.0000, 0.0000); //wall045
	g_Object[237] = CreateDynamicObject(3657, 873.0554, 2300.2082, 1909.9948, 0.0000, 0.0000, -90.0000); //airseata_LAS
	g_Object[238] = CreateDynamicObject(19893, 882.7741, 2303.1730, 1916.7119, 0.0000, 0.0000, 12.1997); //LaptopSAMP1
	g_Object[239] = CreateDynamicObject(1742, 884.6984, 2331.3459, 1915.7624, 0.0000, 0.0000, 0.0000); //Med_BOOKSHELF
	g_Object[240] = CreateDynamicObject(2258, 884.3850, 2300.4013, 1918.2529, 0.0000, 0.0000, 180.0000); //Frame_Clip_5
	g_Object[241] = CreateDynamicObject(2309, 884.3330, 2305.0134, 1915.7854, 0.0000, 0.0000, 151.1999); //MED_OFFICE_CHAIR2
	g_Object[242] = CreateDynamicObject(2309, 882.3037, 2305.0141, 1915.7854, 0.0000, 0.0000, -148.4998); //MED_OFFICE_CHAIR2
	g_Object[243] = CreateDynamicObject(2276, 884.6231, 2325.2446, 1917.5445, 0.0000, 0.0000, 179.6999); //Frame_Fab_3
	g_Object[244] = CreateDynamicObject(11730, 869.3665, 2306.9533, 1909.3684, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[245] = CreateDynamicObject(2614, 883.4218, 2317.9948, 1918.0201, 0.0000, 0.0000, 0.0000); //CJ_US_FLAG
	g_Object[246] = CreateDynamicObject(1663, 893.7697, 2320.6420, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[247] = CreateDynamicObject(2196, 884.2011, 2303.0319, 1916.7093, 0.0000, 0.0000, -143.8000); //WORK_LAMP1
	g_Object[248] = CreateDynamicObject(11730, 869.3665, 2307.6040, 1909.3684, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[249] = CreateDynamicObject(1715, 854.5770, 2321.5202, 1909.4072, 0.0000, 0.0000, 360.0000); //kb_swivelchair2
	g_Object[250] = CreateDynamicObject(2256, 882.5136, 2300.4262, 1918.0299, 0.0000, 0.0000, 180.0000); //Frame_Clip_3
	g_Object[251] = CreateDynamicObject(1663, 893.6994, 2323.8540, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[252] = CreateDynamicObject(2162, 883.0899, 2309.1054, 1915.7845, 0.0000, 0.0000, 0.0000); //MED_OFFICE_UNIT_1
	g_Object[253] = CreateDynamicObject(1663, 896.5137, 2319.3234, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[254] = CreateDynamicObject(19805, 886.4893, 2328.7802, 1917.2325, 0.0000, 0.0000, 89.9000); //Whiteboard1
	g_Object[255] = CreateDynamicObject(1663, 890.9902, 2320.7177, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[256] = CreateDynamicObject(1663, 893.6639, 2322.5844, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[257] = CreateDynamicObject(2254, 883.4685, 2309.1213, 1918.1157, 0.0000, 0.0000, 0.0000); //Frame_Clip_1
	g_Object[258] = CreateDynamicObject(2196, 886.2360, 2326.2192, 1916.5897, 0.0000, 0.0000, -124.5998); //WORK_LAMP1
	g_Object[259] = CreateDynamicObject(2173, 905.3930, 2303.1135, 1909.4011, 0.0000, 0.0000, -179.9998); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[259], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[260] = CreateDynamicObject(2613, 873.7572, 2306.5273, 1909.4791, 0.0000, 0.0000, 0.0000); //POLICE_WASTEBIN
	g_Object[261] = CreateDynamicObject(1663, 904.3015, 2310.4064, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[262] = CreateDynamicObject(1663, 896.4800, 2318.1232, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[263] = CreateDynamicObject(1663, 896.5595, 2323.8171, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[264] = CreateDynamicObject(1811, 886.0109, 2328.0888, 1916.3686, 0.0000, 0.0000, 60.6999); //MED_DIN_CHAIR_5
	g_Object[265] = CreateDynamicObject(2612, 886.4274, 2315.7092, 1917.5854, 0.0000, 0.0000, -88.4999); //POLICE_NB2
	g_Object[266] = CreateDynamicObject(2165, 894.8414, 2284.5322, 1909.4041, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	g_Object[267] = CreateDynamicObject(1811, 884.6668, 2328.0200, 1916.3686, 0.0000, 0.0000, 101.5000); //MED_DIN_CHAIR_5
	g_Object[268] = CreateDynamicObject(3394, 891.0250, 2292.2839, 1909.4094, 0.0000, 0.0000, 90.0000); //a51_sdsk_2_
	SetDynamicObjectMaterial(g_Object[268], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[269] = CreateDynamicObject(19369, 884.9110, 2300.2888, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[269], 0, 3850, "carshowglass_sfsx", "ws_carshowwin1", 0xFFFFFFFF);
	g_Object[270] = CreateDynamicObject(19369, 886.6107, 2298.5566, 1917.5356, 0.0000, 0.0000, 180.0000); //wall017
	SetDynamicObjectMaterial(g_Object[270], 0, 3850, "carshowglass_sfsx", "ws_carshowwin1", 0xFFFFFFFF);
	g_Object[271] = CreateDynamicObject(1968, 886.8986, 2298.2290, 1909.9371, 0.0000, 0.0000, 0.0000); //dinerseat_2
	SetDynamicObjectMaterial(g_Object[271], 0, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	g_Object[272] = CreateDynamicObject(1663, 905.3120, 2310.4064, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[273] = CreateDynamicObject(18084, 883.1740, 2323.0444, 1917.7905, 0.0000, 0.0000, -89.9999); //BARBER_BLINDS
	g_Object[274] = CreateDynamicObject(2611, 886.4890, 2305.6518, 1917.6606, 0.0000, 0.0000, 270.0000); //POLICE_NB1
	SetDynamicObjectMaterial(g_Object[274], 0, 14651, "ab_trukstpd", "Bow_bar_tabletop_wood", 0xFFFFFFFF);
	g_Object[275] = CreateDynamicObject(1663, 895.0242, 2319.3647, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[276] = CreateDynamicObject(1663, 892.5103, 2320.6772, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[277] = CreateDynamicObject(2615, 886.4976, 2329.1445, 1917.2490, 0.0000, 0.0000, -89.6997); //POLICE_NB3
	g_Object[278] = CreateDynamicObject(19805, 886.5629, 2301.6237, 1918.4061, 0.0000, 0.0000, 270.0000); //Whiteboard1
	SetDynamicObjectMaterial(g_Object[278], 0, 14802, "lee_bdupsflat", "USAflag", 0xFFFFFFFF);
	g_Object[279] = CreateDynamicObject(2163, 886.5070, 2306.0080, 1915.7777, 0.0000, 0.0000, 270.0000); //MED_OFFICE_UNIT_2
	g_Object[280] = CreateDynamicObject(1663, 895.0702, 2318.1440, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[281] = CreateDynamicObject(19461, 884.8854, 2307.5798, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[282] = CreateDynamicObject(19161, 886.2717, 2326.4140, 1916.5880, 0.8999, -85.0000, 140.6999); //PoliceHat1
	g_Object[283] = CreateDynamicObject(1663, 893.7647, 2319.3999, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[284] = CreateDynamicObject(19461, 880.1442, 2312.5078, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[285] = CreateDynamicObject(18084, 883.1740, 2326.3068, 1917.7303, 0.0000, 0.0000, -89.9999); //BARBER_BLINDS
	g_Object[286] = CreateDynamicObject(1663, 893.7305, 2318.1806, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[287] = CreateDynamicObject(1663, 892.3946, 2319.3879, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[288] = CreateDynamicObject(19461, 868.5944, 2312.5078, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[289] = CreateDynamicObject(2066, 886.5086, 2310.1430, 1915.7467, -0.1999, 0.0000, 87.4000); //CJ_M_FILEING2
	g_Object[290] = CreateDynamicObject(19377, 879.7072, 2297.9865, 1909.3687, 0.0000, -90.0000, 0.0000); //wall025
	g_Object[291] = CreateDynamicObject(1663, 892.3910, 2318.2182, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[292] = CreateDynamicObject(2139, 889.4229, 2293.7495, 1909.3991, 0.0000, 0.0000, 180.0000); //CJ_K3_LOW_UNIT2
	g_Object[293] = CreateDynamicObject(2200, 854.2197, 2324.9226, 1909.4086, 0.0000, 0.0000, 0.0000); //MED_OFFICE5_UNIT_1
	g_Object[294] = CreateDynamicObject(2165, 855.1601, 2320.1076, 1909.4166, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	g_Object[295] = CreateDynamicObject(1722, 858.1989, 2327.9399, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[296] = CreateDynamicObject(1722, 858.7893, 2327.9299, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[297] = CreateDynamicObject(1722, 859.3795, 2327.9592, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[298] = CreateDynamicObject(1722, 859.9699, 2327.9487, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[299] = CreateDynamicObject(1722, 860.0745, 2330.4089, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[300] = CreateDynamicObject(1722, 860.0359, 2327.9394, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[301] = CreateDynamicObject(1722, 859.4261, 2327.9692, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[302] = CreateDynamicObject(1722, 858.8555, 2327.9577, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[303] = CreateDynamicObject(1671, 890.5544, 2290.6955, 1909.8483, 0.0000, 0.0000, -176.4000); //swivelchair_A
	g_Object[304] = CreateDynamicObject(1722, 859.4837, 2330.3901, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[305] = CreateDynamicObject(1722, 858.8935, 2330.4492, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[306] = CreateDynamicObject(1722, 858.3027, 2330.4091, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[307] = CreateDynamicObject(1722, 858.2390, 2330.4423, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[308] = CreateDynamicObject(1722, 858.8295, 2330.4519, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[309] = CreateDynamicObject(1722, 858.2758, 2327.9665, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[310] = CreateDynamicObject(1722, 860.0100, 2330.4321, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[311] = CreateDynamicObject(1715, 860.3508, 2339.8662, 1909.4072, 0.0000, 0.0000, 92.0999); //kb_swivelchair2
	g_Object[312] = CreateDynamicObject(2922, 896.0458, 2281.0393, 1910.9879, 0.0000, 0.0000, -90.0000); //kmb_keypad
	g_Object[313] = CreateDynamicObject(19823, 883.1033, 2297.2219, 1916.5596, 0.0000, 0.0000, 0.0000); //AlcoholBottle4
	g_Object[314] = CreateDynamicObject(19874, 866.5394, 2303.8032, 1909.4763, 0.0000, 0.0000, 0.0000); //SoapBar1
	g_Object[315] = CreateDynamicObject(19461, 890.0369, 2278.0102, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[316] = CreateDynamicObject(1722, 859.4199, 2330.4418, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[317] = CreateDynamicObject(1663, 892.4943, 2322.6174, 1909.8646, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[318] = CreateDynamicObject(1715, 860.2714, 2342.0363, 1909.4072, 0.0000, 0.0000, 92.0999); //kb_swivelchair2
	g_Object[319] = CreateDynamicObject(1663, 892.5288, 2323.8566, 1909.8646, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[320] = CreateDynamicObject(1663, 891.0092, 2323.8984, 1909.8646, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[321] = CreateDynamicObject(1663, 890.9718, 2322.5593, 1909.8646, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[322] = CreateDynamicObject(1704, 881.6665, 2291.3576, 1915.7440, 0.0000, 0.0000, 22.2999); //kb_chair03
	g_Object[323] = CreateDynamicObject(1704, 884.0607, 2291.7375, 1915.7639, 0.0000, 0.0000, -24.9000); //kb_chair03
	g_Object[324] = CreateDynamicObject(11729, 877.8213, 2296.1386, 1909.4572, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[325] = CreateDynamicObject(19377, 869.2156, 2297.9865, 1909.3687, 0.0000, -90.0000, 0.0000); //wall025
	g_Object[326] = CreateDynamicObject(19377, 869.2156, 2307.6057, 1909.3687, 0.0000, -90.0000, 0.0000); //wall025
	g_Object[327] = CreateDynamicObject(11730, 869.3995, 2298.0300, 1909.4635, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[328] = CreateDynamicObject(19461, 878.1644, 2297.9724, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[329] = CreateDynamicObject(11729, 869.3687, 2303.0874, 1909.3676, 0.0000, 0.0000, 90.0000); //GymLockerClosed1
	g_Object[330] = CreateDynamicObject(2961, 864.5186, 2325.2944, 1910.8542, 0.0000, 0.0000, 0.0000); //fire_break
	g_Object[331] = CreateDynamicObject(11710, 865.1300, 2344.1235, 1912.2790, 0.0000, 0.0000, 0.0000); //FireExitSign1
	g_Object[332] = CreateDynamicObject(1886, 856.9816, 2325.5051, 1913.1540, 23.9999, 0.0000, 128.3000); //shop_sec_cam
	g_Object[333] = CreateDynamicObject(19859, 873.324218, 2316.596191, 1910.635009, 0.000000, 0.000000, 0.000000); //puertaverde
	g_Object[334] = CreateObject(19377, 858.6964, 2310.8012, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[334], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[335] = CreateObject(19377, 858.6964, 2301.1757, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[335], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[336] = CreateDynamicObject(19377, 861.9464, 2320.4130, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[336], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[337] = CreateDynamicObject(19377, 861.9464, 2310.7946, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[337], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[338] = CreateDynamicObject(19377, 880.1229, 2322.8879, 1921.8409, 0.0000, -124.4000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[338], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[339] = CreateDynamicObject(19377, 861.9464, 2301.1550, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[339], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[340] = CreateDynamicObject(2180, 882.9589, 2316.3706, 1915.7578, 0.0000, 0.0000, 0.0000); //MED_OFFICE5_DESK_3
	g_Object[341] = CreateDynamicObject(1671, 883.4550, 2317.5913, 1916.2562, 0.0000, 0.0000, 0.0000); //swivelchair_A
	g_Object[342] = CreateDynamicObject(19377, 871.4760, 2322.9282, 1915.9193, 0.0000, -124.4000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[342], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[343] = CreateDynamicObject(19377, 872.3853, 2311.8041, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[343], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[344] = CreateDynamicObject(19377, 882.9060, 2311.8144, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[344], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[345] = CreateDynamicObject(19369, 895.9398, 2285.2885, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[346] = CreateDynamicObject(19461, 871.9447, 2316.6699, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[347] = CreateDynamicObject(19377, 886.8660, 2321.5739, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[347], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[348] = CreateDynamicObject(19377, 897.3455, 2321.5739, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[348], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[349] = CreateDynamicObject(19377, 907.8350, 2321.5739, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[349], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[350] = CreateDynamicObject(19369, 895.9398, 2282.0986, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[351] = CreateDynamicObject(19377, 893.3856, 2311.9145, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[351], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[352] = CreateDynamicObject(19377, 903.8651, 2311.8144, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[352], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[353] = CreateDynamicObject(2475, 876.0820, 2293.2780, 1910.1812, 0.0000, 0.0000, 180.0000); //CJ_HOBBY_SHELF_3
	g_Object[354] = CreateDynamicObject(19377, 903.8651, 2302.1848, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[354], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[355] = CreateDynamicObject(2395, 888.9305, 2283.9609, 1910.4212, 0.0000, 0.0000, 0.0000); //CJ_SPORTS_WALL
	SetDynamicObjectMaterial(g_Object[355], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[355], 1, 0, "INVALID", "INVALID", 0xFFFFFFFF);
	g_Object[356] = CreateDynamicObject(2475, 874.6021, 2293.2780, 1910.1807, 0.0000, 0.0000, 180.0000); //CJ_HOBBY_SHELF_3
	g_Object[357] = CreateDynamicObject(19377, 893.3745, 2302.2949, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[357], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[358] = CreateDynamicObject(2475, 873.1321, 2293.2780, 1910.1811, 0.0000, 0.0000, 180.0000); //CJ_HOBBY_SHELF_3
	g_Object[359] = CreateDynamicObject(19377, 882.8750, 2302.1848, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[359], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[360] = CreateDynamicObject(19377, 872.3853, 2302.1848, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[360], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[361] = CreateDynamicObject(2614, 883.4274, 2286.4555, 1917.8166, 0.0000, 0.0000, 180.0000); //CJ_US_FLAG
	g_Object[362] = CreateDynamicObject(11691, 892.1665, 2280.9599, 1909.4104, 0.0000, 0.0000, 0.0000); //CTable2
	SetDynamicObjectMaterial(g_Object[362], 0, 16640, "a51", "a51_metal1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[362], 1, 1560, "7_11_door", "cj_sheetmetal2", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[362], 2, 1560, "7_11_door", "cj_sheetmetal2", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[362], 3, 1560, "7_11_door", "cj_sheetmetal2", 0xFFFFFFFF);
	g_Object[363] = CreateDynamicObject(353, 872.7014, 2293.2714, 1911.7679, 0.0000, 0.0000, 0.0000); //mp5lng
	g_Object[364] = CreateDynamicObject(19773, 873.3365, 2293.4799, 1910.4027, -69.7999, 0.0000, -82.0999); //GunHolster1
	g_Object[365] = CreateDynamicObject(19142, 875.2256, 2293.4631, 1911.9118, -3.1999, -90.0000, -0.4999); //SWATArmour1
	g_Object[366] = CreateDynamicObject(19142, 876.0656, 2293.4580, 1911.9118, -3.1999, -90.0000, -0.4999); //SWATArmour1
	g_Object[367] = CreateDynamicObject(2165, 892.8714, 2284.5322, 1909.4041, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	g_Object[368] = CreateDynamicObject(19200, 873.5862, 2293.3911, 1911.1007, 0.0000, -87.6999, 0.0000); //PoliceHelmet1
	g_Object[369] = CreateDynamicObject(2030, 883.3386, 2297.5820, 1916.1474, 0.0000, 0.0000, 0.0000); //MED_DINNING_1
	g_Object[370] = CreateDynamicObject(358, 872.4082, 2293.3002, 1910.4804, 0.0000, 0.0000, 0.0000); //sniper
	g_Object[371] = CreateDynamicObject(19141, 875.9766, 2293.5449, 1912.4831, 0.0000, -90.0000, 0.0000); //SWATHelmet1
	g_Object[372] = CreateDynamicObject(19141, 875.1365, 2293.5449, 1912.4831, 0.0000, -90.0000, 0.0000); //SWATHelmet1
	g_Object[373] = CreateDynamicObject(356, 873.8274, 2293.2829, 1912.1275, 0.0000, 0.0000, 0.0000); //m4
	g_Object[374] = CreateDynamicObject(2162, 881.3666, 2300.2072, 1916.8067, 0.0000, 0.0000, 0.0000); //MED_OFFICE_UNIT_1
	g_Object[375] = CreateDynamicObject(1742, 886.6209, 2288.0200, 1915.8000, 0.0000, 0.0000, -90.0000); //Med_BOOKSHELF
	g_Object[376] = CreateDynamicObject(353, 872.6918, 2293.2714, 1912.0982, 0.0000, 0.0000, 0.0000); //mp5lng
	g_Object[377] = CreateDynamicObject(356, 873.8073, 2293.2829, 1911.7972, 0.0000, 0.0000, 0.0000); //m4
	g_Object[378] = CreateDynamicObject(19904, 886.2545, 2286.6337, 1916.0716, 0.0000, 0.0000, 0.0000); //ConstructionVest1
	g_Object[379] = CreateDynamicObject(348, 882.8521, 2289.9270, 1916.2596, 0.9000, 90.0000, 90.0000); //desert_eagle
	g_Object[380] = CreateDynamicObject(19461, 859.3549, 2302.7255, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[381] = CreateDynamicObject(1715, 892.7251, 2286.1345, 1909.4268, 0.0000, 0.0000, -22.5000); //kb_swivelchair2
	g_Object[382] = CreateDynamicObject(19377, 861.9464, 2291.5322, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[382], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[383] = CreateDynamicObject(19377, 851.4453, 2291.5322, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[383], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[384] = CreateDynamicObject(19377, 851.4453, 2301.1638, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[384], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[385] = CreateDynamicObject(19377, 851.4453, 2310.7661, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[385], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[386] = CreateDynamicObject(19432, 862.0307, 2312.5034, 1909.3830, 90.0998, 0.0000, 90.0000); //wall072
	SetDynamicObjectMaterial(g_Object[386], 0, 8391, "ballys01", "CJ_blackplastic", 0xFFFFFFFF);
	g_Object[387] = CreateDynamicObject(334, 873.5829, 2293.4770, 1911.4147, -1.6000, -86.6999, 167.3999); //nitestick
	g_Object[388] = CreateDynamicObject(348, 876.2242, 2293.2568, 1910.3864, 0.0000, 0.0000, 0.0000); //desert_eagle
	g_Object[389] = CreateDynamicObject(16732, 880.3662, 2288.8059, 1917.9780, 0.0000, 0.0000, -90.0000); //a51_ventcover
	g_Object[390] = CreateDynamicObject(2262, 884.8171, 2286.8801, 1918.3060, 0.0000, 0.0000, 180.0000); //Frame_SLIM_3
	g_Object[391] = CreateDynamicObject(348, 876.2242, 2293.2568, 1910.6967, 0.0000, 0.0000, 0.0000); //desert_eagle
	g_Object[392] = CreateDynamicObject(2264, 885.8537, 2286.8991, 1917.5960, 0.0000, 0.0000, 180.0000); //Frame_SLIM_5
	g_Object[393] = CreateDynamicObject(349, 875.6983, 2293.2685, 1911.2083, 0.0000, 0.0000, 0.0000); //chromegun
	g_Object[394] = CreateDynamicObject(19442, 867.2077, 2317.3947, 1911.1457, 0.0000, 0.0000, 0.0000); //wall082
	g_Object[395] = CreateDynamicObject(19397, 862.0880, 2325.1840, 1911.1551, 0.0000, 0.0000, 90.0000); //wall045
	g_Object[396] = CreateDynamicObject(19461, 855.8432, 2325.1811, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[397] = CreateDynamicObject(19461, 867.2147, 2336.6218, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[398] = CreateDynamicObject(19461, 863.8656, 2307.6052, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[399] = CreateDynamicObject(16732, 880.3766, 2295.5107, 1917.9780, 0.0000, 0.0000, -91.6999); //a51_ventcover
	g_Object[400] = CreateDynamicObject(16732, 880.3768, 2299.2036, 1917.9780, 0.0000, 0.0000, -91.6999); //a51_ventcover
	g_Object[401] = CreateDynamicObject(16732, 880.3815, 2297.3525, 1917.9780, 0.0000, 0.0000, -91.6999); //a51_ventcover
	g_Object[402] = CreateDynamicObject(2265, 886.0405, 2292.1933, 1917.7270, 0.0000, 0.0000, -90.0000); //Frame_SLIM_6
	g_Object[403] = CreateDynamicObject(349, 874.7183, 2293.2685, 1911.2083, 0.0000, 0.0000, 0.0000); //chromegun
	g_Object[404] = CreateDynamicObject(2260, 886.0538, 2291.3493, 1917.1733, 0.0000, 0.0000, -90.0000); //Frame_SLIM_1
	g_Object[405] = CreateDynamicObject(346, 875.7479, 2293.2375, 1910.3974, 0.0000, 0.0000, 0.0000); //colt45
	g_Object[406] = CreateDynamicObject(346, 875.7479, 2293.2375, 1910.6777, 0.0000, 0.0000, 0.0000); //colt45
	g_Object[407] = CreateDynamicObject(347, 875.3565, 2293.2285, 1910.6728, 0.0000, 0.0000, 0.0000); //silenced
	g_Object[408] = CreateDynamicObject(2008, 882.6123, 2290.0104, 1915.7619, 0.0000, 0.0000, 0.0000); //officedesk1
	g_Object[409] = CreateDynamicObject(347, 875.3565, 2293.2285, 1910.3925, 0.0000, 0.0000, 0.0000); //silenced
	g_Object[410] = CreateDynamicObject(19377, 872.3853, 2292.5515, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[410], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[411] = CreateDynamicObject(18637, 874.1844, 2293.2165, 1910.4287, -0.0999, -90.0000, -90.0000); //PoliceShield1
	g_Object[412] = CreateDynamicObject(19377, 882.8858, 2292.5515, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[412], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[413] = CreateDynamicObject(19377, 893.3670, 2292.6616, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[413], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[414] = CreateDynamicObject(16732, 880.3662, 2287.1445, 1917.9780, 0.0000, 0.0000, -90.0000); //a51_ventcover
	g_Object[415] = CreateDynamicObject(19432, 862.0249, 2311.7819, 1910.1010, -0.2000, 90.0000, 179.8000); //wall072
	SetDynamicObjectMaterial(g_Object[415], 0, 8391, "ballys01", "CJ_blackplastic", 0xFFFFFFFF);
	g_Object[416] = CreateDynamicObject(334, 873.5917, 2293.4599, 1911.2049, -1.6000, -86.6999, 167.3999); //nitestick
	g_Object[417] = CreateDynamicObject(358, 872.4082, 2293.3002, 1911.2510, 0.0000, 0.0000, 0.0000); //sniper
	g_Object[418] = CreateDynamicObject(19432, 862.0249, 2311.0617, 1909.3803, 90.0000, 0.0000, 90.0000); //wall072
	SetDynamicObjectMaterial(g_Object[418], 0, 8391, "ballys01", "CJ_blackplastic", 0xFFFFFFFF);
	g_Object[419] = CreateDynamicObject(19432, 860.3546, 2311.7824, 1908.4305, 0.0000, 0.0000, 180.0000); //wall072
	SetDynamicObjectMaterial(g_Object[419], 0, 8391, "ballys01", "CJ_blackplastic", 0xFFFFFFFF);
	g_Object[420] = CreateDynamicObject(2165, 860.7509, 2309.4873, 1909.4166, 0.0000, 0.0000, 90.0000); //MED_OFFICE_DESK_1
	g_Object[421] = CreateDynamicObject(2395, 892.6504, 2283.9609, 1910.4212, 0.0000, 0.0000, 0.0000); //CJ_SPORTS_WALL
	SetDynamicObjectMaterial(g_Object[421], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[421], 1, 0, "INVALID", "INVALID", 0xFFFFFFFF);
	g_Object[422] = CreateDynamicObject(2165, 859.7706, 2310.4882, 1909.4166, 0.0000, 0.0000, 270.0000); //MED_OFFICE_DESK_1
	g_Object[423] = CreateDynamicObject(1722, 894.7191, 2280.3188, 1909.4012, 0.0000, 0.0000, 59.2999); //off_chairnu
	g_Object[424] = CreateDynamicObject(19999, 883.4024, 2288.2663, 1915.7609, 0.0000, 0.0000, 176.0999); //CutsceneChair2
	SetDynamicObjectMaterial(g_Object[424], 0, 18081, "cj_barb", "ab_leather_strips", 0xFFFFFFFF);
	g_Object[425] = CreateDynamicObject(1722, 894.7838, 2281.8156, 1909.4012, 0.0000, 0.0000, 127.7000); //off_chairnu
	g_Object[426] = CreateDynamicObject(2162, 863.7603, 2309.8361, 1909.4051, 0.0000, 0.0000, 270.0000); //MED_OFFICE_UNIT_1
	g_Object[427] = CreateDynamicObject(18636, 874.8483, 2293.4890, 1910.3841, 0.0000, 0.0000, 88.2999); //PoliceCap1
	g_Object[428] = CreateDynamicObject(2190, 883.9083, 2315.8916, 1916.5705, 0.0000, 0.0000, -179.2998); //PC_1
	g_Object[429] = CreateObject(19377, 869.1962, 2310.7751, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[429], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[430] = CreateDynamicObject(2309, 883.7066, 2314.7976, 1915.7573, 0.0000, 0.0000, 0.0000); //MED_OFFICE_CHAIR2
	g_Object[431] = CreateDynamicObject(19099, 873.2158, 2293.4748, 1911.0329, 0.0000, -87.3999, 3.6000); //PoliceCap2
	g_Object[432] = CreateDynamicObject(1968, 886.8986, 2302.4001, 1909.9371, 0.0000, 0.0000, 0.0000); //dinerseat_2
	SetDynamicObjectMaterial(g_Object[432], 0, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	g_Object[433] = CreateDynamicObject(19773, 872.9169, 2293.4711, 1910.3771, -69.7999, 0.0000, -82.0999); //GunHolster1
	g_Object[434] = CreateDynamicObject(2309, 882.8461, 2314.9177, 1915.7573, 0.0000, 0.0000, 0.0000); //MED_OFFICE_CHAIR2
	g_Object[435] = CreateDynamicObject(1744, 886.6348, 2290.1882, 1917.4895, 0.0000, 0.0000, -91.8999); //MED_SHELF
	g_Object[436] = CreateDynamicObject(19022, 886.2393, 2290.4387, 1917.8795, 0.0000, 0.0000, -179.9999); //GlassesType17
	g_Object[437] = CreateDynamicObject(1968, 892.8494, 2298.2971, 1909.9371, 0.0000, 0.0000, 0.0000); //dinerseat_2
	SetDynamicObjectMaterial(g_Object[437], 0, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	g_Object[438] = CreateDynamicObject(19325, 882.9041, 2312.5187, 1910.8304, 0.0000, 0.0000, 90.0000); //lsmall_window01
	g_Object[439] = CreateDynamicObject(2167, 900.1724, 2321.4392, 1909.3736, 0.0000, 0.0000, 89.7990); //MED_OFFICE_UNIT_7
	g_Object[440] = CreateDynamicObject(19325, 895.9345, 2309.2270, 1910.8502, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[441] = CreateDynamicObject(2167, 900.1741, 2321.8395, 1909.3736, 0.0000, 0.0000, 89.7990); //MED_OFFICE_UNIT_7
	g_Object[442] = CreateDynamicObject(19611, 900.2877, 2321.3112, 1909.5467, 0.0000, 0.0000, 0.0000); //MicrophoneStand1
	g_Object[443] = CreateDynamicObject(2894, 883.2786, 2316.4299, 1916.5642, 0.0000, 0.0000, 0.0000); //kmb_rhymesbook
	g_Object[444] = CreateDynamicObject(1776, 885.4616, 2309.8034, 1910.4935, 0.0000, 0.0000, 90.0000); //CJ_CANDYVENDOR
	g_Object[445] = CreateDynamicObject(19610, 900.2896, 2321.3144, 1911.1926, 0.0000, 0.0000, -75.1999); //Microphone1
	g_Object[446] = CreateDynamicObject(2894, 900.5891, 2321.6071, 1910.9035, 0.0000, 0.0000, 89.5999); //kmb_rhymesbook
	g_Object[447] = CreateDynamicObject(19610, 900.2758, 2321.6005, 1911.2026, 0.0000, 0.0000, -82.8000); //Microphone1
	g_Object[448] = CreateDynamicObject(19610, 900.2402, 2321.8803, 1911.2026, 0.0000, 0.0000, -101.4000); //Microphone1
	g_Object[449] = CreateDynamicObject(19031, 900.5753, 2321.1245, 1910.9425, 0.0000, 0.0000, 164.3999); //GlassesType26
	g_Object[450] = CreateDynamicObject(19325, 872.6937, 2312.5256, 1913.8503, 0.0000, 0.0000, 90.0000); //lsmall_window01
	g_Object[451] = CreateDynamicObject(2256, 883.3040, 2309.4375, 1918.1400, 0.0000, 0.0000, 180.0000); //Frame_Clip_3
	g_Object[452] = CreateDynamicObject(2139, 887.4530, 2293.7495, 1909.3991, 0.0000, 0.0000, 180.0000); //CJ_K3_LOW_UNIT2
	g_Object[453] = CreateDynamicObject(2139, 885.4824, 2293.7495, 1909.3991, 0.0000, 0.0000, 180.0000); //CJ_K3_LOW_UNIT2
	g_Object[454] = CreateDynamicObject(2139, 886.4627, 2293.7495, 1909.3991, 0.0000, 0.0000, 180.0000); //CJ_K3_LOW_UNIT2
	g_Object[455] = CreateDynamicObject(2138, 888.4365, 2293.7434, 1909.4057, 0.0000, 0.0000, 180.0000); //CJ_K3_LOW_UNIT1
	g_Object[456] = CreateDynamicObject(1808, 886.4121, 2310.7048, 1915.7469, 0.0000, 0.0000, -90.7998); //CJ_WATERCOOLER2
	g_Object[457] = CreateDynamicObject(1968, 886.9082, 2305.8498, 1909.9271, 0.0000, 0.0000, 0.0000); //dinerseat_2
	SetDynamicObjectMaterial(g_Object[457], 0, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	g_Object[458] = CreateDynamicObject(2886, 873.0512, 2312.5551, 1911.0296, 0.0000, 0.0000, -180.0000); //puertaverde
	g_Object[459] = CreateDynamicObject(2200, 886.4661, 2314.4670, 1915.7707, 0.0000, 0.0000, 270.0000); //MED_OFFICE5_UNIT_1
	g_Object[460] = CreateDynamicObject(19325, 893.9603, 2312.5187, 1909.7829, -90.1999, 0.0000, 90.0000); //lsmall_window01
	g_Object[461] = CreateDynamicObject(19325, 899.4765, 2300.2668, 1910.8502, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[462] = CreateDynamicObject(1968, 893.0989, 2306.0803, 1909.9371, 0.0000, 0.0000, 0.0000); //dinerseat_2
	SetDynamicObjectMaterial(g_Object[462], 0, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	g_Object[463] = CreateDynamicObject(1968, 892.8488, 2302.1867, 1909.9371, 0.0000, 0.0000, 0.0000); //dinerseat_2
	SetDynamicObjectMaterial(g_Object[463], 0, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	g_Object[464] = CreateDynamicObject(11730, 877.8193, 2306.5825, 1909.3646, 0.0000, 0.0000, -90.0000); //GymLockerOpen1
	g_Object[465] = CreateDynamicObject(11743, 886.2039, 2293.6232, 1910.4399, 0.0000, 0.0000, 144.1999); //MCoffeeMachine1
	g_Object[466] = CreateDynamicObject(2166, 854.1812, 2311.7780, 1909.4138, 0.0000, 0.0000, 0.0000); //MED_OFFICE_DESK_2
	g_Object[467] = CreateDynamicObject(2163, 853.6749, 2314.3894, 1909.4140, 0.0000, 0.0000, 90.0000); //MED_OFFICE_UNIT_2
	g_Object[468] = CreateDynamicObject(2165, 860.7509, 2305.9960, 1909.4166, 0.0000, 0.0000, 90.0000); //MED_OFFICE_DESK_1
	g_Object[469] = CreateDynamicObject(2165, 858.7803, 2305.0258, 1909.4166, 0.0000, 0.0000, 360.0000); //MED_OFFICE_DESK_1
	g_Object[470] = CreateDynamicObject(1808, 853.8308, 2316.4877, 1909.4123, 0.0000, 0.0000, 90.0000); //CJ_WATERCOOLER2
	g_Object[471] = CreateDynamicObject(2165, 858.2603, 2317.1877, 1909.4166, 0.0000, 0.0000, 360.0000); //MED_OFFICE_DESK_1
	g_Object[472] = CreateDynamicObject(14494, 865.4743, 2306.1770, 1911.7786, 0.0000, 0.0000, -180.0000); //sweets_bath
	SetDynamicObjectMaterial(g_Object[472], 0, 10101, "2notherbuildsfe", "ferry_build14", 0xFFFFFFFF);
	g_Object[473] = CreateDynamicObject(2165, 855.1303, 2306.0063, 1909.4166, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	g_Object[474] = CreateDynamicObject(2165, 863.2808, 2313.0961, 1909.4166, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	g_Object[475] = CreateDynamicObject(19461, 864.3259, 2297.9719, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[475], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[476] = CreateDynamicObject(11729, 877.8213, 2297.4082, 1909.4572, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[477] = CreateDynamicObject(19461, 864.3259, 2307.6052, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[477], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[478] = CreateDynamicObject(19369, 869.0371, 2307.0478, 1911.1639, 0.0000, 0.0000, -0.2998); //wall017
	SetDynamicObjectMaterial(g_Object[478], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[479] = CreateDynamicObject(19461, 869.0269, 2300.6245, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[479], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[480] = CreateDynamicObject(11730, 869.3696, 2301.1074, 1909.3732, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[481] = CreateDynamicObject(19369, 866.0366, 2312.4501, 1911.1639, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[481], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[482] = CreateDynamicObject(11729, 869.3687, 2301.7773, 1909.3676, 0.0000, 0.0000, 90.0000); //GymLockerClosed1
	g_Object[483] = CreateDynamicObject(19369, 869.2553, 2293.1616, 1911.1639, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[483], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[484] = CreateDynamicObject(11730, 877.8150, 2301.3154, 1909.3634, 0.0000, 0.0000, -90.0000); //GymLockerOpen1
	g_Object[485] = CreateDynamicObject(19369, 869.2371, 2312.4501, 1911.1639, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[485], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[486] = CreateDynamicObject(19369, 866.0457, 2293.1816, 1911.1639, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[486], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[487] = CreateDynamicObject(11729, 877.8092, 2301.9729, 1909.3635, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[488] = CreateDynamicObject(2164, 863.7332, 2304.2946, 1909.3947, 0.0000, 0.0000, 270.0000); //MED_OFFICE_UNIT_5
	g_Object[489] = CreateDynamicObject(19369, 876.2800, 2316.6386, 1917.5356, 0.0000, 0.0000, 0.0000); //wall017
	SetDynamicObjectMaterial(g_Object[489], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[490] = CreateDynamicObject(19397, 880.2562, 2307.5734, 1917.5356, 0.0000, 0.0000, 0.0000); //wall045
	SetDynamicObjectMaterial(g_Object[490], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[491] = CreateDynamicObject(11729, 877.8037, 2302.6279, 1909.3665, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[492] = CreateDynamicObject(2616, 853.6851, 2311.1318, 1911.0943, 0.0000, 0.0000, 90.0000); //POLICE_NB04
	SetDynamicObjectMaterial(g_Object[492], 0, 14650, "ab_trukstpc", "mp_CJ_WOOD5", 0xFFFFFFFF);
	g_Object[493] = CreateDynamicObject(11730, 877.8187, 2308.5380, 1909.3624, 0.0000, 0.0000, -90.0000); //GymLockerOpen1
	g_Object[494] = CreateDynamicObject(1492, 880.2677, 2292.1953, 1915.7784, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[494], 0, 1560, "7_11_door", "cj_sheetmetal2", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[494], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[495] = CreateDynamicObject(11730, 877.8287, 2303.2954, 1909.3624, 0.0000, 0.0000, -90.0000); //GymLockerOpen1
	g_Object[496] = CreateDynamicObject(11730, 869.3555, 2302.4387, 1909.3624, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[497] = CreateDynamicObject(2202, 861.2639, 2313.1335, 1909.3940, 0.0000, 0.0000, 180.0000); //PHOTOCOPIER_2
	g_Object[498] = CreateDynamicObject(2690, 865.1542, 2325.3933, 1911.0766, 0.0000, 0.0000, 177.7998); //CJ_FIRE_EXT
	g_Object[499] = CreateDynamicObject(2690, 876.5067, 2302.1638, 1917.5036, 0.0000, 0.0000, 90.9999); //CJ_FIRE_EXT
	g_Object[500] = CreateDynamicObject(11729, 877.8222, 2307.8642, 1909.3675, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[501] = CreateDynamicObject(1715, 862.5701, 2314.4545, 1909.4072, 0.0000, 0.0000, 0.0000); //kb_swivelchair2
	g_Object[502] = CreateDynamicObject(1715, 854.8660, 2314.3774, 1909.4072, 0.0000, 0.0000, 360.0000); //kb_swivelchair2
	g_Object[503] = CreateDynamicObject(1715, 854.4697, 2307.3828, 1909.4072, 0.0000, 0.0000, 0.0000); //kb_swivelchair2
	g_Object[504] = CreateDynamicObject(2961, 877.5003, 2318.0219, 1917.4327, 0.0000, 0.0000, 0.5000); //fire_break
	g_Object[505] = CreateDynamicObject(2690, 896.1522, 2298.5512, 1911.0898, 0.0000, 0.0000, 91.8999); //CJ_FIRE_EXT
	g_Object[506] = CreateDynamicObject(1715, 858.3161, 2309.9855, 1909.4072, 0.0000, 0.0000, 90.0000); //kb_swivelchair2
	g_Object[507] = CreateDynamicObject(1715, 862.2163, 2309.9855, 1909.4072, 0.0000, 0.0000, 270.0000); //kb_swivelchair2
	g_Object[508] = CreateDynamicObject(1715, 859.0401, 2315.9348, 1909.4072, 0.0000, 0.0000, 180.0000); //kb_swivelchair2
	g_Object[509] = CreateDynamicObject(1715, 859.2902, 2303.5122, 1909.4072, 0.0000, 0.0000, 180.0000); //kb_swivelchair2
	g_Object[510] = CreateDynamicObject(2690, 882.1267, 2312.6965, 1911.1176, 0.0000, 0.0000, -177.3000); //CJ_FIRE_EXT
	g_Object[511] = CreateDynamicObject(1715, 855.3165, 2311.3154, 1909.4072, 0.0000, 0.0000, -143.1000); //kb_swivelchair2
	g_Object[512] = CreateDynamicObject(346, 1822.2655, -1613.1085, 11.7177, 0.0000, 0.0000, 0.0000); //colt45
	g_Object[513] = CreateDynamicObject(1715, 862.2163, 2306.4643, 1909.4072, 0.0000, 0.0000, 270.0000); //kb_swivelchair2
	g_Object[514] = CreateDynamicObject(11730, 869.3665, 2306.3227, 1909.3684, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[515] = CreateDynamicObject(19377, 861.9464, 2330.0146, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[515], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[516] = CreateObject(19805, 867.1506, 2333.7475, 1911.1103, 0.0000, 0.0000, -90.0000); //Whiteboard1
	SetObjectMaterialText(g_Object[516], "Central", 0, 140, "Gabriola", 100, 1, 0xFFFFFFFF, 0x0, 1);
	g_Object[517] = CreateObject(19805, 867.1506, 2334.2780, 1911.7103, 0.0000, 0.0000, -90.0000); //Whiteboard1
	SetObjectMaterialText(g_Object[517], "Buenos Aires", 0, 140, "Arial", 100, 1, 0xFFFFFFFF, 0x0, 1);
	g_Object[518] = CreateObject(19805, 867.1506, 2332.9367, 1911.4499, 0.0000, 0.0000, -90.0000); //Whiteboard1
	SetObjectMaterialText(g_Object[518], "P F A", 0, 140, "Arial", 65, 1, 0xFFFFFFFF, 0x0, 1);
	g_Object[519] = CreateDynamicObject(2200, 902.4456, 2316.4296, 1909.4262, 0.0000, 0.0000, 0.0000); //MED_OFFICE5_UNIT_1
	g_Object[520] = CreateDynamicObject(2162, 900.4356, 2316.5678, 1909.3890, 0.0000, 0.0000, 0.0000); //MED_OFFICE_UNIT_1
	g_Object[521] = CreateDynamicObject(19825, 890.8325, 2293.2614, 1912.1674, 0.0000, 0.0000, 179.8999); //SprunkClock1
	g_Object[522] = CreateDynamicObject(2222, 888.3388, 2293.4521, 1910.5240, 0.0000, 0.0000, -89.0999); //rustyhigh
	g_Object[523] = CreateDynamicObject(2173, 904.3621, 2299.4255, 1909.4011, 0.0000, 0.0000, 360.0000); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[523], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[524] = CreateDynamicObject(1663, 905.1853, 2298.1567, 1909.8647, 0.0000, 0.0000, -128.8999); //swivelchair_B
	g_Object[525] = CreateDynamicObject(2223, 887.7758, 2293.5451, 1910.5266, 0.0000, 0.0000, 0.0000); //rustymed
	g_Object[526] = CreateObject(19377, 894.1740, 2281.9548, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[526], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[527] = CreateDynamicObject(2190, 905.0917, 2299.7641, 1910.2105, 0.0000, 0.0000, 0.0000); //PC_1
	g_Object[528] = CreateDynamicObject(2190, 908.0512, 2302.7756, 1907.2702, 0.0000, 0.0000, 0.0000); //PC_1
	g_Object[529] = CreateDynamicObject(19377, 893.3572, 2273.4465, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[529], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[530] = CreateDynamicObject(19377, 882.8577, 2273.2863, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[530], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[531] = CreateDynamicObject(19461, 891.1453, 2284.0720, 1908.8802, 0.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[531], 0, 3077, "blkbrdx", "nf_blackbrd", 0xFFFFFFFF);
	g_Object[532] = CreateDynamicObject(19377, 893.3776, 2283.0598, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[532], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[533] = CreateDynamicObject(19786, 904.3778, 2296.9399, 1911.3460, 0.0000, 0.0000, 180.0000); //LCDTVBig1
	g_Object[333] = CreateDynamicObject(19859, 873.324218, 2316.596191, 1910.635009, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(19859, 876.325073, 2316.579345, 1910.635009, 0.000000, 0.000000, -180.0000);
	CreateDynamicObject(19859, 867.35883, 2316.59619, 1910.63501,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19859, 870.32257, 2316.57935, 1910.63501,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19859, 879.48749, 2316.59619, 1910.63501,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19859, 882.47009, 2316.57935, 1910.63501,   0.00000, 0.00000, -180.00000);

	//-> Camioneros - By. NúO
	// Base
	CreateObject(3294, 2178.21118, -2254.91772, 15.04366,   0.00000, 0.00000, -45.00000, 500000.0); // Cierre
	// Entrega 1
	CreateObject(3887, -658.39233, 2596.65649, 109.45708,   0.00000, 0.00000, 180.00000, 500000.0); // Edificio
	CreateDynamicObject(5711, -666.81165, 2585.99463, 105.61498,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, -662.01563, 2584.67285, 109.66201,   0.00000, 0.00000, 5.94000);
	CreateDynamicObject(1685, -664.93542, 2585.65503, 109.66201,   0.00000, 0.00000, -17.82000);
	CreateDynamicObject(1685, -662.60388, 2587.40259, 109.66201,   0.00000, 0.00000, -33.12000);
	CreateDynamicObject(944, -670.04852, 2583.33618, 109.87942,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19277, -649.02063, 2590.45361, 110.28823,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19089, -649.54712, 2592.69873, 117.76250,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19089, -649.54712, 2588.18018, 117.76250,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19974, -625.47089, 2643.00610, 85.08292,   0.00000, 0.00000, 132.12006);
	CreateDynamicObject(16401, -645.45911, 2632.16089, 88.50520,   0.00000, 0.00000, 208.86002);
	CreateDynamicObject(18609, -637.89490, 2626.78564, 87.71936,   0.00000, 0.00000, -7.86000);
	CreateDynamicObject(18609, -638.67358, 2626.93384, 87.95934,   0.00000, 0.00000, -7.86000);
	CreateDynamicObject(16317, -644.54358, 2619.21973, 91.63243,   0.00000, 30.00000, 0.00000);
	CreateDynamicObject(16317, -644.95319, 2605.91064, 89.78786,   0.00000, 20.00000, 0.00000);
	CreateDynamicObject(16302, -645.72424, 2575.79663, 91.04518,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16302, -650.63379, 2590.62012, 91.04518,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3630, -620.26611, 2589.76880, 90.24968,   0.00000, 0.00000, 90.00000);
	// Entrega 2
	CreateObject(4587, -2660.86206, 2300.71851, 55.08821,   0.00000, 0.00000, 0.00000, 500000.0);
	CreateObject(4605, -2640.20215, 2303.93921, -9.04345,   0.00000, 0.00000, 0.00000, 500000.0);
	CreateDynamicObject(944, -2632.77734, 2274.61646, 8.18678,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(944, -2630.91260, 2272.31812, 8.18678,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(944, -2628.48560, 2274.61646, 8.18678,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, -2630.32739, 2268.26782, 7.88631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, -2629.02661, 2265.79907, 7.88631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, -2626.51392, 2266.14087, 7.88631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, -2627.06250, 2269.29150, 7.88631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, -2627.11279, 2262.84497, 7.88631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, -2629.84058, 2263.11816, 7.88631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, -2623.99316, 2268.23730, 7.88631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, -2623.79199, 2263.41821, 7.88631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, -2621.85327, 2265.99463, 7.88631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, -2620.67944, 2269.96631, 7.88631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3630, -2623.97559, 2250.67700, 8.62167,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3630, -2612.70361, 2250.67700, 8.62170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16317, -2625.47339, 2258.94604, 4.26912,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16317, -2635.11450, 2289.63086, 5.29335,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16317, -2636.73047, 2304.14331, 6.62977,   0.00000, 0.00000, -44.82000);
	CreateDynamicObject(19974, -2620.79272, 2319.97461, 7.17709,   0.00000, 0.00000, 163.32001);
	CreateDynamicObject(16302, -2603.68384, 2256.71460, 4.71986,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3867, -2625.68408, 2301.31494, 21.74910,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3867, -2625.68408, 2301.31494, 51.57637,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3578, -2623.75562, 2320.42236, 7.99866,   0.00000, 0.00000, -39.83999);
	CreateDynamicObject(3578, -2608.70313, 2316.18091, 8.10593,   0.00000, 0.00000, 71.46001);
	CreateDynamicObject(1383, -2614.85083, 2260.90308, 39.78890,   0.00000, 0.00000, -40.00000);
	CreateDynamicObject(16328, -2614.85083, 2260.90308, 61.95360,   0.00000, 0.00000, -40.00000);
	CreateDynamicObject(1388, -2614.72656, 2260.74780, 127.94056,   0.00000, 0.00000, 40.00000);
	CreateDynamicObject(11400, -2640.17163, 2290.98462, 130.12845,   0.00000, 0.00000, 40.00000);
	CreateDynamicObject(10773, -2648.58081, 2292.00781, 116.77345,   0.00000, 0.00000, 0.00000);


	//-> Granjeros | By. NúO
	CreateObject(3425, -383.72421, -1454.55920, 35.95313,   356.85840, 0.00000, 3.14159, 500000.0);


	//-> Puesto de Pesca | By. NúO
	new puestopesca [1];
	puestopesca [0] = CreateObject(1571, 2848.01880, -2069.22388, 11.24667,   0.00000, 0.00000, -94.50001, 500000.0);
	SetObjectMaterial(puestopesca [0], 1, 1410, "break_f_w", "CJ_SLATEDWOOD", 0 );

	CreateDynamicObject(19630, 2846.07153, -2068.01831, 11.89470,   0.00000, -90.00000, 90.00000);
	CreateDynamicObject(19630, 2846.07153, -2068.33081, 11.89470,   0.00000, -90.00000, 90.00000);
	CreateDynamicObject(19630, 2846.07153, -2068.66602, 11.89470,   0.00000, -90.00000, 90.00000);
	CreateDynamicObject(19630, 2846.07153, -2069.06812, 11.89470,   0.00000, -90.00000, 90.00000);
	CreateDynamicObject(19630, 2846.07153, -2069.46069, 11.89470,   0.00000, -90.00000, 90.00000);
	CreateDynamicObject(19630, 2846.07153, -2069.84546, 11.89470,   0.00000, -90.00000, 90.00000);
	CreateDynamicObject(19630, 2846.07153, -2070.20386, 11.89470,   0.00000, -90.00000, 90.00000);
	CreateDynamicObject(19630, 2846.07153, -2070.50244, 11.89470,   0.00000, -90.00000, 90.00000);
	CreateDynamicObject(18632, 2846.17725, -2071.68677, 10.22400,   0.00000, 170.00000, 0.00000);
	CreateDynamicObject(18632, 2845.91748, -2071.68677, 10.22400,   0.00000, 170.00000, 180.00000);
	CreateDynamicObject(18632, 2846.04150, -2071.53516, 10.22400,   0.00000, 170.00000, 90.00000);
	CreateDynamicObject(18632, 2846.04150, -2071.85156, 10.22400,   0.00000, 170.00000, -90.00000);
	CreateDynamicObject(1368, 2847.78223, -2065.77954, 10.72171,   0.00000, 0.00000, -95.76002);
	CreateDynamicObject(2644, 2849.11548, -2068.27124, 10.63697,   0.00000, 0.00000, -94.50000);
	CreateDynamicObject(1518, 2849.08691, -2068.26465, 11.34037,   0.00000, 0.00000, -60.24000);
	CreateDynamicObject(2350, 2847.54028, -2069.38281, 10.52938,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 2846.44702, -2069.32446, 11.92740,   0.00000, 0.00000, 0.00000);


	//-> Concesionaria de Botes | By. NúO
	CreateDynamicObject(18981, 2883.02344, -1974.61084, 7.75440,   0.00000, 89.96000, 90.00000);
	CreateDynamicObject(18981, 2883.02344, -1953.30505, 7.77440,   0.00000, 89.96000, 90.00000);
	CreateDynamicObject(18762, 2894.93750, -1941.43274, 5.04930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2893.75488, -1966.21716, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2894.93750, -1958.46326, 4.96930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2894.93750, -1969.44666, 4.96930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2894.93750, -1977.13794, 4.96930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2894.93750, -1986.42065, 4.96930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2880.07275, -1941.32849, 8.71270,   0.00000, 90.06000, 0.00000);
	CreateDynamicObject(18762, 2885.01294, -1941.32849, 8.71270,   0.00000, 90.06000, 0.00000);
	CreateDynamicObject(18762, 2889.92993, -1941.32849, 8.71270,   0.00000, 90.06000, 0.00000);
	CreateDynamicObject(18762, 2891.73315, -1941.32849, 8.71270,   0.00000, 90.06000, 0.00000);
	CreateDynamicObject(18762, 2880.08276, -1986.55103, 8.71270,   0.00000, 90.06000, 0.00000);
	CreateDynamicObject(18762, 2885.04126, -1986.55103, 8.71270,   0.00000, 90.06000, 0.00000);
	CreateDynamicObject(18762, 2889.86108, -1986.55103, 8.71270,   0.00000, 90.06000, 0.00000);
	CreateDynamicObject(18762, 2891.73315, -1986.57104, 8.71270,   0.00000, 90.06000, 0.00000);
	CreateDynamicObject(3859, 2880.54004, -1986.90356, 12.03810,   0.00000, 0.00000, 107.06000);
	CreateDynamicObject(3859, 2885.77051, -1986.90356, 12.03810,   0.00000, 0.00000, 107.06000);
	CreateDynamicObject(3859, 2890.99512, -1986.90356, 12.03810,   0.00000, 0.00000, 107.06000);
	CreateDynamicObject(3859, 2880.54004, -1941.34241, 12.03810,   0.00000, 0.00000, 107.06000);
	CreateDynamicObject(3859, 2885.77051, -1941.34241, 12.03810,   0.00000, 0.00000, 107.06000);
	CreateDynamicObject(3859, 2890.99512, -1941.34241, 12.03810,   0.00000, 0.00000, 107.06000);
	CreateDynamicObject(19370, 2875.08350, -1943.32117, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1946.50940, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1949.70642, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1952.90930, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1955.96484, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1958.99902, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1962.17529, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1965.34558, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08057, -1968.49084, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1971.66589, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1974.72534, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1977.89429, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1981.04785, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1984.22083, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2875.08350, -1984.97229, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1943.32117, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1946.51575, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1949.68054, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1952.85449, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1955.97571, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1959.13611, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1962.26904, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1965.31750, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1968.50488, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1971.70227, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1974.83972, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1977.81433, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1980.95789, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1984.15149, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2878.55615, -1984.97229, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1943.32117, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1946.44897, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1949.64233, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1952.79211, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1955.91772, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1959.04944, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1962.15295, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1965.26074, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1968.42822, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1971.51440, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1974.51489, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1977.63965, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1980.72192, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1983.73975, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2881.99072, -1984.97229, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1943.32117, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1946.47742, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1949.66125, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1952.84717, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1956.03320, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1959.19092, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1962.36206, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1965.55371, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1968.74133, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1971.92395, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1975.10571, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1978.24792, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1981.37219, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2885.46704, -1984.52393, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1943.32117, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1946.47449, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1949.62634, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1952.81470, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1955.94849, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1959.10718, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1962.28149, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1965.37769, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1968.48218, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1971.61475, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1974.77747, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1977.92444, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1981.05920, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1984.17041, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2888.91675, -1984.97229, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1943.32117, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1946.51953, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1949.68909, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1952.76318, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1955.84595, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1958.94897, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1962.04138, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1965.12903, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1968.24585, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1971.37256, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1974.43408, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1977.52563, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1980.56274, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1983.56140, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(19370, 2892.39209, -1984.97229, 8.21860,   -0.08000, 90.00000, 0.30000);
	CreateDynamicObject(18762, 2893.73486, -1944.27625, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2893.73486, -1949.17969, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2893.73486, -1954.10046, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2893.73486, -1983.69751, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2893.73486, -1978.82007, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2893.73486, -1973.94800, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2893.73486, -1969.01917, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2893.73486, -1955.06641, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(3361, 2898.17822, -1965.22351, 6.17930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3361, 2898.17822, -1963.14319, 6.17930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3361, 2904.26025, -1965.22351, 2.13390,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3361, 2904.25977, -1963.14319, 2.13390,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3859, 2893.62158, -1944.39099, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(638, 2894.57788, -1943.25427, 8.98634,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 2894.57788, -1948.14148, 8.98630,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 2894.57788, -1953.94800, 8.98630,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 2894.57788, -1984.61157, 8.98630,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 2894.57788, -1979.63635, 8.98630,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 2894.57788, -1974.09595, 8.98630,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2894.93750, -1949.74243, 5.53191,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2893.77490, -1962.24268, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3859, 2893.62158, -1949.60852, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(3859, 2893.62158, -1954.84094, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(3859, 2893.62158, -1984.24829, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(3859, 2893.62158, -1979.02734, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(3859, 2893.62158, -1973.80261, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(1502, 2894.17944, -1965.73999, 8.26100,   0.00000, 0.00000, 90.48000);
	CreateDynamicObject(1502, 2894.12769, -1962.72424, 8.26100,   0.00000, 0.00000, -90.52000);
	CreateDynamicObject(18762, 2893.77490, -1962.24268, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2893.77490, -1966.21716, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2893.73486, -1986.57764, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2893.73486, -1986.57764, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2893.73486, -1941.32031, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2893.73486, -1941.32031, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.05859, -1941.32849, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.05859, -1941.32849, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.05859, -1986.55273, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.05859, -1986.55273, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.03711, -1944.27625, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2878.03711, -1949.07922, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(3859, 2878.01733, -1944.49097, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(3859, 2878.01733, -1949.70850, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(18762, 2878.03711, -1952.62817, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2878.05713, -1954.63403, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.05713, -1954.63403, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.03711, -1959.04919, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.03711, -1959.04919, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.05713, -1962.92273, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.03711, -1962.92273, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.03711, -1966.87708, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.03711, -1966.87708, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.07715, -1971.36499, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.07715, -1971.36499, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.03711, -1983.69751, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2878.03711, -1978.82007, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2878.03711, -1973.68188, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2878.03711, -1973.94800, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(3859, 2878.01733, -1979.02734, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(3859, 2878.01733, -1984.24829, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(3859, 2878.01733, -1973.80261, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(3859, 2893.62158, -1968.56067, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(3859, 2893.62158, -1960.07373, 12.03810,   0.00000, 0.00000, 17.18000);
	CreateDynamicObject(18762, 2893.73486, -1959.27197, 8.69270,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2878.05713, -1952.73059, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.05713, -1952.73059, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.05713, -1953.66345, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.05713, -1953.66345, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 2879.74902, -1971.06396, 8.81532,   0.00000, 0.00000, 90.60012);
	CreateDynamicObject(2773, 2882.19263, -1971.06396, 8.81530,   0.00000, 0.00000, 90.60010);
	CreateDynamicObject(2773, 2884.62842, -1971.06396, 8.81530,   0.00000, 0.00000, 90.60010);
	CreateDynamicObject(2773, 2887.11597, -1971.06396, 8.81530,   0.00000, 0.00000, 90.60010);
	CreateDynamicObject(2773, 2889.64453, -1971.06396, 8.81530,   0.00000, 0.00000, 90.60010);
	CreateDynamicObject(2773, 2892.07300, -1971.06396, 8.81530,   0.00000, 0.00000, 90.60010);
	CreateDynamicObject(1502, 2877.59863, -1955.56604, 8.26100,   0.00000, 0.00000, -90.52000);
	CreateDynamicObject(1502, 2877.64136, -1958.59094, 8.26100,   0.00000, 0.00000, 90.48000);
	CreateDynamicObject(1502, 2877.60132, -1959.53198, 8.26100,   0.00000, 0.00000, -90.52000);
	CreateDynamicObject(1502, 2877.64136, -1962.50403, 8.26100,   0.00000, 0.00000, 90.48000);
	CreateDynamicObject(1502, 2877.60132, -1963.37695, 8.26100,   0.00000, 0.00000, -90.52000);
	CreateDynamicObject(1502, 2877.64136, -1966.38782, 8.26100,   0.00000, 0.00000, 90.48000);
	CreateDynamicObject(1502, 2877.68140, -1970.36523, 8.26100,   0.00000, 0.00000, 90.48000);
	CreateDynamicObject(1502, 2877.64136, -1967.33008, 8.26100,   0.00000, 0.00000, -90.52000);
	CreateDynamicObject(18762, 2878.05713, -1955.09399, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.07715, -1955.09399, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.07715, -1970.82495, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.07715, -1970.82495, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.07715, -1972.33777, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.07715, -1972.33777, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.07715, -1973.06433, 10.74020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2878.07715, -1973.06433, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 2877.84717, -1960.95667, 12.89370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 2877.90723, -1964.95923, 12.89370,   0.00000, 0.00000, 0.14000);
	CreateDynamicObject(638, 2894.57788, -1968.55164, 8.98630,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 2894.57788, -1958.99683, 8.98630,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1726, 2892.62085, -1947.43457, 8.30300,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1726, 2892.62085, -1951.50464, 8.30300,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1726, 2892.62085, -1955.48047, 8.30300,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1726, 2892.62085, -1959.56360, 8.30300,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2311, 2890.92285, -1947.67371, 8.30140,   0.00000, 0.00000, -89.94000);
	CreateDynamicObject(2311, 2890.92285, -1951.74109, 8.30140,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2311, 2890.92285, -1955.70593, 8.30140,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2311, 2890.92285, -1959.82214, 8.30140,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1726, 2889.17822, -1961.62402, 8.30300,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1726, 2889.17822, -1957.49902, 8.30300,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1726, 2889.17822, -1953.51917, 8.30300,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1726, 2889.17822, -1949.45459, 8.30300,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1670, 2890.94238, -1955.98975, 8.82760,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1670, 2890.93872, -1952.97278, 8.82760,   0.00000, 0.00000, -110.75997);
	CreateDynamicObject(1670, 2890.83740, -1948.44275, 8.82760,   0.00000, 0.00000, -52.85999);
	CreateDynamicObject(1670, 2890.90186, -1960.55078, 8.82760,   0.00000, 0.00000, -71.22001);
	CreateDynamicObject(1665, 2890.64502, -1949.21497, 8.83070,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1543, 2891.12036, -1951.90491, 8.82137,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1543, 2890.67676, -1952.19434, 8.82137,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1664, 2890.62915, -1957.30212, 8.96139,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1664, 2891.27563, -1956.95569, 8.96139,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1546, 2890.92090, -1959.89966, 8.87545,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1546, 2891.24243, -1960.29529, 8.87545,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1544, 2890.94702, -1961.37573, 8.80304,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19324, 2878.98438, -1953.85046, 8.93780,   0.00000, 0.00000, 89.64000);
	CreateDynamicObject(2010, 2878.93555, -1959.00793, 8.28365,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2010, 2878.93555, -1962.95190, 8.28370,   0.00000, 0.00000, -50.34000);
	CreateDynamicObject(2010, 2878.93555, -1966.87781, 8.28370,   0.00000, 0.00000, -106.08001);
	CreateDynamicObject(2773, 2879.75439, -1951.96631, 8.81532,   0.00000, 0.00000, 90.60012);
	CreateDynamicObject(955, 2879.06372, -1951.08362, 8.69520,   0.00000, 0.00000, 90.84000);
	CreateDynamicObject(1776, 2879.15942, -1948.67236, 9.38980,   0.00000, 0.00000, 90.84000);
	CreateDynamicObject(1302, 2879.15942, -1946.24915, 8.28570,   0.00000, 0.00000, 90.84000);
	CreateDynamicObject(2773, 2879.75439, -1945.33630, 8.81530,   0.00000, 0.00000, 90.60010);
	CreateDynamicObject(19373, 2880.26587, -1971.94080, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2883.75244, -1971.94080, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2887.23462, -1971.94080, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2890.70361, -1971.94080, 8.22750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2891.56909, -1971.94080, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2880.27197, -1975.12341, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2883.74243, -1975.12341, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2887.21509, -1975.12341, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2890.69702, -1975.12341, 8.22810,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2891.59985, -1975.12341, 8.22840,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2880.27197, -1978.25745, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2883.72876, -1978.25745, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2887.22510, -1978.23328, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2890.65796, -1978.25745, 8.22300,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2891.68384, -1978.25745, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2880.27197, -1981.37415, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2883.76929, -1981.37415, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2887.24023, -1981.37415, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2890.71826, -1981.37415, 8.22300,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2891.56885, -1981.37415, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2880.27197, -1984.54187, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2883.72876, -1984.54187, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2887.18896, -1984.54187, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2890.65723, -1984.54187, 8.22300,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19373, 2891.56152, -1984.54187, 8.22850,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(11496, 2910.57275, -1979.63989, 0.51370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11496, 2910.59277, -1963.74365, 0.51370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11496, 2910.57275, -1947.83826, 0.51170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 2847.73657, -2054.22681, 10.46056,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 2847.73657, -2044.45862, 10.46060,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 2847.73657, -1985.77698, 10.46060,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 2847.73657, -1976.00879, 10.46060,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 2847.73657, -1895.48206, 10.46060,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 2847.73657, -1885.83264, 10.46060,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18981, 2883.02344, -1974.61084, 15.03295,   0.00000, 89.96000, 90.00000);
	CreateDynamicObject(18981, 2883.02344, -1953.30505, 15.03290,   0.00000, 89.96000, 90.00000);
	CreateDynamicObject(18762, 2893.73486, -1964.23096, 12.17255,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2893.73486, -1964.23096, 11.24678,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2893.73486, -1964.23096, 13.16924,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2893.73486, -1964.23096, 14.12606,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2878.05713, -1959.72021, 11.24680,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2878.05713, -1964.65295, 11.24680,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2878.07715, -1968.57922, 11.24680,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(18762, 2878.05713, -1956.76367, 11.24680,   0.00000, 90.06000, -90.06000);
	CreateDynamicObject(1223, 2878.27637, -1966.90710, 9.12315,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1223, 2878.27637, -1962.86584, 9.12310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1223, 2878.27637, -1958.96240, 9.12310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1223, 2893.55273, -1962.33423, 9.12310,   0.00000, 0.00000, -183.29961);
	CreateDynamicObject(1223, 2893.55273, -1966.28760, 9.12310,   0.00000, 0.00000, -183.53960);
	CreateDynamicObject(1232, 2863.45166, -1892.93054, 12.67710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2863.45166, -1906.78870, 12.67710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2863.45166, -1920.61670, 12.67710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2863.45166, -1934.47131, 12.67710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2863.45166, -2047.62280, 12.67710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2863.45166, -2037.20374, 12.67710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2863.45166, -2021.91919, 12.67710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2863.45166, -2006.72302, 12.67710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3524, 2870.09277, -1955.21619, 12.85100,   0.00000, 0.00000, -86.70000);
	CreateDynamicObject(3524, 2870.09277, -1970.73877, 12.85100,   0.00000, 0.00000, -91.61999);
	CreateDynamicObject(1232, 2863.45166, -1991.40222, 12.67710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1461, 2914.91211, -1939.97852, 1.49320,   0.00000, 0.00000, -89.28000);
	CreateDynamicObject(1461, 2914.91211, -1946.72766, 1.49320,   0.00000, 0.00000, -89.28000);
	CreateDynamicObject(1461, 2914.91211, -1965.63013, 1.49320,   0.00000, 0.00000, -89.28000);
	CreateDynamicObject(1461, 2914.91211, -1961.68250, 1.49320,   0.00000, 0.00000, -89.28000);
	CreateDynamicObject(1461, 2914.91211, -1972.36401, 1.49320,   0.00000, 0.00000, -89.28000);
	CreateDynamicObject(1461, 2914.91211, -1980.78210, 1.49320,   0.00000, 0.00000, -89.28000);
	CreateDynamicObject(2690, 2878.68921, -1971.90906, 9.99240,   0.00000, 0.00000, 90.48000);
	CreateDynamicObject(19425, 2848.18701, -2045.60815, 9.93339,   0.00000, 0.00000, -90.18002);
	CreateDynamicObject(19425, 2848.18701, -2048.89746, 9.93340,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19425, 2848.18701, -2052.17944, 9.93340,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19425, 2848.18701, -2055.43408, 9.93340,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19425, 2848.18701, -1984.47986, 9.93340,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19425, 2848.18701, -1981.21741, 9.93340,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19425, 2848.18701, -1977.96130, 9.93340,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19425, 2848.18701, -1974.70093, 9.93340,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19425, 2848.18701, -1894.22095, 9.93340,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19425, 2848.18701, -1890.93896, 9.93340,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19425, 2848.18701, -1887.70947, 9.93340,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19425, 2848.18701, -1884.42554, 9.93340,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(3811, 2877.16089, -1972.77588, 8.72796,   0.00000, 0.00000, -179.57994);
	CreateDynamicObject(3811, 2877.16089, -1979.32861, 8.72800,   0.00000, 0.00000, -179.57990);
	CreateDynamicObject(3811, 2877.16089, -1985.89661, 8.72800,   0.00000, 0.00000, -179.57990);
	CreateDynamicObject(3811, 2877.16089, -1942.00391, 8.72800,   0.00000, 0.00000, -179.57990);
	CreateDynamicObject(3811, 2877.16089, -1947.64294, 8.72800,   0.00000, 0.00000, -179.57990);
	CreateDynamicObject(3811, 2877.16089, -1953.25391, 8.72800,   0.00000, 0.00000, -179.57990);
	CreateDynamicObject(1232, 2863.45166, -1949.87659, 12.67710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2863.45166, -1976.24292, 12.67710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2908.28418, -1924.13342, 3.29848,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2908.29370, -1943.99377, 3.29850,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2908.75317, -1962.15491, 3.29850,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2908.77417, -1966.26355, 3.29850,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2909.11157, -1982.72705, 3.29850,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2909.58228, -2003.30408, 3.29850,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19872, 2883.51465, -1978.50806, 7.76833,   0.00000, 25.14000, -0.30000);
	CreateDynamicObject(19872, 2888.05371, -1978.60291, 7.76830,   0.00000, -25.14000, -0.30000);
	CreateDynamicObject(19121, 2888.96680, -1975.73267, 8.81039,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 2882.60327, -1975.73267, 8.81040,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 2871.87598, -1962.88196, 17.56076,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1608, 2874.57959, -1962.88940, 20.61165,   -15.36000, -0.54000, 88.98000);
	CreateDynamicObject(11496, 2923.07422, -1998.87854, 0.51370,   0.00000, 0.00000, -89.88000);
	CreateDynamicObject(11496, 2923.07422, -1928.43286, 0.51370,   0.00000, 0.00000, 89.88000);
	CreateDynamicObject(11496, -1961.71350, 0.51370, 0.51370,   0.00000, 0.00000, 89.88000);
	CreateDynamicObject(1461, 2914.91211, -1987.43762, 1.49320,   0.00000, 0.00000, -89.28000);
	CreateDynamicObject(1461, 2914.91211, -1954.99829, 1.49320,   0.00000, 0.00000, -89.28000);
	CreateDynamicObject(1243, 2962.44580, -2058.40356, -3.14850,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1243, 2962.44580, -2044.26392, -3.14850,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 2872.44336, -1960.43628, 16.05920,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 2872.44336, -1965.16492, 16.05920,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2871.06030, -1941.30847, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18762, 2871.06030, -1986.60693, 12.44990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16151, 2886.21069, -1943.09839, 8.64510,   0.00000, 0.00000, 91.14000);
	CreateDynamicObject(19366, 2884.00317, -1941.95007, 9.06200,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19366, 2886.91431, -1941.93005, 9.06210,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19366, 2888.60498, -1941.91016, 9.06100,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1545, 2887.45483, -1942.08716, 9.99040,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1541, 2888.65112, -1942.06055, 9.92650,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2453, 2882.78125, -1942.22339, 9.63726,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2429, 2889.62915, -1941.97607, 9.46800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3440, 2871.95435, -1962.88196, 17.46590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19980, 2914.93311, -1963.50330, 0.66649,   0.00000, 0.00000, -89.22002);
	CreateDynamicObject(11496, 2910.57275, -1995.62036, 0.51370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11496, 2910.57275, -1931.85962, 0.51170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11496, 2923.07422, -1949.09534, 0.51370,   0.00000, 0.00000, 89.88000);
	CreateDynamicObject(11496, 2923.07422, -1978.18726, 0.51370,   0.00000, 0.00000, -89.88000);
	CreateDynamicObject(19121, 2882.60327, -1981.33289, 8.81040,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 2888.96680, -1981.33289, 8.81040,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11496, 2939.07349, -1998.87854, 0.51370,   0.00000, 0.00000, -89.88000);
	CreateDynamicObject(11496, 2939.07349, -1978.18726, 0.51370,   0.00000, 0.00000, -89.88000);
	CreateDynamicObject(11496, 2939.07349, -1949.09534, 0.51370,   0.00000, 0.00000, 89.88000);
	CreateDynamicObject(11496, 2939.07349, -1928.43286, 0.51370,   0.00000, 0.00000, 89.88000);


	//-> PC Interior | By. NúO
	new hqpolice_int [2];
	// Interior Principal
	hqpolice_int [0] = CreateObject(14847, 246.23441, 117.80470, 1005.60938,   0.00000, 0.00000, 180.00000, 500000.0);
	SetObjectMaterial(hqpolice_int [0], 5, 14593, "papaerchaseoffice", "cop_ceiling1", 0 ); // Muro 1 (Abajo)
	SetObjectMaterial(hqpolice_int [0], 6, 14593, "papaerchaseoffice", "cop_ceiling1", 0 ); // Muro 2 (Arriba)
	SetObjectMaterial(hqpolice_int [0], 1, 14632, "paperchase_bits2", "cof_wood2", 0 ); // Madera
	SetObjectMaterial(hqpolice_int [0], 4, 14703, "vghsb3int2", "DinerFloor", 0 ); // Suelo 1
	SetObjectMaterial(hqpolice_int [0], 12, 14593, "papaerchaseoffice", "cop_ceiling1", 0 ); // Muro 3 (Parte 2)
	SetObjectMaterial(hqpolice_int [0], 3, 14597, "papaerchaseoffice", "ab_hosWallUpr", 0 ); // Suelo 2
	SetObjectMaterial(hqpolice_int [0], 13, 14597, "papaerchaseoffice", "ab_hosWallUpr", 0 ); // Suelo 3

	// Texto
	hqpolice_int [1] = CreateObject(19360, 263.65271, 118.34390, 1005.36377,   0.00000, 0.00000, 0.00000, 500000.0);
	SetObjectMaterialText(hqpolice_int [1], "CÁMARAS DE SEGURIDAD\nDE\nBUENOS AIRES", 0, 90, "Arial", 20, 1, 0xFF840410, 0x0, 1);

	CreateDynamicObject(19275, 252.97656, 112.52789, 1005.68018,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1616, 240.28380, 107.48500, 1010.29999,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(971, 264.83127, 106.72861, 1004.59998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1491, 222.17500, 119.46000, 1009.21503,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1491, 258.54999, 117.67969, 1007.82001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1491, 260.73926, 117.67969, 1007.82001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3857, 233.04500, 124.00000, 1013.00000,   0.00000, 0.00000, 315.00000);
	CreateDynamicObject(3857, 232.73730, 124.00000, 1013.00000,   0.00000, 0.00000, 135.00000);
	CreateDynamicObject(1491, 225.06000, 115.95000, 1002.22998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1491, 233.11000, 119.25000, 1002.22998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1491, 236.81000, 119.25000, 1002.22998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3051, 275.77499, 122.65600, 1004.97937,   0.00000, 0.00000, 46.00000);
	CreateDynamicObject(3051, 275.75000, 121.50000, 1004.97937,   0.00000, 0.00000, 45.00000);
	CreateDynamicObject(1485, 227.89999, 125.30000, 1010.21002,   50.00000, 10.00000, 2.00000);
	CreateDynamicObject(1510, 228.07321, 125.27845, 1010.15997,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2196, 228.40015, 125.53178, 1010.13959,   0.00000, 0.00000, 29.77478);
	CreateDynamicObject(14782, 267.76999, 109.30000, 1004.63324,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2933, 253.19922, 118.19922, 1005.79999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2933, 239.60001, 110.48000, 1005.79999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1886, 264.25000, 116.55000, 1007.29999,   30.00000, 0.00000, 140.00000);
	CreateDynamicObject(2611, 268.47473, 116.05200, 1005.25000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1703, 243.56653, 107.67214, 1002.21875,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(4100, 232.84961, 128.50000, 1011.91998,   0.00000, 0.00000, 49.99878);
	CreateDynamicObject(2595, 226.24515, 120.27544, 1011.28754,   0.00000, 0.00000, 77.72995);
	CreateDynamicObject(3934, 1565.94946, -1701.00000, 27.40000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3934, 1565.94922, -1646.02930, 27.40000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2953, 228.27797, 125.20470, 1010.14331,   0.00000, 0.00000, 143.45984);
	CreateDynamicObject(2927, 217.80000, 116.40000, 999.79999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2165, 214.30000, 118.90000, 998.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2724, 214.89999, 117.50000, 998.59998,   0.00000, 0.00000, 179.75000);
	CreateDynamicObject(1721, 213.80000, 121.30000, 998.00000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1721, 213.80000, 122.00000, 998.00000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1721, 213.80000, 122.70000, 998.00000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1721, 213.80000, 123.50000, 998.00000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(15038, 219.00000, 124.10000, 998.59998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(15038, 214.20000, 126.50000, 998.59998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3089, 1564.09998, -1667.30005, 28.70000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1703, 240.44763, 109.34408, 1002.19641,   0.00000, 0.00000, 90.00002);
	CreateDynamicObject(1703, 252.41650, 114.11930, 1002.19641,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2247, 252.77110, 111.81270, 1002.66602,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2247, 252.77110, 114.59370, 1002.66602,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3859, 253.09900, 117.56300, 1006.99969,   0.00000, 0.00000, 16.80000);
	CreateDynamicObject(3859, 239.72990, 112.92660, 1006.99969,   0.00000, 0.00000, 16.80000);
	CreateDynamicObject(2247, 240.10551, 107.60654, 1002.66602,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2927, 222.31073, 116.31609, 999.79633,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2927, 226.91000, 116.31610, 999.79633,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1616, 227.19380, 116.74752, 1001.10565,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19172, 265.07581, 108.80260, 1009.43127,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19172, 252.98300, 113.09960, 1004.28778,   0.00000, 0.00000, -89.82800);
	CreateDynamicObject(19325, 249.74100, 119.26600, 1006.31787,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19325, 243.09770, 119.26600, 1006.31787,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1663, 243.72771, 124.19800, 1002.65271,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1663, 249.48540, 124.19800, 1002.65271,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19786, 246.47031, 118.34740, 1007.26910,   30.00000, 0.00000, 0.00000);
	CreateDynamicObject(2509, 260.50601, 107.75460, 1005.08862,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2509, 260.50601, 111.74140, 1005.08862,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2509, 260.50601, 109.76080, 1005.08862,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(356, 260.56790, 107.54050, 1004.27600,   0.00000, 0.00000, 95.00000);
	CreateDynamicObject(356, 260.56790, 107.54050, 1004.76917,   0.00000, 0.00000, 95.00000);
	CreateDynamicObject(356, 260.56790, 107.54050, 1005.30164,   0.00000, 0.00000, 95.00000);
	CreateDynamicObject(356, 260.56790, 107.54050, 1005.83459,   0.00000, 0.00000, 95.00000);
	CreateDynamicObject(353, 260.57111, 109.57390, 1005.81482,   0.00000, 6.00000, 95.00000);
	CreateDynamicObject(353, 260.57111, 109.57390, 1005.27490,   0.00000, 6.00000, 95.00000);
	CreateDynamicObject(353, 260.57111, 109.57390, 1004.73523,   0.00000, 6.00000, 95.00000);
	CreateDynamicObject(353, 260.57111, 109.57390, 1004.27515,   0.00000, 6.00000, 95.00000);
	CreateDynamicObject(349, 260.55832, 111.42824, 1004.39917,   0.00000, 7.00000, 95.00000);
	CreateDynamicObject(349, 260.57831, 111.42890, 1005.86011,   0.00000, 7.00000, 95.00000);
	CreateDynamicObject(349, 260.57831, 111.42890, 1005.35999,   0.00000, 7.00000, 95.00000);
	CreateDynamicObject(349, 260.57831, 111.42890, 1004.87958,   0.00000, 7.00000, 95.00000);
	CreateDynamicObject(2372, 263.28580, 112.37430, 1003.60760,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2373, 263.10489, 106.74300, 1003.57788,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(18637, 263.30121, 107.20960, 1005.37653,   90.00000, 0.00000, 180.00000);
	CreateDynamicObject(18637, 262.67361, 107.20960, 1005.37653,   90.00000, 0.00000, 180.00000);
	CreateDynamicObject(18637, 261.95181, 107.20960, 1004.52179,   90.00000, 0.00000, 180.00000);
	CreateDynamicObject(18637, 261.40491, 107.20960, 1004.52179,   90.00000, 0.00000, 180.00000);
	CreateDynamicObject(2358, 262.21249, 112.15860, 1003.71002,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2358, 263.17090, 112.15860, 1003.71002,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19142, 263.46829, 112.10940, 1004.44879,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(19142, 262.93890, 112.10940, 1004.44879,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(19142, 262.40329, 112.10940, 1004.44879,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(19142, 261.90320, 112.10940, 1004.44879,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(19141, 261.85559, 112.18460, 1004.74408,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(19141, 262.38379, 112.18460, 1004.74408,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(19141, 262.92020, 112.18460, 1004.74408,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(19141, 263.45261, 112.18460, 1004.74408,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(19787, 264.77621, 120.81550, 1005.27197,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19787, 267.06131, 120.81550, 1005.27203,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19787, 269.52261, 120.81550, 1005.27197,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19787, 269.52261, 120.81550, 1006.24902,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19787, 267.06131, 120.81550, 1006.24896,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19787, 264.77621, 120.81550, 1006.24902,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19171, 270.46280, 117.73760, 1005.55579,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(2008, 264.22220, 120.28620, 1003.61469,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2008, 268.97629, 120.28620, 1003.61469,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2356, 269.87561, 119.11900, 1003.58337,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2356, 265.12451, 119.11900, 1003.58337,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1566, 264.27075, 112.48923, 1005.06219,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1566, 267.39969, 112.48920, 1005.06219,   0.00000, 0.00000, 180.00000);


	//-> PC Exterior | By. NúO
	new hqpolice [15];
	// Piso
	CreateDynamicObject(1966, 1584.92944, -1638.12866, 1654.12305,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1966, 1591.81372, -1638.12866, 1654.12305,   0.00000, 0.00000, 0.0000);
	CreateDynamicObject(1536, 1584.12146, -1638.27332, 1651.38000,   0.00000, 0.00000, 180.00000);

	// Cierre de Garaje
	CreateObject(1966, 1584.92944, -1638.28015, 13.89230,   0.00000, 0.00000, 0.00000+0.0,500000.0);
	CreateObject(1966, 1591.81372, -1638.28015, 13.89230,   0.00000, 0.00000, 0.00000+0.0,500000.0);
	CreateObject(1536, 1584.12146, -1637.88269, 12.34840,   0.00000, 0.00000, 180.00000+0.0,500000.0);
	//
	CreateDynamicObject(620, 1541.95300, -1701.68896, 13.04690,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1541.95300, -1713.23962, 13.04690,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1541.95300, -1707.50940, 13.04690,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1541.95300, -1649.58313, 13.04690,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1541.95300, -1638.42590, 13.04690,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1541.95300, -1643.96399, 13.04690,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(777, 1546.85474, -1689.94360, 12.67790,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(777, 1546.72437, -1661.34460, 12.67790,   0.00000, 0.00000, -44.16000);
	CreateDynamicObject(19467, 1547.33997, -1630.72961, 12.37190,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19467, 1547.33997, -1626.25708, 12.37190,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19467, 1547.33997, -1621.77600, 12.37190,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1546.93201, -1617.48950, 16.02159,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1411, 1542.29565, -1617.49756, 16.02160,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1411, 1539.92993, -1615.10901, 16.02160,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1411, 1539.92993, -1609.91980, 16.02160,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1411, 1539.91785, -1605.05566, 16.02160,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1411, 1542.29395, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1547.46594, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1552.64856, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1557.81445, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1562.99695, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1568.18225, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1573.36597, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1578.54187, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1583.69885, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1588.88013, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1594.07227, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1599.26123, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1604.44946, -1602.67944, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1605.35046, -1602.69141, 16.02160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1411, 1607.72546, -1605.06775, 16.02160,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1607.72546, -1610.26672, 16.02160,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1607.72546, -1615.43311, 16.02160,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1607.72546, -1620.65747, 16.02160,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1607.72546, -1625.86243, 16.02160,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1607.72546, -1631.02759, 16.02160,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1607.73755, -1635.33508, 16.02160,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1411, 1605.37964, -1637.71106, 16.02160,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1536.42798, -1682.24878, 13.07030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1538.15015, -1680.52063, 13.07030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1538.15015, -1677.06763, 13.07030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1538.15015, -1664.78345, 13.07030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1536.42798, -1663.04565, 13.07030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1538.15015, -1668.22437, 13.07030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1534.69604, -1683.97742, 13.07030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1534.69604, -1687.43384, 13.07030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1534.69604, -1690.88965, 13.07030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1534.69604, -1694.34961, 13.07030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1534.69604, -1661.31909, 13.07030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1534.69604, -1657.86487, 13.07030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1534.69604, -1654.40820, 13.07030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1534.69604, -1650.96375, 13.07030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19122, 1539.40100, -1622.98499, 12.85470,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19122, 1539.40100, -1632.76611, 12.85470,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 1539.81091, -1624.44299, 12.37310,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19425, 1539.81091, -1627.73083, 12.37310,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19425, 1539.81091, -1631.01550, 12.37310,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19425, 1539.81091, -1634.30933, 12.37310,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(984, 1570.58850, -1620.29871, 13.10260,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(4639, 1577.54578, -1620.25708, 14.21670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19425, 1581.25525, -1620.27808, 12.37310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 1584.53088, -1620.27808, 12.37310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 1587.82605, -1620.27808, 12.37310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 1591.12476, -1620.27808, 12.37310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(984, 1601.51648, -1620.29871, 12.98260,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19425, 1593.43555, -1620.27808, 12.38510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1566, 1581.06836, -1687.58289, 6.61391,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1566, 1581.06055, -1684.41150, 6.61390,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(984, 1564.17944, -1620.30273, 13.10260,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19526, 1544.16296, -1617.04529, 12.37610,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1499, 1604.07996, -1710.91235, 12.51090,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1499, 1604.05603, -1707.93457, 12.51090,   0.00000, 0.00000, -90.00000);

	// Lineas de Estacionamiento
	CreateDynamicObject(19526, 1544.22241, -1617.04651, 12.33821,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3578, 1561.36072, -1607.65405, 11.60030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3578, 1566.38062, -1607.65405, 11.60030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3578, 1571.41333, -1607.65405, 11.60030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3578, 1576.45850, -1607.65405, 11.60030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3578, 1581.46887, -1607.65405, 11.60030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3578, 1586.50317, -1607.65405, 11.60030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3578, 1591.53650, -1607.65405, 11.60030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3578, 1596.56445, -1607.65405, 11.64030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3578, 1601.56360, -1607.65405, 11.70030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3578, 1606.40088, -1607.65405, 11.75630,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(7090, 1558.42480, -1670.01465, 40.20850,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(7090, 1558.42480, -1681.18347, 40.20850,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(7090, 1558.94031, -1675.61536, 40.20850,   0.00000, 0.00000, 180.00000);

	// Edificio Parte 1
	hqpolice [1] = CreateObject(3976, 1571.60156, -1675.75000, 35.67970,   0.00000, 0.00000, 0.00000+0.0,500000.0);
	SetObjectMaterial(hqpolice [1], 7, 10994, "scum_sfse", "ws_apartmentpink2", 0 ); // Estructura 1
	SetObjectMaterial(hqpolice [1], 5, 10994, "scum_sfse", "ws_apartmentpink2", 0 ); // Estructura 2
	SetObjectMaterial(hqpolice [1], 6, 10994, "scum_sfse", "ws_apartmentpink2", 0 ); // Pilares
	SetObjectMaterial(hqpolice [1], 4, 10994, "scum_sfse", "ws_apartmentpink2", 0 ); // Estructura 3
	SetObjectMaterial(hqpolice [1], 13, 10994, "scum_sfse", "ws_apartmentpink2", 0 ); // Muro
	SetObjectMaterial(hqpolice [1], 12, 10044, "sfe_swank1", "sfe_nicearch4", 0 ); // Ventanas
	SetObjectMaterial(hqpolice [1], 2, 10044, "sfe_swank1", "sfe_nicearch4", 0 ); // Ventana Puerta
	SetObjectMaterial(hqpolice [1], 10, 10994, "scum_sfse", "ws_apartmentpink2", 0 );
	SetObjectMaterial(hqpolice [1], 3, 10994, "scum_sfse", "ws_apartmentpink2", 0 );
	SetObjectMaterial(hqpolice [1], 4, 10994, "scum_sfse", "ws_apartmentpink2", 0 );
	SetObjectMaterial(hqpolice [1], 8, 10994, "scum_sfse", "ws_apartmentpink2", 0 );
	SetObjectMaterial(hqpolice [1], 11, 4029, "lanriver", "sl_LAbedingsoil", 0 ); // Tierra Arbol

	// Edificio Parte 2
	hqpolice [2] = CreateObject(3975, 1578.46875, -1676.42188, 13.07030,   0.00000, 0.00000, 0.00000+0.0,500000.0);
	SetObjectMaterial(hqpolice [2], 8, 10994, "scum_sfse", "ws_apartmentpink2", 0 );
	SetObjectMaterial(hqpolice [2], 4, 10994, "scum_sfse", "ws_apartmentpink2", 0 );
	SetObjectMaterial(hqpolice [2], 11, 10994, "scum_sfse", "ws_apartmentpink2", 0 );

	// Entrada al Garaje
	hqpolice [3] = CreateObject(3749, 1549.44287, -1627.64612, 18.07630,   0.00000, 0.00000, 90.00000+0.0,500000.0);
	SetObjectMaterial(hqpolice [3], 3, 10994, "scum_sfse", "ws_apartmentpink2", 0 );
	SetObjectMaterial(hqpolice [3], 0, 10994, "scum_sfse", "ws_apartmentpink2", 0 );
	SetObjectMaterial(hqpolice [3], 1, 3975, "lanbloke", "plaintarmac1", 0 );
	SetObjectMaterial(hqpolice [3], 2, 10994, "scum_sfse", "ws_apartmentpink2", 0 );

	// Interior del Garaje
	hqpolice [4] = CreateObject(4232, 1568.28906, -1677.78125, 1650.00000,   0.00000, 0.00000, 0.00000, 500000); // Part. 1
	SetObjectMaterial(hqpolice [4], 9, 4002, "cityhall_lan", "LAcityhwal1", 0 );
	hqpolice [5] = CreateObject(4032, 1568.28906, -1677.78125, 1650.00000,   0.00000, 0.00000, 0.00000, 500000); // Part. 2
	SetObjectMaterial(hqpolice [5], 10, 4002, "cityhall_lan", "LAcityhwal1", 0 );
	hqpolice [6] = CreateObject(3976, 1571.60156, -1675.75000, 1674.75488,   0.00000, 0.00000, 0.00000, 500000); // Part. 3
	SetObjectMaterial(hqpolice [6], 10, 4002, "cityhall_lan", "LAcityhwal1", 0 );


	//-> Penal Interior | By. NúO
	CreateDynamicObject(14412, 1424.11182, -1560.43750, 4348.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2928, 1441.69922, -1567.09961, 4340.39990,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2928, 1441.69995, -1569.69995, 4340.39990,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(7191, 1413.30847, -1532.09961, 4341.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(7191, 1419.38464, -1532.09961, 4341.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(7191, 1427.34167, -1532.09961, 4341.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(7191, 1434.09961, -1532.09961, 4341.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(7191, 1427.79980, -1552.29980, 4343.13184,   0.00000, 270.00000, 90.24720);
	CreateDynamicObject(14407, 1403.38916, -1553.48181, 4340.12402,   0.00000, 0.00000, 179.49460);
	CreateDynamicObject(7191, 1419.38464, -1589.29980, 4341.10010,   0.00000, 0.00000, 179.99451);
	CreateDynamicObject(7191, 1427.34167, -1589.40002, 4341.20020,   0.00000, 0.00000, 179.99451);
	CreateDynamicObject(7191, 1434.09961, -1589.30005, 4341.10010,   0.00000, 0.00000, 180.24451);
	CreateDynamicObject(7191, 1423.23389, -1568.56616, 4343.13184,   0.00000, 270.00000, 90.00000);
	CreateDynamicObject(2605, 1399.00000, -1551.80005, 4343.70020,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2612, 1400.69995, -1551.50000, 4345.39990,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2356, 1400.39734, -1551.79614, 4343.29980,   0.00000, 0.00000, 82.75000);
	CreateDynamicObject(2604, 1394.80005, -1546.90002, 4344.10010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2608, 1393.00000, -1550.19995, 4345.89990,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(2610, 1393.00000, -1550.80005, 4344.10010,   0.00000, 0.00000, 89.25000);
	CreateDynamicObject(2610, 1393.00000, -1550.30005, 4344.10010,   0.00000, 0.00000, 89.24744);
	CreateDynamicObject(2610, 1393.00000, -1549.80005, 4344.10010,   0.00000, 0.00000, 89.24744);
	CreateDynamicObject(1723, 1393.40002, -1566.46167, 4343.29980,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2762, 1408.07324, -1571.70801, 4339.60010,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2762, 1408.07324, -1569.75195, 4339.60400,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2762, 1408.07324, -1567.75598, 4339.60010,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2342, 1408.07324, -1567.19995, 4340.12988,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1426.63354, -1568.92566, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1433.26953, -1572.51538, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1433.26953, -1568.92566, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1433.35498, -1548.09998, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1433.35498, -1552.30005, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1412.46130, -1548.09998, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1418.61450, -1552.30005, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2738, 1406.21948, -1548.09998, 4339.79980,   0.00000, 0.00000, 92.00000);
	CreateDynamicObject(2738, 1427.90332, -1568.92566, 4339.79980,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2684, 1400.19995, -1546.50000, 4345.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2588, 1416.40002, -1546.40002, 4341.89990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2587, 1420.40002, -1546.40002, 4341.70020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2928, 1392.80005, -1569.69995, 4344.60010,   0.00000, 0.00000, 270.25000);
	CreateDynamicObject(2928, 1392.80005, -1567.19995, 4344.60010,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2181, 1397.09998, -1546.90002, 4343.29980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2762, 1404.08105, -1567.75598, 4339.60010,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2762, 1404.08105, -1569.75195, 4339.60400,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2762, 1404.08105, -1571.70801, 4339.60010,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2762, 1412.09729, -1567.75598, 4339.60010,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2762, 1412.09729, -1569.75195, 4339.60400,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2762, 1412.09729, -1571.70801, 4339.60010,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2762, 1416.04199, -1567.75598, 4339.60010,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2762, 1416.04199, -1569.75195, 4339.60400,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2762, 1416.04199, -1571.70801, 4339.60010,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2603, 1426.45544, -1552.30005, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1426.45544, -1548.09998, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1420.03992, -1552.30005, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1418.61450, -1548.09998, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1414.01343, -1552.30005, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2738, 1419.92944, -1548.28809, 4339.79980,   0.00000, 0.00000, 92.00000);
	CreateDynamicObject(2738, 1427.90234, -1548.09998, 4339.79980,   0.00000, 0.00000, 92.00000);
	CreateDynamicObject(2603, 1428.02039, -1552.30005, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1412.46130, -1552.30005, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1428.11646, -1572.51538, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2738, 1419.92297, -1568.92566, 4339.79980,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2603, 1426.63354, -1572.51538, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1420.08423, -1572.51538, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 1413.02588, -1569.68774, 4343.26123,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 1424.98633, -1569.68774, 4343.26123,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 1436.73669, -1569.68774, 4343.26123,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(7191, 1435.95874, -1568.56616, 4343.13574,   0.00000, 270.00000, 0.00000);
	CreateDynamicObject(987, 1436.75562, -1557.65051, 4343.26123,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 1436.75159, -1551.63306, 4343.26514,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 1424.82068, -1551.59619, 4343.26123,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 1413.20300, -1551.59619, 4343.26123,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 1406.07263, -1551.60425, 4343.26123,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14407, 1399.46497, -1553.44580, 4340.12793,   0.00000, 0.00000, 179.49460);
	CreateDynamicObject(19467, 1405.77576, -1550.52563, 4345.37061,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19467, 1405.77185, -1550.52563, 4349.58984,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(16644, 1411.28271, -1554.24683, 4335.55908,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(16644, 1406.69751, -1554.24683, 4335.55908,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(16644, 1413.93311, -1554.24683, 4335.55908,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(16644, 1417.87292, -1554.24683, 4335.55908,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(16644, 1420.66052, -1554.24683, 4335.55908,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(16644, 1425.25208, -1554.24683, 4335.55908,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(16644, 1428.04651, -1554.24683, 4335.55908,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(16644, 1432.54150, -1554.24683, 4335.55908,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(16644, 1428.37366, -1566.84717, 4335.63818,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(16644, 1432.47668, -1566.84717, 4335.63818,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(16644, 1425.36792, -1566.84717, 4335.63818,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(16644, 1420.70044, -1566.84717, 4335.63818,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(2738, 1413.88208, -1548.28809, 4339.79980,   0.00000, 0.00000, 92.00000);
	CreateDynamicObject(1723, 1393.40002, -1563.43066, 4343.29980,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1723, 1393.40002, -1560.44019, 4343.29980,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1723, 1393.40002, -1557.45483, 4343.29980,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1723, 1393.40002, -1554.47156, 4343.29980,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2342, 1416.06946, -1571.74084, 4340.12988,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3857, 1401.06152, -1564.77991, 4345.53076,   0.00000, 0.00000, -45.00000);
	CreateDynamicObject(3857, 1401.06152, -1556.77710, 4345.53076,   0.00000, 0.00000, -45.00000);
	CreateDynamicObject(2074, 1433.35498, -1548.09998, 4342.71240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1433.35498, -1552.30005, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1428.02039, -1552.30005, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1426.45544, -1552.30005, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1420.03992, -1552.30005, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1418.61450, -1552.30005, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1414.01343, -1552.30005, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1412.46130, -1552.30005, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2603, 1406.34717, -1552.30005, 4339.60010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1406.34717, -1552.30005, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1426.45544, -1548.09998, 4342.71240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1418.61450, -1548.09998, 4342.71240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1412.46130, -1548.09998, 4342.71240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1433.35498, -1572.51538, 4342.71240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1428.11646, -1572.51538, 4342.71240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1420.08423, -1572.51538, 4342.71240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1426.63354, -1572.51538, 4342.71240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1433.35498, -1568.92566, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1426.63354, -1568.92566, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1416.04199, -1569.75195, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1412.09729, -1569.75195, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1408.07324, -1569.75195, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1404.08105, -1569.75195, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1404.08105, -1567.75598, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1408.07324, -1567.75598, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1412.09729, -1567.75598, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1416.04199, -1567.75598, 4342.80029,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1416.04199, -1571.70801, 4342.71240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1412.09729, -1571.70801, 4342.71240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1408.07324, -1571.70801, 4342.71240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 1404.08105, -1571.70801, 4342.71240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1368, 1414.61169, -1571.43518, 4339.69971,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 1414.61169, -1568.41821, 4339.69971,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 1406.64331, -1568.41821, 4339.69971,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 1410.63464, -1568.41821, 4339.69971,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 1402.59448, -1568.41821, 4339.69971,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 1410.63464, -1571.41516, 4339.69971,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 1406.64331, -1571.41516, 4339.69971,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 1402.59448, -1571.41516, 4339.69971,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 1417.53186, -1571.43518, 4339.69971,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1368, 1417.53186, -1568.41821, 4339.69971,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1368, 1413.53125, -1568.41821, 4339.69971,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1368, 1409.57556, -1568.41821, 4339.69971,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1368, 1405.55957, -1568.41821, 4339.69971,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1368, 1405.55957, -1571.41516, 4339.69971,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1368, 1409.57556, -1571.41516, 4339.69971,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1368, 1413.53125, -1571.41516, 4339.69971,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1533, 1397.45825, -1573.93225, 4343.27783,   0.00000, 0.00000, 180.00000);
	// Equipamiento SPF | By. NúO
	CreateDynamicObject(3268, -74.77347, 2794.13062, -50.49717,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3268, -74.77350, 2843.59570, -50.49720,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3268, -50.10243, 2818.79028, -50.49720,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3268, -95.82030, 2818.79028, -50.49720,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(5711, -78.86460, 2818.79028, -40.84540,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(5711, -66.11490, 2818.79028, -40.84540,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(10615, -100.39702, 2870.83569, -60.66967,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11729, -65.43123, 2828.19531, -50.43884,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, -65.43120, 2827.54736, -50.43880,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, -65.43120, 2826.88892, -50.43880,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, -65.43120, 2826.22485, -50.43880,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11730, -65.43120, 2825.57251, -50.43880,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, -65.43120, 2824.92114, -50.43880,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, -65.43120, 2824.25293, -50.43880,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, -65.43120, 2822.89941, -50.43880,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, -65.43120, 2823.58813, -50.43880,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(14792, -70.80253, 2819.88013, -48.95293,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14793, -66.19980, 2818.79028, -44.38360,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1533, -80.78451, 2825.34058, -50.48528,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11711, -80.84780, 2826.08594, -47.57130,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2373, -64.93035, 2821.78101, -50.54175,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2372, -65.17686, 2817.64282, -50.46593,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2509, -65.15420, 2814.86157, -48.43820,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2509, -65.15420, 2812.27344, -48.43820,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(356, -65.22270, 2815.02588, -47.69023,   0.00000, 5.00000, -85.00000);
	CreateDynamicObject(356, -65.22270, 2815.02588, -48.16876,   0.00000, 5.00000, -85.00000);
	CreateDynamicObject(356, -65.22270, 2815.02588, -49.18630,   0.00000, 5.00000, -85.00000);
	CreateDynamicObject(356, -65.22270, 2815.02588, -48.67450,   0.00000, 5.00000, -85.00000);
	CreateDynamicObject(353, -65.27650, 2812.41309, -47.69220,   0.00000, 8.00000, -85.00000);
	CreateDynamicObject(353, -65.27650, 2812.41309, -49.15038,   0.00000, 8.00000, -85.00000);
	CreateDynamicObject(353, -65.27650, 2812.41309, -48.15659,   0.00000, 8.00000, -85.00000);
	CreateDynamicObject(353, -65.27650, 2812.41309, -48.67336,   0.00000, 8.00000, -85.00000);
	CreateDynamicObject(18637, -65.35160, 2821.99072, -48.73330,   90.00000, 0.00000, -90.00000);
	CreateDynamicObject(18637, -65.35160, 2821.35742, -48.73330,   90.00000, 0.00000, -90.00000);
	CreateDynamicObject(18637, -65.35160, 2820.61548, -49.60560,   90.00000, 0.00000, -90.00000);
	CreateDynamicObject(18637, -65.35160, 2820.03223, -49.60560,   90.00000, 0.00000, -90.00000);


	//-> Penal Exterior | By. NúO
	new MuroP [4];

	MuroP [0] = CreateObject(18981, 320.85751, 1770.38220, 45.21068,   0.00000, 0.00000, 0.00000, 500000.0); SetObjectMaterial(MuroP [0], 0, 9922, "smallertxd", "wallwashv128", 0 );
	MuroP [1] = CreateObject(18981, 320.84949, 1787.43884, 45.21070,   0.00000, 0.00000, 0.00000, 500000.0); SetObjectMaterial(MuroP [1], 0, 9922, "smallertxd", "wallwashv128", 0 );
	MuroP [2] = CreateObject(18981, 320.84949, 1787.43884, 20.27060,   0.00000, 0.00000, 0.00000, 500000.0); SetObjectMaterial(MuroP [2], 0, 9922, "smallertxd", "wallwashv128", 0 );
	MuroP [3] = CreateObject(18981, 320.85751, 1770.38220, 20.27063,   0.00000, 0.00000, 0.00000, 500000.0); SetObjectMaterial(MuroP [3], 0, 9922, "smallertxd", "wallwashv128", 0 );


	CreateObject(9922, 118.08720, 1774.80701, 46.79030,   0.00000, 0.00000, 90.00000, 500000.0);
	CreateObject(9922, 197.96510, 1774.80701, 46.79030,   0.00000, 0.00000, 90.00000, 500000.0);
	CreateObject(9922, 277.77701, 1774.80701, 46.79030,   0.00000, 0.00000, 90.00000, 500000.0);
	CreateDynamicObject(980, 82.06760, 1921.20789, 19.88550,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8038, 274.99512, 2078.70020, 26.14541,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3095, 276.30273, 2047.54297, 49.78402,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1649, 280.67871, 2047.55664, 47.93206,   0.00000, 90.00000, 269.99451);
	CreateDynamicObject(1649, 280.70410, 2044.77344, 47.93206,   0.00000, 90.00000, 269.99451);
	CreateDynamicObject(1649, 280.70410, 2050.25488, 47.93206,   0.00000, 90.00000, 269.99451);
	CreateDynamicObject(1649, 279.03711, 2051.91504, 47.93206,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1649, 273.58691, 2051.91504, 47.93206,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1649, 276.27832, 2051.89844, 47.93206,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1649, 271.92676, 2044.78418, 47.93206,   0.00000, 90.00000, 89.99451);
	CreateDynamicObject(1649, 271.93555, 2050.25488, 47.93206,   0.00000, 90.00000, 89.99451);
	CreateDynamicObject(1649, 273.58691, 2043.11816, 47.93206,   0.00000, 90.00000, 179.99451);
	CreateDynamicObject(1649, 279.03711, 2043.12793, 47.93206,   0.00000, 90.00000, 179.99451);
	CreateDynamicObject(1649, 276.27832, 2043.13477, 47.93206,   0.00000, 90.00000, 179.99451);
	CreateDynamicObject(1649, 280.72070, 2050.25488, 47.93206,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(1649, 280.72070, 2044.79004, 47.93206,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(1649, 279.05371, 2043.11914, 47.93206,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1649, 276.27832, 2043.12598, 47.93206,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1649, 273.58691, 2043.10938, 47.93206,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1649, 271.91797, 2044.77539, 47.93206,   0.00000, 90.00000, 270.00000);
	CreateDynamicObject(1649, 271.92676, 2050.25488, 47.93206,   0.00000, 90.00000, 270.00000);
	CreateDynamicObject(1649, 279.05371, 2051.92285, 47.93206,   0.00000, 90.00000, 179.99451);
	CreateDynamicObject(1649, 276.27832, 2051.91504, 47.93206,   0.00000, 90.00000, 179.99451);
	CreateDynamicObject(1649, 273.58691, 2051.92285, 47.93206,   0.00000, 90.00000, 179.99451);
	CreateDynamicObject(1649, 271.93457, 2047.55664, 47.93206,   0.00000, 90.00000, 89.99451);
	CreateDynamicObject(9819, 276.05957, 2050.54883, 46.35826,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(16782, 272.38144, 2045.37402, 48.59831,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1714, 278.40192, 2045.39954, 45.50478,   0.00000, 0.00000, 53.00000);
	CreateDynamicObject(9819, 276.58789, 2044.49316, 46.35826,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1714, 275.64246, 2045.18799, 45.50480,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1714, 273.90997, 2049.98340, 45.50478,   0.00000, 0.00000, 218.93884);
	CreateDynamicObject(1714, 276.92407, 2049.98633, 45.50480,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(16095, 282.36621, 2047.64160, 16.64063,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(11631, 272.59885, 2046.80554, 46.75069,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2356, 273.40063, 2047.57019, 45.50478,   0.00000, 0.00000, 142.77573);
	CreateDynamicObject(1596, 277.11316, 2047.69958, 52.89407,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1649, 280.69531, 2047.55664, 47.93206,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(1649, 271.92578, 2047.55664, 47.93206,   0.00000, 90.00000, 270.00000);
	CreateDynamicObject(964, 280.35428, 2048.18750, 44.88025,   270.00000, 180.00000, 270.00000);
	CreateDynamicObject(2928, 233.58304, 1822.79883, 7.66294,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3108, 69.26209, 2503.05493, 15.48438,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16665, 442.55957, 2295.00854, 8903.91504,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 353.72729, 1855.49524, 16.73000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3749, 82.06760, 1921.19507, 22.61640,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(987, 353.64001, 1867.50000, 16.65000,   0.00000, 0.00000, 55.97000);
	CreateDynamicObject(987, 360.34000, 1877.43005, 16.65000,   0.00000, 0.00000, 25.96000);
	CreateDynamicObject(987, 371.09000, 1882.60999, 16.65000,   0.00000, 0.00000, 25.96000);
	CreateDynamicObject(987, 381.82001, 1887.77002, 16.65000,   0.00000, 0.00000, 65.96000);
	CreateDynamicObject(987, 386.70001, 1898.66003, 16.65000,   0.00000, 0.00000, 87.96000);
	CreateDynamicObject(987, 387.10999, 1910.59998, 16.65000,   0.00000, 0.00000, 87.95000);
	CreateDynamicObject(987, 387.57999, 1922.53003, 16.65000,   0.00000, 0.00000, 87.95000);
	CreateDynamicObject(987, 387.98999, 1934.48999, 16.65000,   0.00000, 0.00000, 87.95000);
	CreateDynamicObject(987, 388.42001, 1946.43005, 16.65000,   0.00000, 0.00000, 87.95000);
	CreateDynamicObject(987, 388.82999, 1958.37000, 16.65000,   0.00000, 0.00000, 87.95000);
	CreateDynamicObject(987, 389.26001, 1970.31006, 16.65000,   0.00000, 0.00000, 87.95000);
	CreateDynamicObject(987, 389.66000, 1982.26001, 16.65000,   0.00000, 0.00000, 87.95000);
	CreateDynamicObject(987, 390.12000, 1994.16003, 16.65000,   0.00000, 0.00000, 95.95000);
	CreateDynamicObject(987, 388.92001, 2006.05005, 16.65000,   0.00000, 0.00000, 95.95000);
	CreateDynamicObject(987, 387.70999, 2017.96997, 16.65000,   0.00000, 0.00000, 85.95000);
	CreateDynamicObject(987, 388.56000, 2029.90002, 16.65000,   0.00000, 0.00000, 85.95000);
	CreateDynamicObject(987, 389.38000, 2041.82996, 16.65000,   0.00000, 0.00000, 95.95000);
	CreateDynamicObject(987, 388.14001, 2053.69995, 16.65000,   0.00000, 0.00000, 125.94000);
	CreateDynamicObject(987, 381.12000, 2063.37012, 16.65000,   0.00000, 0.00000, 125.94000);
	CreateDynamicObject(987, 374.13000, 2073.03003, 16.65000,   0.00000, 0.00000, 145.94000);
	CreateDynamicObject(987, 364.26999, 2079.73999, 16.65000,   0.00000, 0.00000, 177.94000);
	CreateDynamicObject(987, 352.32001, 2080.17993, 16.65000,   0.00000, 0.00000, 177.92999);
	CreateDynamicObject(987, 340.38000, 2080.60010, 16.65000,   0.00000, 0.00000, 177.92999);
	CreateDynamicObject(987, 328.42999, 2081.04004, 16.65000,   0.00000, 0.00000, 177.92999);
	CreateDynamicObject(987, 316.48999, 2081.46997, 16.65000,   0.00000, 0.00000, 177.92999);
	CreateDynamicObject(987, 304.56000, 2081.90991, 16.65000,   0.00000, 0.00000, 177.92999);
	CreateDynamicObject(987, 292.62000, 2082.34009, 16.65000,   0.00000, 0.00000, 177.92999);
	CreateDynamicObject(987, 280.67001, 2082.73999, 16.65000,   0.00000, 0.00000, 177.92999);
	CreateDynamicObject(987, 268.72000, 2083.16992, 16.65000,   0.00000, 0.00000, 177.92999);
	CreateDynamicObject(987, 256.73001, 2083.60010, 16.65000,   0.00000, 0.00000, 127.93000);
	CreateDynamicObject(987, 249.42000, 2093.05005, 16.65000,   0.00000, 0.00000, 127.93000);
	CreateDynamicObject(987, 242.07001, 2102.48999, 16.65000,   0.00000, 0.00000, 157.92999);
	CreateDynamicObject(987, 231.00999, 2106.95996, 16.65000,   0.00000, 0.00000, 157.92999);
	CreateDynamicObject(8079, 167.20590, 1996.15784, 31.83340,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8150, 157.04530, 2111.29150, 17.72057,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8150, 94.17480, 1993.57617, 17.86000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3749, 95.00117, 2071.35645, 22.01690,   0.00000, 0.00000, 91.91999);
	CreateDynamicObject(987, 94.03578, 2064.68555, 16.79240,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 94.17480, 2093.37769, 16.79240,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 94.17480, 2105.27759, 16.79240,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 94.17480, 2111.67651, 16.79240,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(8150, 82.06760, 1851.82251, 17.86000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(987, 353.72729, 1843.58325, 16.73000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(987, 353.72729, 1831.73596, 16.73000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(987, 353.72729, 1819.75012, 16.73000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(987, 353.72729, 1807.87158, 16.73000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(987, 353.72729, 1798.11072, 16.73000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(987, 94.20310, 2090.74585, 16.79240,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(18981, 153.83160, 2025.74829, 18.08810,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 153.83160, 1968.80017, 18.09210,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 153.83160, 1953.83081, 18.08810,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 164.62720, 1941.87427, 6.06220,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18981, 179.71831, 1978.78662, 17.55270,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 179.71831, 1953.83081, 18.08810,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 179.71831, 1978.74048, 18.08810,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 179.71831, 2003.69800, 17.55270,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 179.71831, 2028.60120, 17.55270,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 179.71831, 2053.53906, 18.08810,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 167.62801, 2049.59033, 18.09210,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 175.31830, 2027.46179, 18.08410,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 153.83160, 1983.49976, 18.08805,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 167.29610, 1953.83875, 18.09210,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(16096, 144.29837, 1937.75415, 19.82810,   356.85840, 0.00000, 90.00000);
	CreateDynamicObject(18981, 179.71831, 2003.69800, 18.08810,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 179.72549, 2028.61987, 18.08810,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 153.83560, 2008.06042, 18.08810,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 179.71831, 2028.60120, 16.67870,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 179.71831, 2003.69800, 16.67870,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 179.71831, 1978.78662, 16.67870,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 179.71831, 2053.53906, 17.55270,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 179.71831, 2053.53906, 16.67870,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 143.01759, 2049.59033, 15.50970,   0.00000, 78.00000, 0.00000);
	CreateDynamicObject(18981, 203.78169, 1953.83081, 13.84720,   0.00000, -70.00000, 0.00000);
	CreateDynamicObject(18981, 186.26340, 1941.87427, 6.06220,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18981, 141.84650, 2025.73547, 6.06220,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18981, 153.85451, 2037.69995, 6.07820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18981, 153.85451, 2062.41553, 6.10220,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18981, 203.78169, 1978.76501, 13.84720,   0.00000, -70.00000, 0.00000);
	CreateDynamicObject(18981, 203.78169, 2003.68347, 13.84720,   0.00000, -70.00000, 0.00000);
	CreateDynamicObject(18981, 203.78169, 2028.52710, 13.84720,   0.00000, -70.00000, 0.00000);
	CreateDynamicObject(18981, 203.78169, 2053.34912, 13.84720,   0.00000, -70.00000, 0.00000);
	CreateDynamicObject(19124, 141.47650, 2061.73291, 16.53533,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 141.47650, 2038.37219, 16.88911,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, 174.09320, 2036.14307, 20.74170,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19447, 174.09320, 2036.31116, 18.58610,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19449, 164.59270, 2036.14307, 20.74170,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19449, 159.91820, 2036.13513, 20.74170,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19447, 159.61301, 2036.30322, 18.58210,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(4084, 167.03822, 2036.29028, 20.29280,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(4084, 167.03819, 2036.45435, 20.29280,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(4084, 167.03819, 2036.53833, 20.29280,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(18981, 167.62801, 2049.59033, 18.09210,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 167.62801, 2049.59033, 18.09210,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 167.62801, 2049.59033, 18.09210,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19124, 92.46926, 2077.38110, 16.96510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 83.72696, 2076.99731, 16.96510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 74.04388, 2076.58252, 16.96510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 63.79406, 2076.13354, 16.96510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 92.46930, 2065.10864, 16.96510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 83.72291, 2064.73633, 16.96510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 74.04390, 2064.33350, 16.96510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19124, 63.79410, 2063.87231, 16.96510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 139.69740, 1941.04504, 18.30970,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 136.41170, 1941.04504, 18.30970,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 133.25211, 1941.04504, 18.31370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 130.38440, 1941.04504, 18.30970,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1412, 126.09460, 1941.29102, 18.25530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1412, 120.82730, 1941.29102, 18.25530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1412, 115.54750, 1941.29102, 18.25530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1412, 110.24920, 1941.29102, 18.25530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1412, 104.97940, 1941.29102, 18.25530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1412, 99.73140, 1941.29102, 18.25530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1412, 96.59260, 1941.28296, 18.25530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19467, 94.06150, 2075.00830, 16.43510,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19467, 94.06150, 2070.49878, 16.43510,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19467, 94.06150, 2066.01611, 16.43510,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(987, 341.72211, 1798.12500, 16.65000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 329.75870, 1798.12500, 16.65000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 317.81909, 1798.12500, 16.65000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 297.26489, 1815.72986, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 297.26489, 1803.82202, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 297.26489, 1838.78894, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 285.21332, 1827.09509, 16.53670,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 273.29059, 1827.09509, 16.53670,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 261.34671, 1827.09509, 16.53670,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 249.42490, 1827.09509, 16.53670,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18980, 297.35690, 1827.09509, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 297.24591, 1815.63953, 16.53670,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 285.26270, 1815.63953, 16.53670,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 273.29550, 1815.63953, 16.53670,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 261.35519, 1815.63953, 16.53670,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(18980, 297.35690, 1815.63953, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 297.26489, 1850.77380, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 297.26489, 1862.71765, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 297.26489, 1874.71423, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 297.26489, 1886.71545, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 297.26489, 1898.71179, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 297.26489, 1910.65271, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 287.44748, 1917.54700, 16.53670,   0.00000, 0.00000, -35.00000);
	CreateDynamicObject(987, 277.65442, 1924.39868, 16.53670,   0.00000, 0.00000, -35.00000);
	CreateDynamicObject(987, 267.88861, 1931.25012, 16.53670,   0.00000, 0.00000, -35.00000);
	CreateDynamicObject(987, 265.45349, 1944.88733, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 265.41559, 1932.97632, 16.53270,   0.00000, 0.00000, -35.00000);
	CreateDynamicObject(987, 265.45349, 1956.82690, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 265.43283, 1968.76355, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 265.45349, 1980.75598, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 265.45349, 1992.68750, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 265.45349, 2004.64246, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 265.45349, 2016.62659, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 265.45349, 2028.57813, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 265.45349, 2037.58386, 16.54070,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 305.13510, 1827.09961, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 305.13510, 1815.14063, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 305.13510, 1803.18445, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 277.40421, 2037.45190, 16.54070,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 289.32190, 2037.45190, 16.54070,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 297.20401, 2037.44385, 16.54070,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 297.26489, 2049.40796, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 297.26489, 2061.37476, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 297.26489, 2073.31689, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 297.26089, 2082.28491, 16.53670,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3115, 228.95212, 1970.80127, 17.26054,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3115, 228.95210, 2011.37415, 17.24180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3934, 228.95210, 2011.37415, 17.53940,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3934, 228.95210, 1970.80127, 17.55540,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8572, 217.49770, 2013.20703, 16.29480,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(8572, 217.49770, 1972.56165, 16.31480,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(16096, 245.62730, 1812.82715, 18.39774,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18980, 249.80490, 1815.63953, 9.13498,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18980, 249.80490, 1827.09509, 9.13500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19467, 249.47189, 1824.39136, 16.62540,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19467, 249.47189, 1819.90430, 16.62540,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19467, 249.47189, 1818.34644, 16.63340,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14791, 356.13757, 2028.43359, 23.21562,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3819, 363.16891, 2028.43359, 22.54590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3819, 349.34680, 2028.43359, 22.54590,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3819, 356.13760, 2035.67456, 22.54590,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3819, 356.13760, 2021.11157, 22.54590,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(987, 93.94050, 1930.45459, 16.79056,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1685, 367.45398, 1898.36951, 17.23241,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 362.95724, 1896.71350, 17.23241,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 364.03629, 1902.50647, 17.23241,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 368.58417, 1904.76819, 17.23241,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 371.28152, 1901.81836, 17.23241,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16317, 369.16693, 1891.75500, 14.2851,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16317, 377.72812, 1911.42664, 13.8014,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16304, 353.92126, 1901.41260, 17.65611,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18566, 361.27475, 1912.88818, 16.62908,   0.00000, 0.00000, 19.56000);
	CreateDynamicObject(18566, 358.77765, 1920.90808, 16.62908,   0.00000, 0.00000, 73.20001);
	CreateDynamicObject(18566, 366.96793, 1919.83691, 16.62908,   0.00000, 0.00000, -22.62000);
	CreateDynamicObject(16134, 362.45331, 1926.75977, 9.09597,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3363, 373.79752, 1925.67773, 16.24163,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16317, 372.10864, 1952.22778, 15.40108,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16317, 359.35400, 1987.23035, 15.40108,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16304, 343.30890, 1949.20935, 19.31885,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16304, 380.99649, 1979.88000, 15.16367,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 364.15887, 1967.68396, 17.15356,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 357.23132, 1964.84570, 17.19862,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 362.02927, 1960.56165, 17.22115,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1685, 360.67300, 1965.01392, 17.17609,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18566, 354.85318, 1958.97375, 16.69666,   0.00000, 0.00000, -22.62000);
	CreateDynamicObject(806, 341.50580, 1923.48535, 19.68688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(806, 360.82803, 1940.64001, 19.68688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(806, 341.83127, 1975.25513, 19.68688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(806, 358.67291, 1970.69946, 19.68688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(806, 378.59311, 1960.96204, 19.68688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(806, 372.75256, 1994.98621, 19.68688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(806, 379.53549, 1926.83350, 19.68688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(806, 378.39676, 1896.07690, 19.68688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(855, 342.34589, 1949.40771, 19.61384,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(759, 361.04727, 1983.00366, 17.91196,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1217, 353.87201, 1974.77649, 16.96565,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1217, 354.28137, 1971.07959, 16.96565,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1217, 349.35400, 1974.95068, 16.96565,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1217, 348.08646, 1972.99329, 16.96565,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1217, 351.48499, 1974.44751, 16.96565,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3864, 339.83365, 1937.33081, 22.50377,   0.00000, 0.00000, -120.11999);
	CreateDynamicObject(3864, 353.77927, 1886.19006, 22.50377,   0.00000, 0.00000, 232.37996);
	CreateDynamicObject(3864, 366.52051, 1997.57446, 22.50377,   0.00000, 0.00000, 102.11999);
	CreateDynamicObject(1368, 265.94479, 1937.35413, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 1940.38367, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 1943.39368, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 1955.29333, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 1961.28687, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 1964.27698, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 1967.20398, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 1970.23889, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 1988.18274, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 1991.17542, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 2003.11743, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 2018.04651, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 2021.05872, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1368, 265.94479, 2033.05176, 17.29820,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3819, 338.71790, 1800.99048, 17.79726,   0.00000, 0.00000, -90.00000);


	//-> Villa 1 | By. LFran22
	CreateObject(17864, 2054.04565, -1906.94519, 12.50380,   -0.80000, 0.00000, 0.00000, 500000.0);
	CreateDynamicObject(1264, 2069.84326, -1869.38208, 12.96691,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(678, 2069.62012, -1880.05615, 12.49860,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(681, 2060.28564, -1882.67175, 12.53386,   0.00000, 0.00000, 52.14003);
	CreateDynamicObject(3362, 2065.80273, -1896.66553, 12.11719,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1230, 2068.24780, -1907.38452, 12.95520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 2069.28394, -1894.12378, 12.92129,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11457, 2054.86670, -1912.19250, 11.85910,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11459, 2063.60400, -1917.21887, 12.41840,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11426, 2047.73462, -1918.24231, 12.40530,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1264, 2061.29883, -1920.42517, 12.77285,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3626, 2037.83252, -1903.98254, 13.78930,   0.00000, 0.00000, 178.33900);
	CreateDynamicObject(19456, 2016.18555, -1868.62769, 14.28280,   0.00000, 0.00000, -90.53999);
	CreateDynamicObject(1492, 2008.96008, -1868.58728, 12.52890,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1502, 2047.88208, -1902.02417, 12.29828,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(5153, 2047.86316, -1904.61963, 12.63040,   0.00000, 293.89999, 180.00000);
	CreateDynamicObject(1473, 2046.84155, -1895.41638, 15.10684,   334.98999, 0.00000, 88.85999);
	CreateDynamicObject(5153, 2043.47571, -1905.71729, 12.61530,   0.00000, 293.89999, 90.00000);
	CreateDynamicObject(3260, 2047.02051, -1902.04199, 12.87752,   0.00000, 0.00000, 179.99500);
	CreateDynamicObject(1473, 2046.03284, -1901.40808, 13.39986,   64.99500, 0.00000, 270.24701);
	CreateDynamicObject(1448, 2046.01746, -1901.59949, 14.55920,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(1448, 2045.52466, -1901.60376, 15.07200,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1473, 2046.82312, -1901.24707, 13.25786,   65.00000, 0.00000, 0.00000);
	CreateDynamicObject(1473, 2047.21948, -1901.25830, 13.23344,   65.00000, 0.00000, 0.00000);
	CreateDynamicObject(1474, 2047.31445, -1900.65723, 13.89120,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(1474, 2047.31433, -1899.16101, 13.87734,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3302, 2047.93140, -1900.30933, 12.71584,   90.00000, 0.00000, 90.71999);
	CreateDynamicObject(3260, 2042.55774, -1899.43042, 13.27550,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1418, 2042.55981, -1900.45593, 13.41574,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3260, 2044.22070, -1901.15369, 13.20366,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1473, 2045.12048, -1901.54468, 13.46675,   64.99500, 0.00000, 89.75300);
	CreateDynamicObject(3260, 2044.15088, -1902.22339, 12.84470,   0.00000, 0.00000, 179.99500);
	CreateDynamicObject(3260, 2042.43445, -1903.15295, 12.88940,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3260, 2042.42737, -1904.81299, 12.89220,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1448, 2047.43323, -1901.31946, 14.38140,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1448, 2046.54565, -1901.32617, 14.78430,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1448, 2045.34644, -1901.21301, 15.14370,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1448, 2045.15552, -1901.75928, 14.54710,   90.00000, 0.00000, -90.00000);
	CreateDynamicObject(3302, 2045.33008, -1900.24268, 15.26680,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3302, 2043.25269, -1900.28455, 15.19180,   1.20000, -0.66000, 0.00000);
	CreateDynamicObject(1712, 2031.18054, -1904.62146, 12.56700,   0.00000, 0.00000, 158.46001);
	CreateDynamicObject(1990, 2032.80701, -1903.69934, 12.34805,   0.00000, 0.00000, 990.00000);
	CreateDynamicObject(2417, 2032.69006, -1904.71741, 12.53450,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2738, 2043.08203, -1900.58447, 13.18830,   0.00000, 0.00000, 90.20000);
	CreateDynamicObject(1800, 2046.11584, -1899.46692, 12.37397,   0.00000, 0.00000, 88.53900);
	CreateDynamicObject(2110, 2046.88440, -1900.52942, 12.36318,   0.00000, 0.00000, 77.99700);
	CreateDynamicObject(1747, 2046.98499, -1900.84741, 13.16090,   0.00000, 0.00000, 248.75000);
	CreateDynamicObject(2106, 2047.24414, -1899.49719, 13.16098,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 2045.50830, -1903.96729, 14.73536,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 2045.58057, -1901.77966, 15.09121,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1474, 2032.70752, -1904.78735, 13.99520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1474, 2031.20520, -1904.79150, 14.01099,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1474, 2029.42273, -1904.79846, 13.99833,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1448, 2030.46741, -1904.72534, 15.03340,   25.00000, 0.00000, 0.00000);
	CreateDynamicObject(3260, 2028.83118, -1904.27917, 13.47713,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1407, 2032.38269, -1898.35645, 13.12418,   0.00000, 90.00000, 180.17989);
	CreateDynamicObject(3260, 2033.14636, -1901.91785, 13.46410,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1474, 2029.58215, -1898.65186, 14.04075,   0.00000, 0.00000, 179.99500);
	CreateDynamicObject(1499, 2028.87378, -1903.34229, 12.54709,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1410, 2031.60669, -1900.30603, 12.99528,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(1473, 2031.03210, -1898.65039, 15.00830,   0.00000, 0.00000, 179.99500);
	CreateDynamicObject(3302, 2031.66870, -1899.12256, 13.50697,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(3302, 2029.88892, -1898.10864, 13.00970,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(3302, 2030.56177, -1898.11792, 12.99744,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(3302, 2033.04578, -1902.82849, 13.41241,   90.00000, 0.00000, 267.35995);
	CreateDynamicObject(3302, 2033.03064, -1904.27051, 13.59570,   90.00000, 0.00000, 275.42023);
	CreateDynamicObject(1812, 2028.98621, -1898.79395, 12.54600,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2525, 2032.41248, -1898.91248, 12.54940,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3302, 2030.66846, -1903.67749, 15.46600,   0.00000, 0.00000, 63.39502);
	CreateDynamicObject(2120, 2047.30786, -1905.20874, 13.10250,   0.00000, 0.00000, 362.92001);
	CreateDynamicObject(2112, 2045.53650, -1904.79431, 12.91857,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1487, 2045.50220, -1904.76147, 13.50427,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1666, 2046.01282, -1904.90027, 13.39966,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1666, 2045.12451, -1904.69250, 13.39809,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2147, 2042.99707, -1905.05310, 12.54890,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2159, 2042.71045, -1904.05188, 12.52440,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(918, 2042.83313, -1904.25122, 12.90840,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1893, 2030.74805, -1903.83020, 15.41901,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11459, 2064.16260, -1902.67664, 12.48080,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11459, 2016.93518, -1910.55615, 12.54129,   0.00000, 0.00000, 314.21988);
	CreateDynamicObject(11444, 2028.94922, -1915.65002, 12.54090,   0.00000, 0.00000, 0.12000);
	CreateDynamicObject(3302, 2026.68103, -1898.97620, 13.50909,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(3302, 2026.68103, -1902.28357, 13.46170,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(11426, 2054.99707, -1904.16199, 12.25620,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2673, 2052.63354, -1896.27136, 12.62140,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11426, 2021.19714, -1917.72314, 12.53270,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1449, 2050.18384, -1906.48059, 12.79180,   0.00000, 0.00000, -89.10000);
	CreateDynamicObject(11459, 2014.85071, -1915.66187, 12.51580,   0.00000, 0.00000, 179.10001);
	CreateDynamicObject(11426, 2019.05811, -1914.07556, 15.37057,   0.00000, 0.00000, 152.69984);
	CreateDynamicObject(16637, 2063.50928, -1894.53955, 13.66970,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(16637, 2062.10449, -1894.43420, 14.95810,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(16637, 2059.30249, -1894.43713, 14.94665,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(3260, 2051.50635, -1900.21338, 13.45866,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(738, 2051.58276, -1906.76733, 12.27620,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3302, 2057.46094, -1906.61401, 12.87470,   90.00000, 0.00000, 89.90000);
	CreateDynamicObject(1554, 2052.74634, -1881.93384, 15.38756,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1554, 2029.92493, -1881.27136, 15.48122,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16637, 2028.89709, -1899.96692, 13.95520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1264, 2022.93457, -1920.85339, 12.98176,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1230, 2038.59302, -1921.48193, 12.85370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1440, 2064.32715, -1920.64050, 12.96143,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2069.01245, -1863.35254, 13.82743,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1447, 2063.77051, -1863.34351, 13.82120,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1447, 2053.20532, -1863.34680, 13.83310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19435, 2020.26721, -1886.62524, 13.76313,   0.00000, 0.00000, -43.44000);
	CreateDynamicObject(19409, 2056.65674, -1879.47229, 14.27680,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19392, 2059.05103, -1879.47412, 14.28200,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(14752, 2056.60718, -1879.38452, 14.53530,   0.00000, -10.00000, -90.84000);
	CreateDynamicObject(852, 2056.58008, -1880.44458, 12.50020,   0.00000, 0.00000, 181.05998);
	CreateDynamicObject(1574, 2056.04858, -1882.69482, 12.32857,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1574, 2057.46313, -1882.66809, 12.32857,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2057.46606, -1882.64587, 12.86655,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2056.06348, -1882.71289, 12.92778,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1410, 2056.98560, -1883.42908, 12.54940,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1410, 2065.58276, -1879.10461, 12.54940,   0.00000, 90.00000, -7.67999);
	CreateDynamicObject(3260, 2059.93970, -1882.54187, 12.86186,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3260, 2059.93555, -1880.55945, 12.86190,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1410, 2055.42432, -1870.96411, 12.99872,   0.00000, 90.00000, 68.84000);
	CreateDynamicObject(1448, 2058.35327, -1881.87000, 13.10580,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1448, 2058.35376, -1882.91528, 13.10580,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1448, 2058.35327, -1882.91565, 14.27490,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1448, 2058.35278, -1881.87097, 14.25290,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(5153, 2057.95337, -1893.67737, 12.65720,   0.00000, 294.00000, 0.00000);
	CreateDynamicObject(5153, 2047.78687, -1899.58728, 12.38877,   0.00000, 295.00000, 180.00000);
	CreateDynamicObject(5153, 2044.52979, -1898.53235, 13.06990,   0.00000, 294.00000, -90.00000);
	CreateDynamicObject(5153, 2046.68799, -1898.53821, 13.08390,   0.00000, 294.00000, -90.00000);
	CreateDynamicObject(5153, 2045.63501, -1905.72388, 12.63866,   0.00000, 293.89999, 90.00000);
	CreateDynamicObject(1410, 2047.22217, -1905.65540, 12.59403,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19363, 2058.87036, -1871.67285, 14.27771,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19363, 2056.83203, -1871.67102, 14.27060,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19436, 2060.56055, -1872.38379, 14.27870,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19363, 2059.19751, -1874.97791, 14.21130,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19363, 2055.13916, -1877.78088, 14.27330,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14752, 2056.63477, -1879.54529, 14.53530,   0.00000, -10.00000, 90.00000);
	CreateDynamicObject(1494, 2059.83179, -1879.47412, 12.54840,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2417, 2056.77466, -1878.94995, 12.54870,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2147, 2055.72192, -1876.83020, 12.54580,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2334, 2055.72729, -1877.88293, 12.52430,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2338, 2055.72729, -1878.88501, 12.53500,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19363, 2060.56030, -1874.59326, 14.27920,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19363, 2060.56055, -1877.80505, 14.28120,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19436, 2055.13989, -1872.38342, 14.27030,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(1722, 2057.25073, -1876.83997, 12.54990,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1722, 2057.25073, -1875.57275, 12.54940,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2849, 2055.61206, -1878.31824, 13.58690,   0.00000, 0.00000, 73.26000);
	CreateDynamicObject(2034, 2058.60889, -1876.58301, 13.36460,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2033, 2058.77930, -1876.79004, 13.34250,   0.00000, 0.00000, 32.40000);
	CreateDynamicObject(1544, 2055.78833, -1879.06982, 13.58270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1486, 2058.91138, -1876.07019, 13.48950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1666, 2058.56665, -1875.68640, 13.42570,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1666, 2059.12134, -1876.78467, 13.42630,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2712, 2057.80273, -1879.09521, 13.12110,   0.00000, 0.00000, -93.48000);
	CreateDynamicObject(1722, 2060.39429, -1875.49524, 12.54890,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1722, 2060.39429, -1876.73804, 12.54890,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19363, 2055.13916, -1874.57239, 14.27210,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19392, 2056.81519, -1874.99731, 14.21130,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2558, 2046.09912, -1900.92896, 13.35189,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1737, 2058.85254, -1876.73572, 12.55150,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1748, 2060.47241, -1872.71277, 13.36540,   0.00000, 0.00000, 272.58011);
	CreateDynamicObject(1417, 2030.96802, -1900.67383, 12.77406,   0.00000, 0.00000, -180.65996);
	CreateDynamicObject(1544, 2060.05493, -1873.08594, 13.35670,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1452, 2055.77881, -1872.29626, 13.59060,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2525, 2055.78955, -1872.35974, 12.54881,   0.00000, 0.00000, 1.07997);
	CreateDynamicObject(2670, 2058.59521, -1873.06274, 12.63850,   0.00000, 0.00000, 124.20010);
	CreateDynamicObject(16637, 2059.12427, -1873.66638, 15.92970,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(16637, 2056.56030, -1873.66406, 15.93190,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(16637, 2059.12451, -1877.48267, 15.92970,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(16637, 2056.56128, -1877.47034, 15.92970,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(2074, 2058.88354, -1873.25623, 15.65250,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 2012.32300, -1874.10291, 12.54469,   0.00000, 0.00000, -0.11999);
	CreateDynamicObject(2032, 2012.34839, -1872.60571, 12.54520,   0.00000, 0.00000, 88.42000);
	CreateDynamicObject(1722, 2013.89148, -1872.54614, 12.54469,   0.00000, 0.00000, 90.30004);
	CreateDynamicObject(1722, 2010.72156, -1872.40833, 12.54469,   0.00000, 0.00000, -90.00002);
	CreateDynamicObject(1722, 2010.78564, -1870.32898, 12.54470,   0.00000, 0.00000, 267.89993);
	CreateDynamicObject(1722, 2012.43689, -1868.88977, 12.54469,   0.00000, 0.00000, 180.30000);
	CreateDynamicObject(1722, 2013.97766, -1871.46582, 12.54469,   0.00000, 0.00000, 95.21994);
	CreateDynamicObject(1722, 2010.75354, -1871.29785, 12.54469,   0.00000, 0.00000, -93.23997);
	CreateDynamicObject(1722, 2013.99451, -1870.42273, 12.54469,   0.00000, 0.00000, 92.88001);
	CreateDynamicObject(1481, 2008.65686, -1871.87280, 13.25290,   0.00000, 0.00000, 89.76000);
	CreateDynamicObject(1481, 2008.65454, -1872.87109, 13.25290,   0.00000, 0.00000, 89.75998);
	CreateDynamicObject(2804, 2008.71741, -1871.89099, 13.43170,   0.00000, 0.00000, 3.78000);
	CreateDynamicObject(2806, 2008.70203, -1872.90210, 13.47060,   0.00000, 0.00000, 193.91997);
	CreateDynamicObject(933, 2009.31177, -1875.20740, 12.51850,   0.00000, 0.00000, -44.58000);
	CreateDynamicObject(1809, 2009.35156, -1875.15088, 13.49740,   0.00000, 0.00000, 137.52010);
	CreateDynamicObject(1840, 2008.99670, -1874.80151, 13.49980,   0.00000, 0.00000, -131.99989);
	CreateDynamicObject(1840, 2009.72607, -1875.44775, 13.49980,   0.00000, 0.00000, -134.21980);
	CreateDynamicObject(1265, 2014.25195, -1875.79126, 13.00407,   0.00000, 0.00000, -4.68000);
	CreateDynamicObject(2829, 2012.40125, -1871.42017, 13.34460,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1666, 2012.06714, -1870.38318, 13.42600,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1666, 2012.75769, -1870.71936, 13.42470,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1666, 2012.32385, -1872.77686, 13.42330,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1543, 2012.34070, -1872.30151, 13.34430,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, 2012.62207, -1872.17786, 13.43050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1667, 2011.98730, -1872.08093, 13.44350,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1669, 2012.35974, -1871.01599, 13.49981,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1666, 2009.79443, -1874.90137, 13.58240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19393, 2009.77234, -1868.58630, 14.28430,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19364, 2008.20959, -1871.71008, 14.28170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19437, 2008.20813, -1869.30103, 14.28290,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(17969, 2015.08252, -1868.49792, 14.50930,   0.00000, 0.00000, -90.54000);
	CreateDynamicObject(18659, 2011.12439, -1876.32336, 14.42840,   0.00000, 0.00000, -90.54000);
	CreateDynamicObject(1368, 2013.85425, -1868.29517, 13.23110,   0.00000, 0.00000, 179.46001);
	CreateDynamicObject(1265, 2027.27795, -1868.41870, 12.95237,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 1995.92444, -1863.37927, 13.82070,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1447, 2001.25610, -1863.38306, 13.81350,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2011.87781, -1863.38086, 13.80473,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2017.16101, -1863.39758, 13.82800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2047.93494, -1863.35535, 13.81530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2022.43738, -1863.38977, 13.81530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2027.67346, -1863.39209, 13.81530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1447, 2058.48022, -1863.33740, 13.83310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2042.65649, -1863.35400, 13.81530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(911, 2059.94214, -1872.61121, 12.78620,   0.00000, 0.00000, -89.88000);
	CreateDynamicObject(1458, 2071.38232, -1872.27893, 12.75470,   0.00000, 0.00000, 52.20001);
	CreateDynamicObject(3626, 2059.10864, -1897.78748, 13.92933,   0.00000, 0.00000, 180.07895);
	CreateDynamicObject(11426, 2028.67456, -1880.79321, 12.54270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11459, 2028.78821, -1873.41858, 12.48180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11457, 2023.71033, -1881.75647, 12.03260,   0.00000, 0.00000, 179.27991);
	CreateDynamicObject(2032, 2012.38660, -1871.39819, 12.54520,   0.00000, 0.00000, 88.42000);
	CreateDynamicObject(11426, 2028.67383, -1887.80798, 12.54270,   0.00000, 0.00000, 0.36003);
	CreateDynamicObject(3260, 2055.10522, -1880.56140, 12.83600,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11426, 2035.21033, -1915.64917, 12.43270,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11459, 2041.42407, -1916.92737, 12.40290,   0.00000, 0.00000, 180.66000);
	CreateDynamicObject(11459, 2034.59412, -1893.96167, 12.48227,   0.00000, 0.00000, 269.05881);
	CreateDynamicObject(16637, 2024.55908, -1887.65137, 14.02670,   0.00000, 0.00000, -404.81985);
	CreateDynamicObject(3260, 2023.43945, -1888.76660, 13.44914,   0.00000, 0.00000, -137.81999);
	CreateDynamicObject(3626, 2037.95679, -1899.98804, 13.77320,   0.00000, 0.00000, 178.33900);
	CreateDynamicObject(2924, 2057.86084, -1894.77136, 13.76480,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19355, 2050.47144, -1906.46558, 13.78680,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19355, 2050.47339, -1901.86426, 13.81100,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19355, 2051.99268, -1907.96912, 13.79220,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1474, 2029.45715, -1902.58899, 14.54916,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19364, 2008.20825, -1874.85303, 14.27570,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1358, 2000.96741, -1868.73657, 13.72593,   0.00000, 0.00000, -36.29998);
	CreateDynamicObject(1410, 2050.51929, -1899.61353, 12.85759,   0.00000, 90.00000, -88.50000);
	CreateDynamicObject(3302, 2050.53467, -1898.10461, 13.41030,   90.00000, 0.00000, 90.00001);
	CreateDynamicObject(3302, 2050.30957, -1895.88928, 13.42729,   90.00000, 0.00000, 282.66010);
	CreateDynamicObject(3302, 2050.25195, -1894.06848, 13.44050,   90.00000, 0.00000, 90.00001);
	CreateDynamicObject(1446, 2050.90186, -1892.92041, 12.72370,   0.00000, 90.00000, 187.38000);
	CreateDynamicObject(1492, 2053.14844, -1892.81641, 12.54010,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3302, 2056.97217, -1892.53223, 13.50805,   90.00000, 0.00000, 181.58281);
	CreateDynamicObject(1446, 2055.50854, -1892.58447, 12.77245,   0.00000, 90.00000, 185.21983);
	CreateDynamicObject(852, 2053.37378, -1899.24854, 12.50915,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(852, 2051.41309, -1899.25586, 12.50814,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1474, 2068.43115, -1873.50879, 14.03179,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1766, 2051.41602, -1897.26685, 12.52891,   0.00000, 0.00000, 102.06000);
	CreateDynamicObject(1810, 2057.08887, -1894.25330, 12.53504,   0.00000, 0.00000, -58.62000);
	CreateDynamicObject(674, 2054.20850, -1892.27136, 12.54017,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1408, 2050.01880, -1900.04712, 12.55230,   -90.00000, 0.00000, -91.92000);
	CreateDynamicObject(1368, 2016.17786, -1868.31946, 13.23510,   0.00000, 0.00000, 179.46001);
	CreateDynamicObject(19456, 2012.93555, -1876.43640, 14.28280,   0.00000, 0.00000, -90.53999);
	CreateDynamicObject(2674, 2054.46021, -1894.73560, 12.56300,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11426, 2016.31885, -1880.98376, 12.54270,   0.00000, 0.00000, -135.12004);
	CreateDynamicObject(11426, 2018.95459, -1880.61316, 15.11039,   0.00000, 0.00000, 0.23989);
	CreateDynamicObject(16637, 2019.03296, -1884.55640, 13.69887,   0.00000, 0.00000, 90.24000);
	CreateDynamicObject(1474, 2030.02173, -1869.10339, 14.03800,   0.00000, 0.00000, 179.10004);
	CreateDynamicObject(1413, 2006.57068, -1863.36816, 13.80473,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16637, 2009.51001, -1877.78467, 13.69030,   0.00000, 0.00000, 44.87999);
	CreateDynamicObject(3302, 2011.23389, -1879.56702, 13.52537,   90.00000, 0.00000, -42.54000);
	CreateDynamicObject(2674, 2054.72754, -1884.10461, 12.56830,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2673, 2056.46313, -1877.56702, 12.63465,   0.00000, 0.00000, 51.23999);
	CreateDynamicObject(926, 2058.45166, -1865.65149, 12.79436,   0.00000, 0.00000, 89.88004);
	CreateDynamicObject(1410, 2060.60718, -1883.46265, 12.54500,   0.00000, 90.00000, 0.96000);
	CreateDynamicObject(3260, 2055.10571, -1882.53674, 12.84578,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(853, 2019.37402, -1885.44763, 12.94201,   0.00000, 0.00000, -216.53993);
	CreateDynamicObject(3302, 2020.33997, -1887.79077, 13.45082,   90.00000, 0.00000, -36.47998);
	CreateDynamicObject(16637, 2046.45129, -1903.88013, 14.85310,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(11426, 2031.17065, -1909.21497, 12.41270,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(5153, 2043.58936, -1898.52612, 13.06990,   0.00000, 294.00000, -90.00000);
	CreateDynamicObject(3260, 2043.47900, -1901.15027, 13.20366,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11459, 2028.85999, -1891.75854, 12.30588,   0.00000, 0.00000, 228.79877);
	CreateDynamicObject(11459, 2024.72974, -1905.96362, 12.51490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11444, 2022.78162, -1911.66931, 12.53090,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 2043.29272, -1896.15369, 14.87650,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3260, 2043.36938, -1902.20569, 12.86470,   0.00000, 0.00000, 179.99500);
	CreateDynamicObject(16637, 2043.84473, -1903.86523, 14.85310,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19378, 2038.28320, -1910.57813, 14.97960,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(3061, 2040.65027, -1898.50598, 13.69180,   0.00000, 0.00000, 88.14003);
	CreateDynamicObject(18665, 2045.63000, -1898.69104, 13.99572,   0.00000, 0.00000, 90.00002);
	CreateDynamicObject(16637, 2030.29614, -1901.25232, 15.38445,   0.00000, 90.00000, 0.12000);
	CreateDynamicObject(2120, 2047.30786, -1904.29626, 13.04650,   0.00000, 0.00000, 362.92001);
	CreateDynamicObject(2120, 2044.39294, -1905.14941, 13.10250,   0.00000, 0.00000, 270.75998);
	CreateDynamicObject(18663, 2056.83984, -1883.50769, 13.76250,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1264, 2047.39600, -1903.98499, 15.33041,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1777, 2042.94177, -1902.83093, 13.34310,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(738, 2033.99792, -1890.29822, 12.54934,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(5153, 2023.48279, -1890.17834, 13.08390,   0.00000, 291.00000, -135.11980);
	CreateDynamicObject(2673, 2024.83521, -1894.08386, 12.63480,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2673, 2030.94043, -1903.08032, 12.64065,   0.00000, 0.00000, 61.08000);
	CreateDynamicObject(3593, 2006.74463, -1914.96753, 13.03980,   0.00000, 0.00000, 42.77999);
	CreateDynamicObject(11426, 2017.36353, -1872.64294, 12.54717,   0.00000, 0.00000, 179.28001);
	CreateDynamicObject(1223, 2015.23560, -1872.02734, 10.55780,   0.00000, 0.00000, 179.28000);
	CreateDynamicObject(2712, 2014.55408, -1874.59094, 13.11900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 2068.78198, -1873.50134, 14.79820,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(854, 2067.96484, -1878.09766, 12.75880,   0.00000, 0.00000, -283.31992);
	CreateDynamicObject(1265, 2043.47449, -1865.92505, 12.97250,   3.54000, -38.04000, 0.00000);
	CreateDynamicObject(11444, 2045.65833, -1909.74500, 12.48637,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(12857, 2035.19568, -1850.74219, 9.92159,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11426, 1990.94653, -1832.00061, 12.50850,   0.00000, 0.00000, 74.88003);
	CreateDynamicObject(3626, 1982.71753, -1830.35071, 13.90669,   0.00000, 0.00000, 166.57906);
	CreateDynamicObject(1413, 2012.59216, -1839.50854, 13.82070,   0.00000, 0.00000, 0.17999);
	CreateDynamicObject(1413, 2027.44446, -1839.49048, 13.82070,   0.00000, 0.00000, 0.17999);
	CreateDynamicObject(3302, 2017.03101, -1822.15112, 14.27892,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3302, 2014.17322, -1822.15552, 14.27892,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3302, 2011.17737, -1821.93140, 14.27892,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3302, 2007.71899, -1821.90161, 14.27892,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3302, 2004.81067, -1821.89661, 14.27890,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3302, 2001.85681, -1821.90686, 14.27890,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3302, 2020.53601, -1821.95752, 14.27892,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3302, 2023.29919, -1821.99377, 14.27890,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3302, 2025.90515, -1822.02173, 14.27890,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3302, 2028.54712, -1822.03870, 14.27890,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3302, 2031.16650, -1822.06189, 14.27890,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3302, 2040.47144, -1822.02539, 14.27890,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3302, 2037.73315, -1821.96655, 14.27890,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(853, 2040.26746, -1833.80103, 12.90844,   0.00000, 0.00000, 27.41999);
	CreateDynamicObject(850, 2004.91968, -1824.96936, 12.63990,   0.00000, 0.00000, 20.88000);
	CreateDynamicObject(851, 2012.80615, -1837.71655, 12.80464,   0.00000, 0.00000, 232.44009);
	CreateDynamicObject(852, 1976.78662, -1829.24878, 12.49683,   0.00000, 0.00000, 76.20000);
	CreateDynamicObject(18212, 2051.03320, -1890.66113, 19.66869,   0.00000, 0.00000, 100.13999);
	CreateDynamicObject(1308, 2039.71106, -1890.58630, 7.87904,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1308, 2028.18604, -1867.79980, 8.58949,   -0.42000, 10.08000, 0.00000);
	CreateDynamicObject(1308, 2062.51929, -1892.33704, 8.32659,   -6.60000, -4.98000, -45.60000);
	CreateDynamicObject(1308, 2070.99902, -1913.95764, 7.87904,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18212, 2042.22815, -1860.40967, 19.66869,   0.00000, 0.00000, 243.59995);
	CreateDynamicObject(1308, 2050.33447, -1864.56982, 8.22960,   -0.42000, 15.00000, -73.97999);
	CreateDynamicObject(1308, 2031.11829, -1858.70398, 9.54853,   9.84000, 25.86000, 93.65993);
	CreateDynamicObject(1308, 2040.51135, -1830.80261, 8.17583,   -0.18000, 5.04000, 126.95998);
	CreateDynamicObject(928, 2043.35596, -1883.56470, 12.81419,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11457, 2046.96594, -1870.53394, 12.13040,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(4227, 2031.13037, -1870.82397, 13.93470,   0.90000, 0.00000, 90.00000);
	CreateDynamicObject(1501, 2031.12744, -1880.94336, 12.41097,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11426, 2042.48975, -1878.92566, 12.54100,   0.00000, 0.00000, -179.34000);
	CreateDynamicObject(5153, 2058.90283, -1892.72205, 12.65720,   0.00000, 293.00000, -90.00000);
	CreateDynamicObject(5153, 2062.46875, -1892.74841, 12.65720,   0.00000, 293.00000, -90.00000);
	CreateDynamicObject(5153, 2061.06152, -1892.73193, 12.65720,   0.00000, 293.00000, -90.00000);
	CreateDynamicObject(3302, 2054.26099, -1892.63013, 13.50805,   90.00000, 0.00000, 187.04279);
	CreateDynamicObject(3260, 2051.50635, -1900.21338, 13.45870,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11459, 2064.86279, -1881.64478, 12.54210,   0.00000, 0.00000, -90.52000);
	CreateDynamicObject(19444, 2043.71204, -1866.56604, 13.49491,   0.00000, 0.00000, 90.84003);
	CreateDynamicObject(19371, 2041.62000, -1867.44580, 13.49233,   0.00000, 0.00000, -56.64000);
	CreateDynamicObject(18660, 2041.95984, -1867.10291, 14.08180,   0.00000, 0.00000, -56.64000);
	CreateDynamicObject(11459, 2064.85669, -1867.68201, 12.54610,   0.00000, 0.00000, -269.51019);
	CreateDynamicObject(3626, 2063.39722, -1874.57214, 13.82080,   0.00000, 0.00000, 91.39900);
	CreateDynamicObject(1410, 2055.79541, -1883.42517, 12.54940,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1410, 2057.79688, -1883.43335, 12.54940,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(11459, 2051.68433, -1880.04089, 12.53388,   0.00000, 0.00000, -180.04010);
	CreateDynamicObject(1763, 2041.18359, -1866.81763, 12.54884,   0.00000, 0.00000, -148.26003);
	CreateDynamicObject(1543, 2041.70703, -1866.70337, 12.54944,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, 2039.23975, -1869.38330, 12.54547,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1280, 2057.14893, -1883.83228, 12.94694,   0.00000, 0.00000, 89.81998);
	CreateDynamicObject(1294, 2045.69922, -1889.44617, 14.88917,   0.00000, 0.00000, -90.54007);
	CreateDynamicObject(4227, 2040.14124, -1881.95276, -0.22397,   0.90000, -90.00000, -89.46001);
	CreateDynamicObject(1429, 2067.88843, -1878.25623, 13.09040,   -17.33999, 5.16001, -178.32001);
	CreateDynamicObject(849, 2066.38892, -1878.09839, 12.82170,   0.00000, 0.00000, -180.96028);
	CreateDynamicObject(851, 2067.54834, -1876.15784, 12.80575,   0.00000, 0.00000, 23.63998);
	CreateDynamicObject(853, 2067.98901, -1871.51074, 12.92060,   0.00000, 0.00000, -134.94009);
	CreateDynamicObject(14861, 2066.40430, -1870.36450, 13.68756,   0.48000, -48.03997, 92.33999);
	CreateDynamicObject(1448, 2068.97949, -1874.79614, 13.07284,   90.00000, 90.00000, 0.00000);
	CreateDynamicObject(1448, 2068.97998, -1875.77405, 13.15200,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1448, 2068.98511, -1876.82568, 13.15400,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1448, 2068.98828, -1877.86304, 13.15530,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1448, 2068.98853, -1878.87000, 13.15530,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(3260, 2068.95435, -1870.98779, 11.75348,   0.00000, 0.00000, 90.24001);
	CreateDynamicObject(1448, 2068.95605, -1872.25391, 13.15200,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(852, 2065.89160, -1871.99243, 12.54408,   0.00000, 0.00000, -88.55999);
	CreateDynamicObject(854, 2066.76880, -1871.98315, 12.76100,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1264, 2066.77563, -1871.86633, 12.96691,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(17969, 2065.01709, -1873.05249, 13.98693,   0.00000, 0.00000, 181.19997);
	CreateDynamicObject(1493, 2052.56445, -1872.15491, 12.54491,   -1.02000, 2.64000, 181.43990);
	CreateDynamicObject(850, 2066.57349, -1875.13599, 12.64570,   0.00000, 0.00000, -360.66003);
	CreateDynamicObject(1486, 2043.39905, -1891.41992, 12.68982,   0.00000, 0.00000, 58.14000);
	CreateDynamicObject(1486, 2043.30408, -1891.41626, 12.68982,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1486, 2043.34656, -1891.41809, 12.99132,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1355, 2044.46033, -1891.18726, 12.73780,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(1356, 2044.48853, -1891.17590, 12.81970,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(2674, 2044.72803, -1890.30200, 12.56467,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1264, 2041.72461, -1890.93481, 12.92623,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3260, 2033.16016, -1900.11951, 13.46410,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1410, 2033.09436, -1898.94849, 12.99528,   0.00000, 90.00000, 93.17999);
	CreateDynamicObject(1410, 2030.94763, -1901.04480, 12.99530,   0.00000, 90.00000, 180.00000);
	CreateDynamicObject(3302, 2032.23242, -1899.34155, 15.46600,   0.00000, 0.00000, 179.37494);
	CreateDynamicObject(1470, 2032.27344, -1901.76392, 14.94782,   0.00000, 0.00000, 270.09000);
	CreateDynamicObject(2074, 2032.48669, -1900.03015, 15.15077,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2558, 2029.34460, -1901.39636, 13.43162,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1410, 2031.04932, -1901.03650, 12.99530,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(2558, 2030.34985, -1900.65454, 13.42233,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1448, 2029.49280, -1901.00818, 15.25960,   90.00000, 90.00000, 90.00000);
	CreateDynamicObject(1448, 2030.03369, -1901.00891, 15.25960,   90.00000, 90.00000, 90.00000);
	CreateDynamicObject(3260, 2045.62292, -1895.46826, 12.53510,   -90.00000, 0.00000, 90.00000);
	CreateDynamicObject(3260, 2042.68640, -1895.48071, 12.53510,   -90.00000, 0.00000, 90.00000);
	CreateDynamicObject(3260, 2041.66943, -1892.80542, 12.53510,   -90.00000, 0.00000, 180.12000);
	CreateDynamicObject(3260, 2043.47290, -1892.70032, 12.53510,   -90.00000, 0.00000, 180.12000);
	CreateDynamicObject(3260, 2045.47632, -1892.81226, 12.53510,   -90.00000, 0.00000, 180.12000);
	CreateDynamicObject(1845, 2042.25391, -1893.47449, 12.57710,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1995, 2042.21863, -1895.15381, 12.22503,   0.00000, 0.00000, -88.91994);
	CreateDynamicObject(1959, 2042.21545, -1895.26367, 13.06370,   0.00000, 0.00000, -89.75990);
	CreateDynamicObject(2712, 2043.16650, -1891.99548, 13.14910,   0.00000, 0.00000, 101.46000);
	CreateDynamicObject(1885, 2043.87329, -1892.15417, 12.57830,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2541, 2046.05334, -1893.45557, 12.57730,   0.00000, 0.00000, -90.42001);
	CreateDynamicObject(1989, 2044.63721, -1895.93176, 12.57860,   0.00000, 0.00000, 179.46001);
	CreateDynamicObject(1513, 2041.01611, -1895.35059, 13.96055,   0.00000, 0.00000, 89.58000);
	CreateDynamicObject(2489, 2041.01587, -1896.00122, 14.24265,   0.00000, 0.00000, 90.05999);
	CreateDynamicObject(2495, 2041.01489, -1896.00647, 13.80890,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2539, 2046.04407, -1892.41492, 12.45825,   0.00000, 0.00000, -90.48002);
	CreateDynamicObject(1744, 2040.73474, -1894.25549, 13.61018,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(918, 2044.72961, -1892.08008, 12.93996,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2749, 2041.03027, -1892.97876, 13.94875,   0.00000, 0.00000, -211.01996);
	CreateDynamicObject(2752, 2041.02332, -1893.31445, 13.94950,   0.00000, 0.00000, 127.68000);
	CreateDynamicObject(2751, 2041.08105, -1893.13831, 13.99790,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1486, 2040.97766, -1894.62659, 14.09450,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1543, 2041.08020, -1894.45581, 13.93970,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1544, 2041.00256, -1894.25684, 13.93980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1543, 2041.07227, -1894.05188, 13.93970,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1544, 2040.99463, -1893.85291, 13.93980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1486, 2040.95776, -1893.61670, 14.09450,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2751, 2041.06628, -1893.44397, 13.99790,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2804, 2042.36462, -1892.92993, 13.27126,   2.10000, 17.94000, 0.00000);
	CreateDynamicObject(2806, 2042.29712, -1893.90515, 13.23690,   1.26000, 13.31999, 18.48000);
	CreateDynamicObject(2074, 2047.32397, -1895.42468, 14.95120,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(12991, 2043.68445, -1894.12878, 12.51820,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1345, 2041.59326, -1884.17822, 13.30000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1368, 2046.91565, -1893.23572, 13.21186,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1308, 2045.62537, -1890.91235, 19.74598,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(1543, 2043.87598, -1890.23779, 12.60180,   0.00000, 90.00000, -31.86000);
	CreateDynamicObject(1413, 2031.03174, -1858.39417, 13.60196,   0.00000, 0.00000, 92.28001);
	CreateDynamicObject(1502, 2065.07910, -1877.68933, 12.26170,   0.00000, 0.00000, 91.12100);
	CreateDynamicObject(11426, 2017.59888, -1836.80664, 12.53830,   0.00000, 0.00000, 88.67997);
	CreateDynamicObject(11426, 2036.96863, -1826.45435, 12.54323,   0.00000, 0.00000, -90.66001);
	CreateDynamicObject(3362, 2028.46448, -1825.32239, 12.54198,   0.00000, 0.00000, -90.29999);
	CreateDynamicObject(11459, 2006.59473, -1835.86169, 12.53918,   0.00000, 0.00000, -103.68001);
	CreateDynamicObject(11426, 2025.56775, -1836.95361, 12.53174,   0.00000, 0.00000, 89.94003);
	CreateDynamicObject(1358, 2039.11707, -1836.85693, 13.72593,   0.00000, 0.00000, -62.69998);
	CreateDynamicObject(11426, 2020.91016, -1825.65564, 12.52110,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(16105, 2011.79553, -1825.81116, 14.32509,   0.00000, 0.00000, 1.08000);
	CreateDynamicObject(676, 2006.54810, -1827.18677, 12.52473,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1223, 2040.31665, -1830.67505, 11.37961,   4.52000, 1.62000, 193.44012);
	CreateDynamicObject(11426, 1998.66150, -1834.10229, 12.55046,   0.00000, 0.00000, 76.01999);
	CreateDynamicObject(11459, 2020.83179, -1836.44299, 15.41240,   0.00000, 0.00000, -93.30001);
	CreateDynamicObject(11426, 1998.50781, -1834.14026, 15.17211,   0.00000, 0.00000, 256.67993);
	CreateDynamicObject(1345, 1974.58276, -1829.22021, 13.30000,   0.00000, 0.00000, 166.79997);
	CreateDynamicObject(1223, 1971.11255, -1826.66406, 11.40040,   359.49829, 0.30000, 105.03840);
	CreateDynamicObject(1442, 1999.57690, -1825.01355, 13.12416,   0.00000, 0.00000, 4.32000);
	CreateDynamicObject(1413, 1974.83093, -1830.73145, 13.82070,   0.00000, 0.00000, -10.62000);
	CreateDynamicObject(1757, 2000.59570, -1823.00696, 12.50940,   0.00000, 0.00000, -27.12000);
	CreateDynamicObject(2670, 2000.59460, -1824.50171, 12.63150,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2673, 1993.64417, -1827.35474, 12.63470,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18663, 2008.14294, -1833.80371, 14.30400,   0.00000, 2.00000, -103.61998);
	CreateDynamicObject(3109, 1984.48035, -1829.19104, 13.76290,   0.00000, 0.00000, -103.25996);
	CreateDynamicObject(674, 2032.29346, -1828.20129, 12.54255,   0.00000, 0.00000, 110.63998);
	CreateDynamicObject(677, 2030.10986, -1837.46643, 12.54484,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3260, 2040.68738, -1892.49731, 12.84580,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3260, 2040.68738, -1894.48523, 12.84580,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3260, 2040.68738, -1895.64514, 12.84580,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1410, 2039.08276, -1896.38135, 12.54940,   0.00000, 90.00000, 180.00000);
	CreateDynamicObject(1410, 2040.00195, -1896.38135, 12.54940,   0.00000, 90.00000, 180.00000);
	CreateDynamicObject(1820, 2061.44849, -1878.78674, 12.60303,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1748, 2061.49634, -1878.36975, 13.10710,   0.00000, 0.00000, 128.97960);
	CreateDynamicObject(2344, 2062.24121, -1878.06616, 13.10777,   0.00000, 0.00000, -67.68000);
	CreateDynamicObject(1759, 2064.32910, -1877.50745, 12.60373,   0.00000, 0.00000, -84.53999);
	CreateDynamicObject(1800, 2061.74438, -1873.80005, 12.28500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2706, 2062.06079, -1870.30640, 14.13542,   0.00000, 0.00000, 1.08000);
	CreateDynamicObject(1841, 2061.54541, -1877.39587, 12.60250,   0.00000, 0.00000, 179.94000);
	CreateDynamicObject(1841, 2061.54541, -1877.06665, 12.60250,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1809, 2061.50684, -1877.25232, 13.07421,   0.00000, 0.00000, 90.29999);
	CreateDynamicObject(1990, 2064.39990, -1870.85242, 12.43640,   0.00000, 0.00000, -87.65997);
	CreateDynamicObject(2417, 2064.40088, -1871.85339, 12.60410,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2159, 2064.60449, -1872.85876, 12.54690,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(918, 2064.45142, -1872.65332, 12.96200,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1737, 2061.84131, -1875.10681, 12.60293,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 2061.70337, -1876.67017, 12.60380,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 2062.84302, -1876.67017, 12.60380,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 2061.75879, -1873.52246, 12.60450,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1722, 2062.94946, -1873.52246, 12.60450,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1666, 2062.18115, -1874.71631, 13.48080,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1666, 2062.88843, -1875.38208, 13.48080,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1485, 2062.87793, -1874.79016, 13.39771,   0.00000, 0.00000, 88.56001);
	CreateDynamicObject(1544, 2062.29663, -1875.16650, 13.38170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14680, 2065.60254, -1873.02856, 13.41180,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1494, 2046.67236, -1896.31042, 12.27080,   0.00000, 0.00000, 90.18000);
	CreateDynamicObject(2074, 2049.41553, -1865.78418, 14.68980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11426, 2056.86597, -1868.61206, 12.54270,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1492, 2031.62732, -1901.04077, 12.54860,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, 2053.69678, -1919.90454, 12.38140,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(676, 2070.24585, -1879.06335, 12.54840,   0.00000, 0.00000, 67.20000);
	CreateDynamicObject(1474, 2056.38623, -1865.61682, 14.06570,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(738, 2018.67590, -1921.31799, 12.54934,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3302, 2053.94116, -1874.18176, 13.52131,   90.00000, 90.00000, 0.00000);
	CreateDynamicObject(3302, 2053.91187, -1873.21838, 13.52131,   90.00000, 90.00000, 0.00000);
	CreateDynamicObject(3302, 2049.91943, -1872.36255, 13.36974,   96.53997, 95.88000, -87.24000);
	CreateDynamicObject(1446, 2053.19849, -1872.14624, 12.70387,   0.00000, 90.00000, 180.53990);
	CreateDynamicObject(792, 2069.27100, -1905.22205, 12.13061,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2255, 2059.99170, -1873.27246, 14.65000,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3302, 2025.82080, -1918.63440, 15.93137,   -1.08000, 6.42000, 0.00000);
	CreateDynamicObject(3302, 2025.71899, -1914.23547, 15.73216,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1450, 2025.59277, -1923.20007, 13.14752,   0.00000, 0.00000, 5.10000);
	CreateDynamicObject(1344, 2025.44299, -1922.20056, 13.33511,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3302, 2025.95947, -1916.67834, 15.93137,   -1.08000, 6.42000, 0.00000);
	CreateDynamicObject(1450, 2025.59045, -1914.65002, 16.17550,   0.00000, 0.00000, 180.83998);
	CreateDynamicObject(3302, 2027.71252, -1909.06348, 15.73216,   -3.24000, -5.46000, 0.00000);
	CreateDynamicObject(3302, 2027.76978, -1907.06812, 15.73216,   -0.60000, -5.58000, 0.00000);
	CreateDynamicObject(3260, 2025.90015, -1910.72754, 15.67090,   -90.00000, 0.00000, 180.12000);
	CreateDynamicObject(3260, 2027.77612, -1910.89832, 15.67090,   -90.00000, 0.00000, 91.25998);
	CreateDynamicObject(1470, 2027.81445, -1909.63586, 15.31295,   0.00000, 0.00000, 270.09000);
	CreateDynamicObject(2074, 2025.65442, -1914.62573, 15.60481,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2074, 2027.96411, -1909.64453, 15.44579,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2677, 2025.94873, -1920.83765, 12.82490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2673, 2027.64563, -1907.51550, 12.64060,   0.00000, 0.00000, 38.15999);
	CreateDynamicObject(2673, 2027.56604, -1909.02478, 12.64060,   0.00000, 0.00000, 51.54000);
	CreateDynamicObject(18665, 2026.09802, -1910.00305, 13.78074,   -1.20000, 1.26000, 88.85999);
	CreateDynamicObject(2674, 2055.99146, -1873.27637, 12.55575,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1502, 2056.06860, -1875.05408, 12.45870,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16780, 2057.87036, -1877.26575, 15.89710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(738, 2052.27466, -1873.03064, 12.27620,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 2037.61121, -1920.80298, 13.80029,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19371, 2032.99597, -1920.80298, 13.80030,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19371, 2031.34900, -1919.28784, 13.80030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3061, 2050.50220, -1908.06189, 13.54008,   0.00000, 0.00000, 263.76001);
	CreateDynamicObject(1447, 2029.47949, -1922.32654, 13.83230,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(1413, 2013.93298, -1922.37341, 13.82640,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2019.20984, -1922.37341, 13.83040,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(5153, 2058.30078, -1905.28992, 12.87147,   0.00000, 293.89999, 90.00000);
	CreateDynamicObject(1308, 2032.15234, -1873.15503, 19.74598,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(1294, 2033.60742, -1873.11401, 14.88920,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1810, 2058.27026, -1872.03333, 12.53504,   0.00000, 0.00000, 72.53999);
	CreateDynamicObject(1712, 2059.47290, -1874.33447, 12.54820,   0.00000, 0.00000, 180.12000);
	CreateDynamicObject(2558, 2045.09277, -1901.61194, 13.35190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1473, 2032.38220, -1903.24731, 15.28660,   -25.02000, 0.00000, 0.00000);


	//-> Villa 2 | By. LFran22
	new Dec_V2 [2];
	new Textura;
	Dec_V2 [1] = CreateObject(19787, 1620.44556, -2144.94824, 15.04750,   0.00000, 0.00000, 180.00000);
	SetObjectMaterial(Dec_V2 [1], 0, 1474, "break_street2", "CJ_SLATEDWOOD", 0 );
	SetObjectMaterial(Dec_V2 [1], 1, 5040, "shopliquor_las", "las69str4", 0 );
	CreateDynamicObject(1445, 1618.48047, -2144.58276, 13.12721,   0.00000, 0.00000, 0.00000);
	Textura = CreateDynamicObject(11459, 1619.96143, -2108.65552, 14.78708,   0.00000, 0.00000, 219.19254);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(3418, 1638.93152, -2107.23242, 14.85486,   0.00000, 0.00000, 35.20171);
	CreateDynamicObject(3285, 1650.94348, -2100.18359, 14.42153,   0.00000, 0.00000, 130.91132);
	CreateDynamicObject(3172, 1653.78223, -2081.91968, 15.80286,   23.34001, 3.06000, 47.62386);
	CreateDynamicObject(19456, 1668.27771, -2176.47876, 14.29465,   0.00000, 0.00000, 269.92630);
	CreateDynamicObject(19456, 1658.68469, -2176.45337, 14.30394,   0.00000, 0.00000, 269.92630);
	CreateDynamicObject(19456, 1639.52344, -2176.43481, 14.29465,   0.00000, 0.00000, 269.92630);
	CreateDynamicObject(19456, 1649.12488, -2176.44312, 14.29465,   0.00000, 0.00000, 269.92630);
	CreateDynamicObject(19456, 1629.98840, -2176.43164, 14.29465,   0.00000, 0.00000, 270.10938);
	CreateDynamicObject(19456, 1620.43530, -2176.44702, 14.29465,   0.00000, 0.00000, 269.92630);
	CreateDynamicObject(19456, 1610.86096, -2176.43896, 14.29465,   0.00000, 0.00000, 269.92630);
	CreateDynamicObject(19456, 1601.22900, -2176.43677, 14.29465,   0.00000, 0.00000, 269.92630);
	CreateDynamicObject(19456, 1591.59888, -2176.43042, 14.29465,   0.00000, 0.00000, 269.92630);
	CreateDynamicObject(19456, 1369.06506, -2185.55298, 13.96143,   0.00000, 0.00000, 332.55774);
	CreateDynamicObject(19456, 1364.83350, -2193.74585, 13.96143,   0.00000, 0.00000, 332.55774);
	CreateDynamicObject(19364, 1362.20593, -2199.53149, 13.96175,   0.00000, 0.00000, 344.68677);
	CreateDynamicObject(19364, 1361.37744, -2202.55811, 13.96175,   0.00000, 0.00000, 344.68677);
	CreateDynamicObject(19456, 1368.96692, -2204.15649, 14.28177,   0.00000, 0.00000, 269.30774);
	CreateDynamicObject(19393, 1362.54614, -2204.09644, 14.28425,   0.00000, 0.00000, 89.59497);
	CreateDynamicObject(19456, 1378.30334, -2204.26489, 14.28177,   0.00000, 0.00000, 269.30774);
	CreateDynamicObject(19456, 1387.71838, -2204.38477, 14.28177,   0.00000, 0.00000, 269.30774);
	CreateDynamicObject(19456, 1397.23047, -2204.48999, 14.28177,   0.00000, 0.00000, 269.30774);
	CreateDynamicObject(19364, 1403.54407, -2204.57129, 14.27742,   0.00000, 0.00000, 89.39352);
	CreateDynamicObject(19364, 1405.95947, -2204.58765, 14.27787,   0.00000, 0.00000, 89.38946);
	CreateDynamicObject(3173, 1619.14636, -2132.19214, 12.43325,   0.00000, 0.00000, 180.05246);
	CreateDynamicObject(3246, 1632.64307, -2099.76392, 16.13409,   17.57999, 0.12000, 40.22337);
	CreateDynamicObject(19364, 1676.27991, -2176.48462, 14.30315,   0.00000, 0.00000, 89.96911);
	CreateDynamicObject(3594, 1657.30908, -2106.00684, 13.14179,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3594, 1654.95496, -2106.23291, 13.61409,   12.96000, -0.78000, 305.57846);
	CreateDynamicObject(11426, 1624.06396, -2103.66992, 15.96208,   0.00000, 0.00000, 310.06320);
	Textura = CreateDynamicObject(11426, 1622.69336, -2102.06445, 18.88465,   0.18000, 0.12000, 310.06320);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	SetDynamicObjectMaterial(Textura, 1, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(3302, 1620.16907, -2102.57324, 22.07358,   16.20002, 0.48000, 43.74180);
	CreateDynamicObject(3302, 1621.78406, -2103.35376, 21.89378,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1437, 1628.39722, -2104.27173, 14.49573,   0.90001, -1.62000, 39.56518);
	CreateDynamicObject(1222, 1637.19397, -2091.93042, 20.08102,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1222, 1636.99951, -2093.05493, 20.08102,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1222, 1637.78113, -2092.68774, 19.99543,   -11.94001, -24.29999, 0.00000);
	CreateDynamicObject(3173, 1623.71899, -2132.63892, 12.43674,   0.00000, 0.00000, 359.90561);
	CreateDynamicObject(11459, 1613.85974, -2171.46753, 12.48006,   0.00000, 0.00000, 0.11121);
	CreateDynamicObject(11426, 1586.75488, -2133.33545, 13.25341,   0.00000, 0.00000, 292.01334);
	CreateDynamicObject(11426, 1593.96973, -2129.99731, 13.34519,   0.00000, 0.00000, 292.01334);
	CreateDynamicObject(19437, 1586.91675, -2176.42969, 14.29513,   0.00000, 0.00000, 269.92462);
	CreateDynamicObject(19456, 1586.04517, -2167.66870, 14.29465,   0.00000, 0.00000, 0.11916);
	CreateDynamicObject(19456, 1586.03125, -2161.49927, 14.29465,   0.00000, 0.00000, 0.11916);
	Textura = CreateDynamicObject(11426, 1615.57837, -2174.01440, 15.37204,   0.00000, 0.00000, 90.15350);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	SetDynamicObjectMaterial(Textura, 1, 16070, "des_stownmain1", "des_brick1", -1);
	Textura = CreateDynamicObject(11459, 1618.62207, -2171.47437, 12.48006,   0.00000, 0.00000, 0.20196);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(3594, 1604.28857, -2173.15527, 13.41908,   -13.14000, -5.21999, 62.86376);
	Textura = CreateDynamicObject(11426, 1613.87830, -2159.44800, 12.46675,   0.00000, 0.00000, 180.15146);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	SetDynamicObjectMaterial(Textura, 1, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11426, 1620.26904, -2158.42261, 12.48565,   0.00000, 0.00000, 0.53564);
	CreateDynamicObject(11426, 1592.33411, -2141.15112, 12.52133,   0.00000, 0.00000, 9.77139);
	CreateDynamicObject(11459, 1613.84631, -2164.93872, 15.39336,   0.00000, 0.00000, 0.11121);
	CreateDynamicObject(11426, 1620.17615, -2148.89233, 12.48565,   0.00000, 0.00000, 1.65279);
	Textura = CreateDynamicObject(11459, 1616.78516, -2149.07886, 15.36239,   0.00000, 0.00000, 90.11360);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1618.58240, -2164.89722, 15.39755,   0.00000, 0.00000, 0.11121);
	CreateDynamicObject(11457, 1650.14490, -2153.74438, 12.00409,   0.00000, 0.00000, 0.29992);
	CreateDynamicObject(1437, 1622.33228, -2170.28540, 10.86351,   -5.69999, -2.40001, 86.09408);
	CreateDynamicObject(19456, 1587.67773, -2152.19604, 14.29465,   0.00000, 0.00000, 339.63126);
	CreateDynamicObject(19364, 1589.90283, -2146.27734, 14.28156,   0.00000, 0.00000, 338.99301);
	CreateDynamicObject(19364, 1587.91492, -2139.10376, 14.30747,   0.00000, 0.00000, 113.93888);
	CreateDynamicObject(19364, 1585.17810, -2140.30640, 14.30747,   0.00000, 0.00000, 113.93888);
	CreateDynamicObject(19364, 1583.23315, -2139.50830, 14.30747,   0.00000, 0.00000, 20.38885);
	CreateDynamicObject(1437, 1590.43860, -2149.76392, 11.04878,   20.40002, 1.13999, 99.27736);
	CreateDynamicObject(11426, 1627.66528, -2153.62329, 12.46571,   0.00000, 0.00000, 91.60246);
	CreateDynamicObject(11426, 1628.09937, -2159.76660, 12.49923,   0.00000, 0.00000, 271.66760);
	CreateDynamicObject(3415, 1627.65405, -2172.78223, 12.54425,   0.00000, 0.00000, 181.36543);
	Textura = CreateDynamicObject(11459, 1635.43860, -2158.92773, 12.53969,   0.00000, 0.00000, 2.00624);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1617.07214, -2156.92920, 15.37327,   0.00000, 0.00000, 270.89621);
	Textura = CreateDynamicObject(11459, 1630.82898, -2159.72900, 15.39174,   0.06000, -0.06000, 271.20233);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(1437, 1636.69238, -2164.10181, 10.90164,   -4.37999, -1.20001, 359.37350);
	CreateDynamicObject(1437, 1610.17883, -2153.46191, 11.10907,   23.82002, 1.43999, 89.71574);
	CreateDynamicObject(11459, 1619.02576, -2152.23340, 18.18015,   0.00000, 0.00000, 180.38097);
	CreateDynamicObject(11459, 1614.75964, -2152.15918, 18.18015,   0.00000, 0.00000, 0.20741);
	Textura = CreateDynamicObject(11426, 1616.51672, -2152.27466, 20.95655,   0.00000, 0.00000, 180.15146);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	SetDynamicObjectMaterial(Textura, 1, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(1437, 1617.38391, -2173.72241, 16.58997,   23.82002, 1.43999, 180.67828);
	CreateDynamicObject(11459, 1616.12903, -2168.54834, 18.20453,   0.00000, 0.00000, 359.65756);
	CreateDynamicObject(1437, 1623.94653, -2146.16602, 11.11226,   -5.69999, -2.40001, 86.09408);
	CreateDynamicObject(1437, 1613.44543, -2145.44238, 13.75354,   -5.69999, -2.40001, 178.32474);
	CreateDynamicObject(1437, 1612.73889, -2157.15332, 20.82239,   -106.38004, -9.06001, 171.01523);
	Textura = CreateDynamicObject(11459, 1592.75623, -2143.94165, 15.39111,   0.00000, 0.00000, 9.22986);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11426, 1650.23730, -2154.77563, 15.00138,   0.00000, 0.00000, 180.81239);
	CreateDynamicObject(1437, 1645.45447, -2150.22266, 10.64543,   -5.69999, -2.40001, 179.12828);
	CreateDynamicObject(1222, 1644.78381, -2157.53735, 15.55927,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1222, 1644.17603, -2156.91675, 15.55927,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11426, 1601.87793, -2115.96606, 15.96208,   3.24000, -0.12000, 302.77161);
	CreateDynamicObject(11426, 1611.28650, -2110.37402, 16.56138,   0.00000, 0.00000, 300.04294);
	CreateDynamicObject(11459, 1606.09961, -2113.32788, 19.34633,   0.00000, 0.00000, 300.29590);
	CreateDynamicObject(3285, 1601.55530, -2136.63574, 14.44428,   0.00000, 0.00000, 0.09519);
	CreateDynamicObject(1294, 1624.40552, -2145.03809, 16.99411,   0.00000, 0.00000, 190.00400);
	CreateDynamicObject(1294, 1647.90125, -2115.74707, 16.95021,   0.00000, 0.00000, 265.29047);
	CreateDynamicObject(1294, 1609.46802, -2146.79980, 16.94133,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1294, 1622.17480, -2166.63770, 17.05860,   0.00000, 0.00000, 237.64781);
	CreateDynamicObject(3415, 1644.19775, -2085.69507, 16.84727,   0.00000, 0.00000, 53.74219);
	CreateDynamicObject(11426, 1636.97290, -2092.89233, 16.69638,   0.00000, 0.00000, 310.06320);
	CreateDynamicObject(19456, 1397.30188, -2204.49976, 14.28177,   0.00000, 0.00000, 269.30774);
	CreateDynamicObject(19364, 1674.72888, -2176.47534, 14.30315,   0.00000, 0.00000, 89.96911);
	CreateDynamicObject(19456, 1586.04517, -2167.66870, 14.29465,   0.00000, 0.00000, 0.11916);
	CreateDynamicObject(19456, 1586.03125, -2161.49927, 14.29465,   0.00000, 0.00000, 0.11916);
	CreateDynamicObject(11426, 1613.80261, -2150.68750, 12.48565,   0.00000, 0.00000, 180.15146);
	CreateDynamicObject(11426, 1594.90967, -2147.21753, 12.51698,   0.00000, 0.00000, 279.66339);
	Textura = CreateDynamicObject(11459, 1624.85083, -2152.35083, 15.39174,   0.00000, 0.00000, 272.13919);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(1294, 1592.10254, -2151.98291, 16.90071,   0.00000, 0.00000, 94.68893);
	CreateDynamicObject(3285, 1674.09167, -2164.39209, 14.42293,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3173, 1661.38733, -2164.60913, 12.52096,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1440, 1614.08252, -2174.58862, 18.81241,   0.00000, 0.00000, 323.37274);
	CreateDynamicObject(1440, 1598.87329, -2136.18262, 13.03566,   0.00000, 0.00000, 291.20172);
	CreateDynamicObject(1440, 1642.50220, -2152.19678, 13.07308,   0.00000, 0.00000, 281.40109);
	CreateDynamicObject(1440, 1655.14075, -2167.21533, 13.05285,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1440, 1642.44006, -2091.92700, 17.09595,   -14.40001, 23.27998, 308.03497);
	CreateDynamicObject(1437, 1617.70764, -2165.38257, 20.87627,   37.44003, -0.24001, 154.89412);
	CreateDynamicObject(19364, 1590.19580, -2143.18457, 14.28156,   0.00000, 0.00000, 9.79869);
	CreateDynamicObject(19364, 1589.65784, -2140.02710, 14.28156,   0.00000, 0.00000, 9.79869);
	CreateDynamicObject(1440, 1643.70789, -2109.78125, 13.05204,   0.00000, 0.00000, 201.10167);
	CreateDynamicObject(18663, 1604.22437, -2157.23828, 17.01056,   6.90000, 1.98000, 269.66165);
	CreateDynamicObject(1265, 1616.62317, -2137.65942, 12.91792,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1616.51111, -2136.70044, 12.97597,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1626.09741, -2162.81665, 12.92868,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1627.04138, -2162.71021, 12.92868,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1624.03333, -2107.62085, 16.17274,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1624.73376, -2106.96509, 16.17274,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11459, 1622.79126, -2122.94409, 12.54011,   0.00000, 0.00000, 271.57547);
	CreateDynamicObject(18451, 1607.61548, -2173.51563, 13.02789,   0.06000, -0.24000, 175.93887);
	CreateDynamicObject(1357, 1622.04858, -2110.05054, 17.90003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1357, 1648.31873, -2167.80835, 12.83433,   0.00000, 0.00000, 354.12683);
	CreateDynamicObject(1357, 1615.02161, -2167.69751, 21.32707,   0.00000, 0.00000, 354.12683);
	CreateDynamicObject(928, 1614.97192, -2167.68628, 21.50391,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(850, 1592.54810, -2143.31836, 18.33216,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1327, 1649.01868, -2105.30078, 12.57813,   -1.37999, 95.03999, 0.00000);
	CreateDynamicObject(1327, 1649.48560, -2105.91504, 12.95820,   21.12001, 111.30001, 0.00000);
	CreateDynamicObject(18661, 1607.06580, -2115.49292, 21.42225,   2.58000, 0.72000, 120.31425);
	CreateDynamicObject(1349, 1664.15063, -2169.46704, 13.08761,   0.00000, 0.00000, 150.13782);
	CreateDynamicObject(1439, 1601.25745, -2142.75098, 12.64334,   0.00000, 0.00000, 359.27933);
	CreateDynamicObject(1358, 1580.91553, -2127.73975, 16.37700,   0.48000, -6.42000, 137.04080);
	CreateDynamicObject(2096, 1629.81311, -2151.99170, 15.36691,   0.00000, 0.00000, 103.63960);
	CreateDynamicObject(1432, 1645.02197, -2154.30688, 15.22928,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1670, 1645.11145, -2154.19775, 15.85747,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1475, 1596.07532, -2150.07031, 13.98136,   0.00000, 0.00000, 10.07113);
	CreateDynamicObject(1474, 1627.15576, -2150.35840, 14.01657,   0.00000, 0.00000, 179.70227);
	CreateDynamicObject(1472, 1595.93567, -2133.08154, 13.13095,   -0.12000, -1.68000, 22.12518);
	CreateDynamicObject(18660, 1594.93384, -2142.67065, 17.38776,   4.80000, 1.62000, 189.09607);
	CreateDynamicObject(1441, 1599.92041, -2120.48364, 16.11941,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18667, 1616.73340, -2146.68335, 17.13652,   -13.97998, 4.08000, 270.90161);
	Textura = CreateDynamicObject(11459, 1588.61401, -2132.30518, 16.39544,   0.00000, 0.00000, 293.97293);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(1349, 1599.78381, -2115.98364, 19.38826,   0.00000, 0.00000, 150.13782);
	CreateDynamicObject(1327, 1594.77490, -2127.99658, 16.58644,   21.12001, 111.30001, 0.00000);
	CreateDynamicObject(1265, 1671.74829, -2164.81323, 12.95311,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1670.79858, -2164.84497, 12.95311,   0.00000, 0.00000, 0.00000);
	Textura = CreateDynamicObject(11426, 1594.11816, -2166.81128, 12.51160,   0.00000, 0.00000, 356.99109);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	SetDynamicObjectMaterial(Textura, 1, 16070, "des_stownmain1", "des_brick1", -1);
	Textura = CreateDynamicObject(11459, 1607.77209, -2165.96777, 15.41141,   0.00000, 0.00000, 89.49216);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	Textura = CreateDynamicObject(11459, 1600.01245, -2165.86890, 15.42549,   0.00000, 0.00000, 89.07381);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1595.99487, -2159.38843, 12.53596,   0.00000, 0.00000, 88.81885);
	CreateDynamicObject(11459, 1608.01074, -2159.65088, 15.40982,   0.00000, 0.00000, 89.49216);
	CreateDynamicObject(11459, 1600.11023, -2159.54761, 15.42549,   0.00000, 0.00000, 89.07381);
	CreateDynamicObject(19366, 1591.49670, -2172.21094, 14.24875,   0.00000, 0.00000, 357.88266);
	CreateDynamicObject(19366, 1591.39453, -2174.77148, 14.24875,   0.00000, 0.00000, 357.88266);
	Textura = CreateDynamicObject(11459, 1607.88013, -2163.01636, 18.25950,   0.00000, 0.00000, 359.65756);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1600.40894, -2163.00903, 18.25950,   0.00000, 0.00000, 180.08076);
	CreateDynamicObject(1440, 1600.97424, -2157.45190, 13.04984,   0.00000, 0.00000, 90.36057);
	CreateDynamicObject(3415, 1637.73315, -2172.73096, 12.54425,   0.00000, 0.00000, 181.36543);
	CreateDynamicObject(12957, 1595.10962, -2118.61621, 16.76161,   0.00000, 0.00000, 297.21097);
	CreateDynamicObject(1432, 1612.96680, -2109.11450, 19.60347,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1670, 1612.99573, -2109.28101, 20.23211,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2096, 1596.75769, -2146.14429, 15.43199,   0.00000, 0.00000, 113.62296);
	CreateDynamicObject(1474, 1595.33032, -2140.15820, 13.97730,   0.00000, 0.00000, 99.46394);
	CreateDynamicObject(1437, 1590.85852, -2161.07568, 11.10907,   23.82002, 1.43999, 89.71574);
	CreateDynamicObject(1437, 1594.93872, -2161.10669, 13.86469,   23.82002, 1.43999, 89.71574);
	CreateDynamicObject(19439, 1623.45642, -2159.93359, 15.81036,   -179.34012, 90.36012, 271.21829);
	CreateDynamicObject(19439, 1625.79871, -2156.65332, 15.79041,   -179.34012, 90.36012, 181.57033);
	CreateDynamicObject(19439, 1614.00684, -2160.91919, 18.16244,   -180.18001, 98.64011, 92.56479);
	CreateDynamicObject(19439, 1617.02148, -2160.27588, 15.76190,   -179.82010, 90.36012, 90.40891);
	CreateDynamicObject(1432, 1593.77502, -2168.55859, 15.51989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1670, 1593.68506, -2168.45044, 16.16631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19439, 1617.02136, -2151.18457, 15.80214,   -179.82010, 90.36012, 92.56479);
	CreateDynamicObject(1449, 1621.83398, -2123.96899, 15.60145,   74.40005, 163.74002, 286.90701);
	CreateDynamicObject(18659, 1598.02917, -2162.56299, 20.13318,   5.33997, 3.54003, 0.00000);
	CreateDynamicObject(18663, 1637.77832, -2158.02173, 14.27664,   -3.36000, 1.86000, 182.51271);
	CreateDynamicObject(18662, 1640.65527, -2093.10547, 18.48678,   -24.72000, 1.62000, 311.28915);
	CreateDynamicObject(11426, 1655.20422, -2140.96924, 12.52722,   0.00000, 0.00000, 359.98160);
	CreateDynamicObject(11426, 1655.21204, -2131.89209, 12.52722,   0.00000, 0.06000, 359.98160);
	Textura = CreateDynamicObject(11459, 1653.65039, -2124.44458, 12.54017,   0.00000, 0.00000, 270.36298);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1647.43176, -2130.29688, 12.54017,   0.00000, 0.00000, 90.11827);
	CreateDynamicObject(11426, 1649.03406, -2137.77686, 12.52722,   0.00000, 0.00000, 180.11610);
	Textura = CreateDynamicObject(11459, 1647.53284, -2145.37793, 12.54017,   0.00000, 0.00000, 270.36298);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11426, 1639.78577, -2133.88770, 12.52722,   0.00000, 0.00000, 0.49902);
	CreateDynamicObject(11459, 1638.34839, -2141.27173, 12.54017,   0.00000, 0.00000, 270.04083);
	CreateDynamicObject(11426, 1645.87244, -2122.80688, 12.52722,   0.00000, 0.00000, 359.89072);
	CreateDynamicObject(19372, 1643.88855, -2149.42603, 14.18073,   0.00000, 0.00000, 89.91051);
	CreateDynamicObject(11426, 1638.42822, -2147.01855, 12.52722,   0.00000, 0.00000, 269.69043);
	Textura = CreateDynamicObject(11459, 1639.72095, -2124.83423, 12.54017,   0.00000, 0.00000, 0.29167);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1656.56750, -2150.37158, 12.54017,   0.00000, 0.00000, 179.93259);
	CreateDynamicObject(11426, 1633.75452, -2135.02246, 12.52722,   0.00000, 0.00000, 180.11610);
	CreateDynamicObject(19372, 1643.01355, -2118.95459, 14.18073,   0.00000, 0.00000, 89.91051);
	CreateDynamicObject(11426, 1652.28735, -2118.61963, 12.52272,   0.00000, 0.00000, 89.88715);
	CreateDynamicObject(19372, 1652.71436, -2143.65576, 13.72720,   0.00000, 0.00000, 89.91051);
	CreateDynamicObject(19372, 1657.38794, -2128.06641, 14.18073,   0.00000, 0.00000, 89.91051);
	CreateDynamicObject(19372, 1648.24780, -2126.38550, 14.18073,   0.00000, 0.00000, 359.99411);
	Textura = CreateDynamicObject(11459, 1632.30090, -2127.69385, 12.54017,   0.00000, 0.00000, 90.11827);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1632.22473, -2121.65527, 12.54017,   0.00000, 0.00000, 270.36298);
	CreateDynamicObject(19372, 1636.48657, -2119.45190, 13.94198,   0.00000, 0.00000, 89.91051);
	CreateDynamicObject(19372, 1643.68262, -2132.46094, 13.92917,   0.00000, 0.00000, 89.91051);
	CreateDynamicObject(19372, 1642.16125, -2143.47974, 13.92598,   0.00000, 0.00000, 89.91051);
	Textura = CreateDynamicObject(11459, 1629.94849, -2142.32031, 12.54017,   0.00000, 0.00000, 226.20827);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(19372, 1631.15100, -2146.47681, 13.92598,   0.00000, 0.00000, 45.99052);
	CreateDynamicObject(19372, 1627.79675, -2125.31055, 13.94198,   0.00000, 0.00000, 80.02738);
	CreateDynamicObject(19372, 1623.61414, -2150.12476, 13.77793,   0.00000, 0.00000, 92.53290);
	CreateDynamicObject(19372, 1632.76709, -2153.73560, 13.62861,   0.00000, 0.00000, 90.98085);
	CreateDynamicObject(19372, 1632.38416, -2163.08008, 13.90803,   0.00000, 0.00000, 93.36282);
	CreateDynamicObject(19372, 1617.62952, -2163.29175, 14.19802,   0.00000, 0.00000, 91.21001);
	CreateDynamicObject(19372, 1616.40369, -2145.11523, 14.04283,   0.00000, 0.00000, 90.98085);
	CreateDynamicObject(1294, 1617.29700, -2120.36133, 17.39622,   0.00000, 0.00000, 317.13052);
	CreateDynamicObject(1294, 1604.22693, -2130.15967, 16.94133,   0.00000, 0.00000, 187.97992);
	CreateDynamicObject(18667, 1644.83765, -2143.00171, 14.22229,   11.40000, 0.60000, 270.89999);
	CreateDynamicObject(18661, 1642.09302, -2126.01636, 14.51607,   5.34000, 1.44000, 180.42809);
	CreateDynamicObject(18665, 1655.07898, -2135.89697, 14.44137,   -22.02000, 1.73999, 90.61730);
	CreateDynamicObject(18663, 1656.32800, -2118.59717, 14.27664,   -3.36000, 1.86000, 182.51271);
	CreateDynamicObject(18660, 1632.07922, -2119.30029, 14.45194,   3.36000, 1.74000, 270.51535);
	CreateDynamicObject(18659, 1627.88977, -2143.61719, 14.47626,   11.94000, 1.74000, 45.89664);
	CreateDynamicObject(1474, 1630.64563, -2135.50586, 13.97730,   0.00000, 0.00000, 270.53564);
	CreateDynamicObject(1475, 1651.57080, -2115.40430, 14.04996,   0.00000, 0.00000, 180.60278);
	CreateDynamicObject(1475, 1646.04358, -2138.36914, 14.02293,   0.00000, 0.00000, 269.97961);
	CreateDynamicObject(1437, 1645.20203, -2141.03760, 11.11226,   -5.69999, -2.40001, 268.85382);
	CreateDynamicObject(19439, 1613.16846, -2155.14429, 15.64244,   -179.82010, 90.36012, -0.01522);
	CreateDynamicObject(11459, 1652.31238, -2141.34131, 15.41748,   0.00000, 0.00000, 270.05185);
	Textura = CreateDynamicObject(11459, 1652.29785, -2146.96094, 15.37444,   0.00000, 0.00000, 90.11827);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1651.43433, -2124.45532, 15.42715,   0.00000, 0.00000, 180.96375);
	Textura = CreateDynamicObject(11459, 1641.43481, -2144.41895, 15.45513,   0.00000, 0.00000, 90.11827);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(3302, 1645.69861, -2136.54199, 15.84009,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3302, 1643.69116, -2136.52539, 15.84009,   0.00000, 0.12000, 0.00000);
	CreateDynamicObject(3302, 1642.58496, -2136.49561, 15.98574,   0.06000, 7.74000, 0.00000);
	CreateDynamicObject(3302, 1644.07410, -2141.04736, 15.84009,   0.00000, 0.12000, 0.00000);
	CreateDynamicObject(3302, 1645.68359, -2134.08008, 15.74904,   -0.84000, 0.36000, 0.00000);
	CreateDynamicObject(3302, 1644.15710, -2134.15259, 15.75987,   -1.80000, 0.00000, 0.00000);
	CreateDynamicObject(3302, 1642.67480, -2133.97876, 15.98574,   0.06000, 7.74000, 0.00000);
	CreateDynamicObject(3302, 1642.73303, -2141.07251, 15.78011,   0.00000, 0.12000, 0.00000);
	CreateDynamicObject(3302, 1647.20288, -2142.47998, 15.92294,   1.68000, -7.80000, 88.76640);
	CreateDynamicObject(1413, 1639.44592, -2119.11865, 13.91303,   0.00000, 0.00000, 184.85124);
	CreateDynamicObject(11459, 1644.23511, -2128.19336, 15.37455,   0.00000, 0.00000, 90.11827);
	Textura = CreateDynamicObject(11459, 1652.26831, -2132.75708, 15.39441,   0.00000, 0.00000, 90.11827);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1633.81128, -2139.36597, 15.45513,   0.00000, 0.00000, 1.56598);
	Textura = CreateDynamicObject(11459, 1634.53918, -2123.99170, 15.39224,   0.00000, 0.00000, 90.11827);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1636.01624, -2131.46582, 15.35896,   0.00000, 0.00000, 235.58910);
	Textura = CreateDynamicObject(11459, 1643.52893, -2137.38208, 15.41748,   0.00000, 0.00000, 259.18420);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(19439, 1639.24097, -2138.36108, 15.79743,   -176.40021, 90.42012, 0.01703);
	CreateDynamicObject(19439, 1652.25891, -2137.25073, 15.81042,   -179.34012, 90.36012, 270.74133);
	CreateDynamicObject(19439, 1652.15344, -2129.46509, 15.71211,   -179.34012, 90.36012, 270.74133);
	CreateDynamicObject(19439, 1639.18237, -2129.44629, 15.62452,   -182.99997, 89.94015, 1.73302);
	CreateDynamicObject(19372, 1635.91553, -2135.52905, 16.75073,   0.00000, 0.00000, 180.02545);
	CreateDynamicObject(19439, 1637.87305, -2144.10425, 15.58757,   -178.44014, 92.64008, 0.01703);
	CreateDynamicObject(850, 1644.18750, -2128.57324, 18.31611,   0.00000, 0.00000, -26.58000);
	CreateDynamicObject(850, 1650.44751, -2147.30420, 18.31611,   0.00000, 0.00000, -26.58000);
	CreateDynamicObject(1327, 1649.31689, -2133.09131, 18.29851,   14.82002, 103.44006, 26.45680);
	CreateDynamicObject(19439, 1613.38281, -2175.54932, 15.48258,   -179.82010, 90.36012, -0.01522);
	CreateDynamicObject(19439, 1615.39587, -2175.59375, 15.50255,   -179.82010, 90.36012, -0.01522);
	CreateDynamicObject(19439, 1617.69140, -2175.61570, 15.52360,   -179.82010, 90.36012, -0.01522);
	CreateDynamicObject(1440, 1635.35840, -2123.54346, 18.78001,   0.00000, 0.00000, 201.10167);
	CreateDynamicObject(1440, 1640.28870, -2144.16602, 18.78001,   0.00000, 0.00000, 201.10167);
	CreateDynamicObject(18667, 1653.82251, -2124.69824, 17.13652,   -33.53995, -1.32000, 0.81769);
	CreateDynamicObject(1265, 1656.76038, -2120.09351, 13.01031,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1656.70532, -2119.21021, 13.01031,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1630.90942, -2141.34570, 15.68649,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1630.94275, -2142.35742, 15.68649,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1439, 1647.08704, -2166.15112, 12.61186,   0.00000, 0.00000, 270.54608);
	CreateDynamicObject(18661, 1640.35205, -2146.79980, 17.38565,   23.93999, 1.08000, 90.31322);
	CreateDynamicObject(1349, 1598.83093, -2116.79541, 19.38826,   0.00000, 0.00000, 150.13782);
	CreateDynamicObject(679, 1611.61548, -2146.02930, 12.55302,   0.00000, 0.00000, 329.72894);
	CreateDynamicObject(692, 1615.23669, -2115.03784, 15.18691,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(692, 1613.90649, -2114.94775, 15.18691,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(692, 1614.39880, -2115.82544, 15.05510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(747, 1601.82153, -2129.58057, 12.97075,   -19.01998, -18.12006, 0.00000);
	CreateDynamicObject(759, 1611.63635, -2145.55078, 11.80538,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(759, 1637.25793, -2097.35913, 15.68770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1349, 1664.14319, -2167.84497, 13.08761,   0.00000, 0.00000, 149.73344);
	CreateDynamicObject(756, 1667.39392, -2157.54199, 12.56929,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(756, 1668.15466, -2157.59424, 12.56929,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1219, 1650.79297, -2175.03711, 12.44487,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1224, 1650.59143, -2175.00610, 13.23940,   0.00000, 0.00000, 332.18036);
	CreateDynamicObject(1224, 1652.27246, -2175.00659, 13.17610,   2.10000, 9.48000, 0.00000);
	CreateDynamicObject(1224, 1651.48743, -2175.13794, 14.39651,   0.00000, 0.00000, 8.02065);
	CreateDynamicObject(18659, 1620.97681, -2164.86890, 16.71527,   11.82000, 2.88000, 179.72270);
	CreateDynamicObject(18666, 1630.72107, -2162.11987, 17.15436,   3.90000, -1.68000, -88.68001);
	CreateDynamicObject(1437, 1644.31763, -2117.50854, 11.20163,   -5.69999, -2.40001, 178.32474);
	CreateDynamicObject(1437, 1629.95947, -2132.68530, 11.20163,   -5.69999, -2.40001, 271.19910);
	CreateDynamicObject(1437, 1658.30188, -2155.71265, 10.90273,   -5.69999, -2.40001, 355.81390);
	CreateDynamicObject(1338, 1599.91370, -2147.86426, 13.23821,   0.00000, 0.00000, 322.30685);
	CreateDynamicObject(1441, 1654.27661, -2117.85742, 16.08320,   0.00000, 0.00000, 152.17532);
	CreateDynamicObject(1572, 1616.37109, -2127.68628, 13.07296,   0.00000, 0.00000, 226.84360);
	CreateDynamicObject(924, 1624.57874, -2149.57178, 12.69327,   0.00000, 0.00000, 18.42786);
	CreateDynamicObject(924, 1624.33752, -2149.00879, 12.86046,   -14.04001, 9.60000, 59.05508);
	CreateDynamicObject(1265, 1631.96338, -2153.11597, 12.76747,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1632.89819, -2153.18945, 12.76747,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1632.03516, -2152.26294, 12.76747,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1632.25391, -2152.87671, 13.14664,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1349, 1610.12744, -2149.15210, 13.10683,   0.00000, 0.00000, -53.52000);
	CreateDynamicObject(1265, 1610.29126, -2149.19995, 13.44926,   0.00000, 0.00000, 76.64393);
	CreateDynamicObject(1265, 1610.41736, -2149.51782, 13.84918,   0.00000, 0.00000, 76.64393);
	CreateDynamicObject(1265, 1610.08643, -2148.94385, 13.84918,   0.00000, 0.00000, 76.64393);
	CreateDynamicObject(2671, 1604.26160, -2168.51050, 12.59196,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2672, 1603.95972, -2168.29004, 12.83100,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1438, 1605.04260, -2170.67993, 12.53538,   0.00000, 0.00000, 20.78330);
	CreateDynamicObject(923, 1631.43762, -2172.68457, 16.59693,   0.00000, 0.00000, 66.87695);
	CreateDynamicObject(923, 1632.17432, -2173.75757, 16.49814,   0.00000, 0.00000, 43.20970);
	CreateDynamicObject(1265, 1606.00879, -2120.53760, 15.44567,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1605.28821, -2121.05249, 15.45538,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1606.10461, -2121.27979, 15.26279,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1606.81897, -2120.87427, 15.19256,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1605.37427, -2121.65088, 15.15640,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1606.31836, -2120.85938, 15.65358,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1605.47070, -2121.22168, 15.65358,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2671, 1609.43250, -2131.97900, 12.56216,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2672, 1649.12219, -2114.89795, 12.82607,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2670, 1648.04602, -2115.21460, 12.68957,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(928, 1606.87537, -2120.30420, 15.42841,   28.56002, 11.22001, 0.00000);
	CreateDynamicObject(3632, 1591.93970, -2175.88257, 13.03646,   0.00000, 0.00000, -136.49997);
	CreateDynamicObject(3632, 1591.97852, -2175.20288, 13.03646,   0.00000, 0.00000, -136.49997);
	CreateDynamicObject(3632, 1592.48547, -2175.52344, 13.03645,   0.00000, 0.00000, -136.49997);
	CreateDynamicObject(2654, 1592.05310, -2175.48584, 13.71823,   0.00000, 0.00000, 25.03427);
	CreateDynamicObject(1362, 1604.28210, -2130.65430, 13.11975,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1431, 1600.83862, -2164.52881, 21.64005,   0.00000, 0.00000, 346.93268);
	CreateDynamicObject(1448, 1616.54102, -2127.68579, 12.81900,   0.00000, 0.00000, 146.49939);
	CreateDynamicObject(1448, 1616.65222, -2127.83765, 12.94766,   0.00000, 0.00000, 95.09274);
	CreateDynamicObject(1265, 1616.63770, -2127.79590, 13.39451,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1593.46594, -2136.22485, 13.07319,   9.54000, -0.48000, 0.00000);
	CreateDynamicObject(1265, 1592.66248, -2136.42236, 13.07319,   9.54000, -0.48000, 0.00000);
	CreateDynamicObject(1265, 1593.22754, -2136.35645, 13.51866,   9.54000, -0.48000, 0.00000);
	CreateDynamicObject(1362, 1634.44116, -2137.93066, 18.90028,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1362, 1633.67029, -2137.96704, 18.90028,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1362, 1634.08411, -2137.17773, 18.90028,   0.00000, 0.00000, 0.00000);
	Textura = CreateDynamicObject(11459, 1670.52588, -2120.74365, 12.54490,   0.00000, 0.00000, 720.66321);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11426, 1661.31580, -2139.86890, 12.52720,   0.00000, 0.06000, 0.00000);
	CreateDynamicObject(11457, 1665.01086, -2148.44458, 12.00410,   0.00000, 0.00000, 88.02000);
	CreateDynamicObject(11459, 1674.66016, -2139.61206, 12.54140,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(11459, 1668.60889, -2136.37183, 12.54140,   0.00000, 0.00000, 360.00000);
	Textura = CreateDynamicObject(11426, 1676.27930, -2133.21802, 12.52720,   0.00000, 0.06000, 180.00000);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	SetDynamicObjectMaterial(Textura, 1, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11426, 1664.29309, -2119.18213, 12.52720,   0.00000, 0.06000, 90.24000);
	Textura = CreateDynamicObject(11426, 1662.49792, -2128.88647, 12.52720,   0.00000, 0.06000, 0.00000);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	SetDynamicObjectMaterial(Textura, 1, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1670.79431, -2128.68579, 12.54140,   0.00000, 0.00000, -90.95996);
	CreateDynamicObject(11457, 1668.22095, -2104.42944, 12.00410,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11459, 1661.28845, -2105.35718, 12.54490,   0.00000, 0.00000, 900.48340);
	CreateDynamicObject(11426, 1673.14026, -2095.96216, 12.52720,   0.00000, 0.06000, 0.00000);
	Textura = CreateDynamicObject(11426, 1661.31104, -2085.84253, 12.52720,   0.00000, 0.06000, 0.00000);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	SetDynamicObjectMaterial(Textura, 1, 16070, "des_stownmain1", "des_brick1", -1);
	Textura = CreateDynamicObject(11459, 1687.12976, -2082.34692, 12.54490,   0.00000, 0.00000, 811.14368);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1675.38684, -2087.00562, 12.54490,   0.00000, 0.00000, 811.14368);
	CreateDynamicObject(11426, 1677.10510, -2079.83179, 12.52720,   0.00000, 0.06000, -90.00000);
	CreateDynamicObject(11426, 1669.50659, -2079.86230, 12.52720,   0.00000, 0.06000, -90.00000);
	Textura = CreateDynamicObject(11459, 1666.89063, -2141.51123, 15.39440,   0.00000, 0.00000, 270.00000);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1676.26978, -2138.10986, 15.39440,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11459, 1672.48120, -2130.30298, 15.39440,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11459, 1665.67017, -2133.15894, 15.39440,   0.00000, 0.00000, 47.15994);
	CreateDynamicObject(11459, 1664.63745, -2122.78931, 15.39440,   0.00000, 0.00000, 1.14000);
	Textura = CreateDynamicObject(11459, 1664.44885, -2104.78784, 15.39440,   0.00000, 0.00000, -90.00000);
	SetDynamicObjectMaterial(Textura, 0, 16070, "des_stownmain1", "des_brick1", -1);
	CreateDynamicObject(11459, 1673.47925, -2100.93701, 15.39440,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11459, 1673.39612, -2098.05298, 15.43440,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11459, 1664.60815, -2082.43286, 15.43440,   0.00000, 0.00000, 311.75995);
	CreateDynamicObject(11459, 1675.37964, -2083.78125, 15.43440,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1440, 1663.34033, -2122.33203, 13.03887,   0.00000, 0.00000, 181.30170);
	CreateDynamicObject(1441, 1672.44348, -2108.17627, 13.25909,   0.00000, 0.00000, 152.17532);
	CreateDynamicObject(759, 1667.24683, -2084.01563, 11.80538,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(759, 1676.47083, -2127.74316, 11.80538,   0.00000, 0.00000, -8.52000);
	CreateDynamicObject(850, 1665.89038, -2133.15112, 18.35578,   0.00000, 0.00000, -26.58000);
	CreateDynamicObject(1440, 1672.58264, -2147.11719, 18.58946,   0.00000, 0.00000, 201.10167);
	CreateDynamicObject(1431, 1666.94336, -2098.08350, 18.61689,   0.00000, 0.00000, 311.83264);
	CreateDynamicObject(1327, 1674.93823, -2100.08154, 18.56856,   21.12001, 111.30001, -104.88001);
	CreateDynamicObject(17969, 1675.84814, -2101.09131, 17.14520,   0.00000, 0.00000, 0.18000);
	CreateDynamicObject(17969, 1678.64331, -2137.77173, 17.14520,   0.00000, 180.00000, 0.18000);
	CreateDynamicObject(1362, 1666.47217, -2090.45142, 13.18242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1338, 1667.85583, -2144.60571, 13.22706,   0.00000, 0.00000, 322.30685);
	CreateDynamicObject(1308, 1672.67041, -2124.65039, 8.48392,   356.85840, 0.00000, -1.57080);


	//-> Hospital Interior | By. Nexus
	CreateDynamicObject(7419, -183.66400, -1735.85437, 632.45679,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(7419, -230.80400, -1754.06995, 632.45679,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(2885, -200.89941, -1741.50000, 678.40002,   270.00000, 0.00000, 0.00000);
	CreateDynamicObject(2885, -211.79980, -1734.79980, 678.40002,   270.00000, 180.00000, 180.00000);
	CreateDynamicObject(2885, -200.89941, -1734.79980, 678.40002,   270.00000, 0.00000, 0.00000);
	CreateDynamicObject(2885, -211.79980, -1741.50000, 678.40002,   270.00000, 179.99451, 179.99451);
	CreateDynamicObject(2885, -200.89999, -1748.19995, 678.40002,   270.00000, 0.00000, 0.00000);
	CreateDynamicObject(2885, -200.89941, -1754.89941, 678.40002,   270.00000, 0.00000, 0.00000);
	CreateDynamicObject(2885, -200.89941, -1761.59961, 678.40002,   270.00000, 0.00000, 0.00000);
	CreateDynamicObject(2885, -200.89999, -1768.30005, 678.40002,   270.00000, 0.00000, 0.00000);
	CreateDynamicObject(2885, -211.79980, -1748.19922, 678.40002,   270.00000, 0.00000, 0.00000);
	CreateDynamicObject(2885, -211.80000, -1754.90002, 678.40002,   270.00000, 0.00000, 0.00000);
	CreateDynamicObject(2885, -211.79980, -1761.59961, 678.40002,   270.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -207.39999, -1739.69995, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -207.39900, -1739.69995, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -202.60001, -1734.80005, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19460, -206.20000, -1734.80103, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1569, -206.00000, -1734.90002, 674.79999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, -203.00000, -1734.90002, 674.79999,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19387, -196.69922, -1744.50000, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19357, -201.39941, -1736.50000, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -201.40039, -1736.50000, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -196.60001, -1738.01599, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19460, -196.67200, -1738.01697, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19449, -195.39941, -1742.89941, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -195.40100, -1742.90002, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -201.10001, -1739.69995, 674.09998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -201.10260, -1739.69922, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -199.88379, -1744.50000, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19460, -191.15039, -1744.49902, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19460, -191.15039, -1744.50098, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -199.07500, -1744.49902, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -199.07500, -1744.50098, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -199.88499, -1744.49805, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19460, -201.09900, -1739.59998, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -201.39941, -1746.09961, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19387, -201.39941, -1749.29980, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -201.39999, -1752.50000, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19387, -201.39999, -1755.69995, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -201.39999, -1758.90002, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -201.40199, -1746.09998, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -201.40100, -1746.92505, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19387, -201.39941, -1762.09961, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -206.20000, -1763.69995, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -201.40100, -1751.63696, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -201.40199, -1753.32495, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -201.40100, -1758.03699, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -201.40199, -1759.72498, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -201.40100, -1764.43701, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -206.30000, -1763.69897, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19387, -207.39941, -1746.09961, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19387, -207.39941, -1758.89941, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19357, -207.39999, -1762.09998, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -195.39941, -1752.50000, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -195.39941, -1762.09961, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -196.59961, -1758.79980, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19460, -206.00000, -1733.29980, 672.59998,   270.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -203.00000, -1733.30005, 672.59998,   270.00000, 179.99451, 0.00000);
	CreateDynamicObject(19441, -203.71400, -1733.30103, 677.39801,   0.00000, 270.00000, 90.00000);
	CreateDynamicObject(19441, -205.28700, -1733.30200, 677.39697,   0.00000, 270.00000, 90.00000);
	CreateDynamicObject(19449, -214.60001, -1758.90002, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -214.59961, -1749.29980, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -214.60001, -1739.69995, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -212.19922, -1734.79980, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -199.80000, -1744.50110, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -201.39799, -1746.09998, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -201.39900, -1746.92505, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -201.39900, -1751.63696, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -201.39700, -1753.32422, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -201.39900, -1758.03699, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -201.39799, -1759.72498, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -195.40100, -1752.50000, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -195.40039, -1762.09961, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -196.64941, -1758.79883, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19460, -196.64941, -1758.80078, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19460, -207.39799, -1740.51404, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -207.39700, -1761.23706, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -207.39799, -1764.40002, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -214.59900, -1758.80005, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -214.59801, -1749.19995, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -214.59900, -1739.59998, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -215.80000, -1734.80115, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19460, -207.40100, -1739.69995, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -207.40137, -1740.51367, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -207.40120, -1761.23706, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19368, -207.40100, -1764.39941, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3034, -204.39941, -1763.59961, 676.70001,   0.00000, 0.00000, 179.99451);
	CreateDynamicObject(1523, -201.37000, -1756.44995, 674.73999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1523, -201.36914, -1750.04980, 674.73999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1523, -201.37000, -1762.84998, 674.73999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2686, -201.51300, -1744.90002, 676.40002,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2685, -201.51300, -1745.40002, 676.40002,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2688, -207.29980, -1747.59961, 676.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(16101, -201.50000, -1748.50000, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -201.50000, -1750.00000, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -201.50000, -1754.90002, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -201.50000, -1756.40002, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -201.50000, -1761.30005, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -201.50000, -1762.80005, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -201.32910, -1748.50000, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -201.33000, -1750.00000, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -201.33000, -1754.90002, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -201.33000, -1756.40002, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -201.33000, -1761.30005, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -201.33000, -1762.80005, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14487, -211.80000, -1751.50000, 678.09998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14487, -211.79980, -1729.59961, 678.09998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14487, -218.59961, -1729.59961, 678.09998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14487, -218.60001, -1754.30005, 678.09998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14487, -190.89941, -1753.59961, 678.09998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14487, -190.89999, -1735.19995, 678.09998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14487, -190.89941, -1731.69922, 678.09998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1523, -207.36914, -1746.84961, 674.73999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1523, -207.37000, -1759.65002, 674.73999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(16101, -207.32910, -1745.29980, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -207.33000, -1746.81995, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -207.33000, -1758.09998, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -207.33000, -1759.62000, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -207.50000, -1759.59998, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -207.50000, -1758.09998, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -207.50000, -1746.80005, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -207.50000, -1745.29980, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1999, -200.50000, -1740.39941, 674.79999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2009, -199.50000, -1743.79980, 674.79999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1671, -199.50000, -1739.30005, 675.20001,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1671, -199.29980, -1743.00000, 675.20001,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19387, -213.00000, -1742.69922, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19357, -209.79980, -1742.69922, 673.90100,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19357, -209.00000, -1742.70020, 673.90002,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19449, -212.20000, -1742.69897, 679.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19466, -208.50000, -1742.69995, 676.40002,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19466, -210.74023, -1742.69922, 676.40002,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -209.00000, -1742.69897, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -210.66400, -1742.69800, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -215.37399, -1742.69897, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -215.37500, -1742.70020, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -209.00000, -1742.70117, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -210.66400, -1742.70215, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1523, -213.78906, -1742.72949, 674.73999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -212.29980, -1742.79980, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -213.80000, -1742.80005, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -213.80000, -1742.59998, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -212.30000, -1742.59998, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -207.50000, -1742.69922, 666.90002,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14487, -218.60001, -1731.80005, 678.09998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2007, -213.69922, -1735.39941, 674.79999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2007, -212.69922, -1735.39941, 674.79999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3657, -206.89999, -1754.59998, 675.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2811, -201.89941, -1735.39941, 674.79999,   0.00000, 0.00000, 139.99329);
	CreateDynamicObject(2811, -201.89999, -1763.19995, 674.79999,   0.00000, 0.00000, 219.99573);
	CreateDynamicObject(2811, -206.89999, -1763.19995, 674.79999,   0.00000, 0.00000, 149.99573);
	CreateDynamicObject(3657, -206.89999, -1739.59998, 675.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2811, -206.89941, -1735.39941, 674.79999,   0.00000, 0.00000, 221.98975);
	CreateDynamicObject(2688, -201.50000, -1760.50000, 676.40002,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19460, -201.50000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -207.30000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -207.30000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -207.30000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -201.50000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -201.50000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -204.80000, -1734.90002, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -206.39999, -1763.59998, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -214.50000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -214.50000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -214.50000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -207.50000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -207.50000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -207.50000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -214.39999, -1734.90002, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -212.20000, -1742.80005, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -212.20000, -1742.59998, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -196.60001, -1744.40002, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -196.60001, -1738.09998, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -196.60001, -1744.59998, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -196.60001, -1758.69995, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -196.60001, -1758.90002, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -195.50000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -195.50000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -195.50000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19357, -209.00000, -1748.80103, 673.90100,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19449, -207.39999, -1752.50000, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -207.40100, -1751.59998, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -207.39900, -1751.59998, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -207.40199, -1753.30005, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -207.39799, -1753.30005, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3657, -206.89999, -1750.40002, 675.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19387, -213.00000, -1748.80005, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19449, -212.20000, -1748.80103, 679.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19357, -209.80000, -1748.80005, 673.90002,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19466, -208.60001, -1748.80005, 676.40002,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19466, -210.84050, -1748.80005, 676.40002,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19449, -212.20000, -1756.19995, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1523, -213.78900, -1748.82996, 674.73999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -212.20000, -1748.69995, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -212.20000, -1748.90002, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -212.20000, -1756.09998, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(19460, -212.30000, -1756.19897, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -209.00000, -1748.79895, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -210.66299, -1748.79797, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -210.66211, -1748.80273, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -209.00000, -1748.80176, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -215.37500, -1748.79895, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19368, -215.37500, -1748.80078, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3397, -208.20000, -1750.80005, 674.79999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3396, -208.20000, -1754.40002, 674.79999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -212.20000, -1756.30005, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(2132, -209.89999, -1755.59998, 674.79999,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2007, -212.30000, -1755.59998, 674.79999,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2007, -213.30000, -1755.59998, 674.79999,   0.00000, 0.00000, 179.99451);
	CreateDynamicObject(3394, -213.80000, -1752.19995, 674.79999,   0.00000, 0.00000, 179.99451);
	CreateDynamicObject(2146, -211.10001, -1751.90002, 675.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14532, -210.70000, -1753.50000, 675.79999,   0.00000, 0.00000, 14.00000);
	CreateDynamicObject(19460, -212.29980, -1756.20020, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3657, -201.89941, -1746.50000, 675.29999,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2811, -211.81781, -1742.24426, 674.79999,   0.00000, 0.00000, 251.98975);
	CreateDynamicObject(2811, -214.15007, -1748.04089, 674.79999,   0.00000, 0.00000, 295.98798);
	CreateDynamicObject(16101, -207.50000, -1748.80005, 666.90002,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3394, -213.80000, -1761.50000, 674.79999,   0.00000, 0.00000, 179.99451);
	CreateDynamicObject(2007, -214.00000, -1758.59998, 674.79999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2007, -214.00000, -1757.59998, 674.79999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2132, -210.10001, -1763.09998, 674.79999,   0.00000, 0.00000, 179.99451);
	CreateDynamicObject(3396, -208.20000, -1761.69995, 674.79999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3397, -210.80000, -1756.69995, 674.79999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2146, -211.20000, -1759.90002, 675.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11237, -230.00000, -1760.40002, 698.90002,   0.00000, 180.00000, 180.00000);
	CreateDynamicObject(3053, -211.20000, -1760.40002, 678.40002,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -211.20000, -1760.40002, 688.09998,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(2596, -214.30000, -1760.09998, 676.70001,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2596, -214.30000, -1760.80005, 676.70001,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2596, -214.30000, -1760.80005, 677.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2596, -214.30000, -1760.09998, 677.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(16101, -222.60001, -1760.40002, 677.90002,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(16101, -214.50000, -1760.40002, 666.19385,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3808, -207.25000, -1757.80005, 676.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3808, -212.00000, -1742.84998, 676.29999,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3808, -212.00000, -1748.66003, 676.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19460, -201.30000, -1749.50000, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -201.30000, -1759.09998, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(2009, -199.50000, -1747.80005, 674.79999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1999, -200.50000, -1746.09998, 674.80103,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1671, -199.39999, -1746.90002, 675.20001,   0.00000, 0.00000, 264.00000);
	CreateDynamicObject(1671, -199.39999, -1745.09998, 675.20001,   0.00000, 0.00000, 278.00000);
	CreateDynamicObject(2009, -196.80000, -1753.80005, 674.80103,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1999, -197.80000, -1752.09998, 674.79999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1999, -198.70000, -1752.80005, 674.79999,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2009, -199.70000, -1751.09998, 674.80103,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1671, -197.60001, -1753.00000, 675.20001,   0.00000, 0.00000, 282.00000);
	CreateDynamicObject(1671, -196.80000, -1751.30005, 675.20001,   0.00000, 0.00000, 260.00000);
	CreateDynamicObject(1671, -199.80000, -1752.09998, 675.20001,   0.00000, 0.00000, 84.00000);
	CreateDynamicObject(1671, -199.80000, -1753.80005, 675.20001,   0.00000, 0.00000, 104.00000);
	CreateDynamicObject(2009, -196.00000, -1757.19995, 674.79999,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1999, -197.70000, -1758.19995, 674.80103,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1671, -196.89999, -1757.30005, 675.20001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1671, -198.70000, -1758.00000, 675.20001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2202, -196.00000, -1746.19995, 674.78003,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2811, -195.89999, -1745.09998, 674.79999,   0.00000, 0.00000, 115.99329);
	CreateDynamicObject(2007, -196.00000, -1748.30005, 674.79999,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2007, -196.00000, -1749.30005, 674.79999,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2811, -200.89999, -1758.30005, 674.79999,   0.00000, 0.00000, 141.98816);
	CreateDynamicObject(2611, -198.20000, -1758.67004, 676.79999,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2611, -201.27000, -1746.40002, 676.59998,   0.00000, 0.00000, 89.99451);
	CreateDynamicObject(19449, -215.80000, -1763.69995, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19449, -201.39999, -1768.50000, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, -195.39999, -1771.69995, 676.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -201.39900, -1767.57996, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -195.40100, -1771.69995, 673.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19460, -195.50000, -1768.50000, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19460, -201.30000, -1768.69995, 679.90002,   0.00000, 179.99451, 0.00000);
	CreateDynamicObject(19449, -196.60001, -1772.40002, 676.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19460, -196.60001, -1772.39905, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19460, -196.60001, -1772.30005, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(14487, -190.89999, -1778.19995, 678.09998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1789, -211.80000, -1753.09998, 675.29999,   0.00000, 0.00000, 290.00000);
	CreateDynamicObject(1789, -211.89941, -1759.19922, 675.29999,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1800, -199.00000, -1759.50000, 674.70001,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1800, -199.00000, -1771.50000, 674.70001,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1800, -199.00000, -1767.59998, 674.70001,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1800, -199.00000, -1763.69995, 674.70001,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1800, -200.70000, -1766.90002, 674.70001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -200.70000, -1773.30005, 674.70001,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1789, -196.20000, -1770.69995, 675.29999,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1789, -196.20000, -1766.69995, 675.29999,   0.00000, 0.00000, 179.99451);
	CreateDynamicObject(1789, -196.20000, -1762.90002, 675.29999,   0.00000, 0.00000, 179.99451);
	CreateDynamicObject(1789, -196.30000, -1760.69995, 675.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1789, -200.50000, -1766.19995, 675.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1789, -200.50000, -1769.40002, 675.29999,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19460, -216.00000, -1763.59998, 679.90002,   0.00000, 179.99451, 90.00000);
	CreateDynamicObject(1999, -197.50000, -1740.40002, 674.79999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1671, -196.50000, -1739.30005, 675.20001,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19460, -215.89999, -1763.69897, 673.29999,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(16101, -212.30000, -1748.69995, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -213.80000, -1748.69995, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -213.80000, -1748.90002, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, -212.30000, -1748.90002, 666.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2852, -206.80000, -1742.80005, 675.28003,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2315, -206.80000, -1742.40002, 674.79999,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2855, -206.70000, -1743.69995, 675.29999,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14782, -207.81520, -1738.64648, 675.77350,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1368, -210.13393, -1735.39819, 675.46796,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19176, -214.55238, -1745.80981, 676.14948,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2811, -214.15262, -1743.50281, 674.79999,   0.00000, 0.00000, 295.98798);


	//-> Hospital Exterior | By. NúO
	CreateDynamicObject(1320, 1242.09998, -1286.40002, 14.20000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1320, 1226.50000, -1274.59998, 14.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 1180.46167, -1305.56616, 13.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 1180.46167, -1311.44897, 13.08421,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(4641, 1163.50000, -1734.80005, 14.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(4641, 1163.19995, -1747.09998, 14.30000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1374, 1161.40002, -1746.69995, 13.60000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1374, 1161.69995, -1735.19995, 13.30000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(983, 1140.00000, -1740.80005, 13.10000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(983, 1129.90002, -1740.90002, 13.10000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1150.59998, -1740.80005, 13.10000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(983, 1161.00000, -1740.90002, 13.10000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(983, 1120.19995, -1740.90002, 13.10000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1111.30005, -1740.80005, 13.10000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1215, 1115.59998, -1740.90002, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1107.30005, -1740.90002, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1125.19995, -1740.90002, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1135.30005, -1740.80005, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1145.59998, -1740.90002, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1155.80005, -1740.90002, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1164.80005, -1740.90002, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1237, 1102.00000, -1749.09998, 12.40000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1101.69995, -1752.69995, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1101.69995, -1759.40002, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1101.69995, -1766.09998, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1101.69995, -1773.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1077.50000, -1777.00000, 13.00000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(983, 1084.30005, -1777.00000, 13.00000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(983, 1091.30005, -1777.00000, 13.00000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(983, 1063.59998, -1777.00000, 13.00000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(983, 1070.80005, -1777.00000, 13.00000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(983, 1090.30005, -1735.90002, 13.20000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(983, 1098.09998, -1777.00000, 13.00000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1237, 1101.69995, -1776.69995, 12.30000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1237, 1059.69995, -1776.80005, 12.30000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1059.40002, -1773.30005, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1059.40002, -1766.40002, 13.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1059.40002, -1759.69995, 13.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1059.40002, -1753.00000, 13.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1059.40002, -1746.19995, 13.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1059.40002, -1739.69995, 13.20000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1069.69995, -1735.90002, 13.20000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(983, 1083.40002, -1735.90002, 13.20000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(983, 1076.50000, -1735.90002, 13.20000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1063.00000, -1735.90002, 13.20000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1237, 1059.40002, -1736.09998, 12.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1237, 1101.19995, -1736.19995, 12.60000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1097.40002, -1736.00000, 13.30000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1280, 1155.30005, -1734.59998, 13.20000,   0.00000, 0.00000, 272.00000);
	CreateDynamicObject(1280, 1147.09998, -1734.69995, 13.20000,   0.00000, 0.00000, 272.00000);
	CreateDynamicObject(1280, 1139.69995, -1734.69995, 13.20000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1280, 1132.19995, -1734.80005, 13.20000,   0.00000, 0.00000, 272.00000);
	CreateDynamicObject(3037, 214.98000, 1875.66003, 14.22000,   0.00000, 0.00000, 89.82000);
	CreateDynamicObject(18756, 207.14999, 1872.88000, 14.09000,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(18756, 203.14999, 1876.66003, 14.09000,   0.00000, 0.00000, 88.80000);
	CreateDynamicObject(982, 1172.91003, -1355.26001, 26.37000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(982, 1172.88000, -1372.18005, 26.37000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(982, 1150.10999, -1372.30005, 26.37000,   0.00000, 0.00000, 179.88000);
	CreateDynamicObject(982, 1172.88000, -1372.18005, 26.37000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(982, 1150.17004, -1353.68005, 26.37000,   0.00000, 0.00000, 179.88000);
	CreateDynamicObject(983, 1169.68994, -1385.07996, 26.21000,   0.00000, 0.00000, 89.64000);
	CreateDynamicObject(983, 1163.32996, -1385.04004, 26.21000,   0.00000, 0.00000, 89.64000);
	CreateDynamicObject(983, 1156.94995, -1385.05005, 26.21000,   0.00000, 0.00000, 90.48000);
	CreateDynamicObject(983, 1153.22998, -1385.07996, 26.21000,   0.00000, 0.00000, 90.48000);
	CreateDynamicObject(620, 1183.93994, -1414.05005, 11.90000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3749, 1141.30005, -1294.59998, 18.40000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3089, 1160.69995, -1342.50000, 27.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2922, 1162.50000, -1342.50000, 27.20000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3934, 1162.20862, -1373.52966, 25.66000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8661, 1171.32117, -1364.24011, 13.27640,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19450, 1143.92957, -1384.93201, 14.21308,   0.00000, 0.00000, -90.11994);
	CreateDynamicObject(1411, 1141.73730, -1384.68701, 16.88195,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, 1151.28723, -1384.93738, 14.21308,   0.00000, 0.00000, -90.11994);
	CreateDynamicObject(1411, 1147.00244, -1384.74744, 16.88195,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1411, 1152.23816, -1384.75549, 16.88195,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, 1086.23462, -1362.43176, 14.11969,   0.00000, 0.00000, -90.06004);
	CreateDynamicObject(1411, 1085.14624, -1362.24048, 15.82552,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1411, 1090.31543, -1362.24341, 15.82552,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(10183, 1146.21960, -1362.93945, 12.82513,   -0.24000, -0.36000, -44.58001);
	CreateDynamicObject(19450, 1139.13452, -1380.18213, 14.21308,   0.00000, 0.00000, -180.23988);
	CreateDynamicObject(19450, 1139.16711, -1373.16394, 14.21308,   0.00000, 0.00000, -180.23988);
	CreateDynamicObject(19450, 1134.33594, -1368.42297, 14.21308,   0.00000, 0.00000, -90.11994);
	CreateDynamicObject(1411, 1139.32629, -1382.27661, 16.88200,   0.00000, 0.00000, -90.05990);
	CreateDynamicObject(1411, 1139.32935, -1377.01636, 16.88200,   0.00000, 0.00000, -90.05990);
	CreateDynamicObject(1411, 1139.35132, -1371.79590, 16.88200,   0.00000, 0.00000, -90.05990);
	CreateDynamicObject(1411, 1136.56067, -1368.19678, 16.88195,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1411, 1139.37073, -1371.00464, 16.88200,   0.00000, 0.00000, -90.05990);
	CreateDynamicObject(14414, 1187.71936, -1355.92859, 10.05500,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1280, 1180.88928, -1334.40417, 12.95841,   0.00000, 0.00000, 180.47992);
	CreateDynamicObject(1280, 1180.88928, -1330.40417, 12.95840,   0.00000, 0.00000, 180.47990);
	CreateDynamicObject(1280, 1180.88928, -1316.88599, 12.95840,   0.00000, 0.00000, 180.47990);
	CreateDynamicObject(1280, 1180.88928, -1313.13403, 12.95840,   0.00000, 0.00000, 180.47990);
	CreateDynamicObject(739, 1231.69507, -1316.08496, 12.73440,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(739, 1231.69507, -1362.89600, 12.73440,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(739, 1231.69507, -1339.01697, 12.73440,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 1245.58411, -1383.58691, 15.11800,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1232, 1245.58411, -1370.64868, 15.11800,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1232, 1245.58411, -1357.42261, 15.11800,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1232, 1245.58411, -1344.50208, 15.11800,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1232, 1245.58411, -1331.27271, 15.11800,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1232, 1245.58411, -1318.30469, 15.11800,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1232, 1245.58411, -1305.06067, 15.11800,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1232, 1245.58411, -1292.20251, 15.11800,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1232, 1216.45276, -1292.20251, 15.33660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 1216.45276, -1305.06067, 15.33660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 1216.45276, -1318.30469, 15.33660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 1216.32031, -1331.27271, 15.33660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 1216.32031, -1344.48694, 15.33660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 1216.32031, -1357.42261, 15.33660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 1216.32031, -1370.64868, 15.33660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 1216.32031, -1383.57666, 15.33660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 1231.75122, -1362.61121, 13.40820,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 1231.75122, -1338.93030, 13.40820,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19121, 1231.75122, -1315.62744, 13.40820,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(869, 1177.78735, -1313.87646, 13.55844,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(869, 1175.28516, -1315.84973, 13.55840,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(869, 1174.92053, -1313.90393, 13.55840,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(869, 1177.98315, -1315.95154, 13.55840,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(882, 1177.58203, -1314.87122, 12.63780,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(869, 1175.24719, -1331.75256, 13.55840,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(869, 1178.11621, -1331.68677, 13.55840,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(869, 1175.34631, -1333.49622, 13.55840,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(869, 1178.08655, -1333.70886, 13.55840,   0.00000, 0.00000, -12.24000);
	CreateDynamicObject(882, 1177.58203, -1332.34619, 12.63780,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(18652, 1184.69092, -1298.95874, 14.38760,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18652, 1184.69495, -1297.30066, 14.38760,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3934, 1162.20862, -1358.43250, 25.67200,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19447, 1171.69373, -1324.40857, 16.01234,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19447, 1171.68420, -1323.10083, 16.01234,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 1171.83276, -1323.73413, 16.05090,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 1171.84875, -1323.73413, 16.05090,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 1171.86084, -1323.73413, 16.05090,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 1171.86877, -1323.73413, 16.05090,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 1171.87683, -1323.73413, 16.05090,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 1171.88477, -1323.73413, 16.05090,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 1171.93469, -1325.24316, 14.39620,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1569, 1171.93066, -1322.25098, 14.39620,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1240, 1171.98584, -1324.47144, 15.53420,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1240, 1171.98584, -1323.03052, 15.53420,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1232, 1189.98218, -1382.72546, 15.04870,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1232, 1189.90503, -1342.27637, 15.04870,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1232, 1189.90503, -1292.97644, 15.04870,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1232, 1189.90503, -1367.63855, 15.04870,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1232, 1189.90503, -1302.32410, 15.04870,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1444, 1186.11218, -1342.46997, 13.36460,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19325, 1181.31299, -1360.66821, 13.71620,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1502, 1181.36084, -1357.36694, 13.27390,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1502, 1181.31299, -1354.34326, 13.27390,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19325, 1181.31299, -1367.31116, 13.71620,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 1181.31299, -1367.17871, 16.48060,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(9339, 1181.30505, -1367.17871, 17.52580,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14394, 1174.05127, -1361.45898, 12.63740,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19379, 1167.69226, -1361.45898, 13.36520,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19379, 1169.12817, -1365.43176, 8.26400,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19379, 1169.12817, -1357.47473, 8.26400,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19377, 1171.95081, -1361.45898, 10.54132,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, 1176.10217, -1359.14050, 17.94340,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1176.10217, -1368.76636, 17.94340,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19786, 1171.96289, -1361.45898, 14.84666,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2026, 1172.50842, -1361.45898, 15.99987,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2309, 1175.00647, -1361.45898, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1175.00647, -1359.92981, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1175.00647, -1362.97229, 13.24801,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1176.15698, -1362.97229, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1177.30518, -1362.97229, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1178.39124, -1362.97229, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1179.48999, -1362.97229, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1176.15698, -1361.45898, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1176.15698, -1359.92981, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1177.30518, -1359.92981, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1177.30518, -1361.45898, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1178.39124, -1359.92981, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1178.39124, -1361.45898, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1179.48999, -1361.45898, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1179.48999, -1359.92981, 13.24800,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2026, 1174.78735, -1361.45898, 17.85980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1177.07654, -1361.45898, 17.85980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1179.22168, -1361.45898, 17.85980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1177.07654, -1362.97229, 17.85980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1177.07654, -1359.92981, 17.85981,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1174.78735, -1359.92981, 17.85980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1174.78735, -1362.97229, 17.85980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1179.22168, -1362.97229, 17.85980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1179.22168, -1359.92981, 17.85980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 1181.31299, -1367.28967, 12.60330,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 1173.90784, -1357.93848, 12.56330,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(9339, 1173.90784, -1353.96106, 12.56330,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(882, 1183.85449, -1343.09436, 12.63780,   0.00000, 0.00000, -195.53999);
	CreateDynamicObject(882, 1183.85449, -1353.20703, 12.63780,   0.00000, 0.00000, -127.38000);
	CreateDynamicObject(882, 1183.85449, -1348.14832, 12.63780,   0.00000, 0.00000, -44.75999);
	CreateDynamicObject(870, 1183.31152, -1365.93799, 13.37814,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1183.81543, -1364.22632, 13.37814,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1182.94922, -1362.88025, 13.37814,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1183.93384, -1362.30481, 13.37814,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1182.88733, -1360.62378, 13.37814,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1184.04895, -1359.91675, 13.37814,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1183.15076, -1359.36267, 13.37810,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(870, 1184.05847, -1361.44861, 13.37810,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(870, 1183.24744, -1364.94629, 13.37810,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(870, 1184.27075, -1365.73706, 13.37810,   0.00000, 0.00000, 197.58002);
	CreateDynamicObject(870, 1183.21484, -1361.96936, 13.37810,   0.00000, 0.00000, 197.58002);
	CreateDynamicObject(870, 1184.31311, -1362.62354, 13.37810,   0.00000, 0.00000, 202.08002);


	//-> Plaza Central | By. NúO
	new PlazaC [2];
	PlazaC [0] = CreateObject(3985, 1479.56250, -1631.45313, 12.07810,   0.00000, 0.00000, 0.00000, 500000.0);
	SetObjectMaterial(PlazaC [0], 0, 10399, "countryclbgnd_sfs", "dirt64b2", 0 ); // Tierra de arboles
	SetObjectMaterial(PlazaC [0], 1, 3464, "vegashse2", "pinkwall01_64", 0 ); // Estructuras
	SetObjectMaterial(PlazaC [0], 2, 3464, "vegashse2", "pinkwall01_64", 0 ); // Concreto de arboles
	SetObjectMaterial(PlazaC [0], 3, 14563, "triad_main", "casinowall1", 0 ); // Suelo

	PlazaC [1] = CreateObject(4186, 1479.55469, -1693.14063, 19.57810,   0.00000, 0.00000, 0.00000, 500000.0);
	SetObjectMaterial(PlazaC [1], 0, 10399, "countryclbgnd_sfs", "dirt64b2", 0 ); // Tierra de arboles
	SetObjectMaterial(PlazaC [1], 1, 3464, "vegashse2", "pinkwall01_64", 0 ); // Estructuras
	SetObjectMaterial(PlazaC [1], 2, 3464, "vegashse2", "pinkwall01_64", 0 ); // Concreto de arboles
	SetObjectMaterial(PlazaC [1], 3, 14563, "triad_main", "casinowall1", 0 ); // Suelo
	SetObjectMaterial(PlazaC [1], 4, 3464, "vegashse2", "pinkwall01_64", 0 ); // Bola


	//-> Bar cerca de Hospital | By. LCV
	CreateDynamicObject(5130, 1178.18677, -1389.14001, 15.20000,   0.00000, 0.00000, 45.00000);
	CreateDynamicObject(5130, 1178.18677, -1412.31592, 15.20000,   0.00000, 0.00000, 225.00000);
	CreateDynamicObject(19454, 1178.18677, -1399.91003, 18.10600,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19435, 1178.18677, -1405.52832, 18.10600,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(3850, 1179.75989, -1397.09998, 18.63700,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1179.75989, -1400.71997, 18.63700,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1179.75989, -1404.38000, 18.63700,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1179.75989, -1402.57996, 18.74000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1179.75989, -1406.21350, 18.74000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1179.75989, -1398.92004, 18.74000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1179.75989, -1395.28601, 18.74000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1297, 1238.14001, -1390.12000, 15.64000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(792, 1276.68994, -1413.62000, 12.72000,   356.85999, 0.00000, 3.14000);
	CreateDynamicObject(792, 1317.41003, -1413.62000, 12.72000,   356.85999, 0.00000, 3.14000);
	CreateDynamicObject(3850, 1259.92004, -1421.87000, 14.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1259.92004, -1418.40002, 14.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1259.92004, -1425.32996, 14.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1261.64001, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1265.08997, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1268.54004, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1272.01001, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1275.45996, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1278.91003, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1282.37000, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1285.82996, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1289.29004, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1215, 1291.20996, -1416.82996, 14.53000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1302.21997, -1416.82996, 14.53000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1325.01001, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1321.56995, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1318.13000, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1314.69995, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1311.25000, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1307.80005, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3850, 1304.34998, -1416.67004, 14.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3851, 1265.55005, -1425.02002, 15.15000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3851, 1276.81995, -1425.02002, 15.15000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3851, 1288.09998, -1425.02002, 15.15000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3851, 1299.42004, -1425.02002, 15.15000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3851, 1310.72998, -1425.02002, 17.36000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3851, 1317.81006, -1425.02002, 15.15000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3851, 1317.82996, -1425.02002, 17.36000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3851, 1310.72998, -1425.02002, 15.15000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3851, 1299.42004, -1425.02002, 17.38000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3851, 1288.09998, -1425.02002, 17.36000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3851, 1276.81995, -1425.02002, 17.36000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3851, 1265.55005, -1425.02002, 17.36000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1569, 1295.27002, -1425.06995, 13.94000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 1298.26001, -1425.06995, 13.94000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1679, 1262.75000, -1422.56006, 14.43000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1679, 1267.43005, -1419.48999, 14.43000,   0.00000, 0.00000, 343.48001);
	CreateDynamicObject(1679, 1272.38000, -1422.69995, 14.43000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1679, 1278.19995, -1419.38000, 14.43000,   0.00000, 0.00000, 32.75000);
	CreateDynamicObject(1679, 1283.30005, -1422.70996, 14.43000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1679, 1289.39001, -1419.12000, 14.43000,   0.00000, 0.00000, 32.75000);
	CreateDynamicObject(1215, 1176.60449, -1406.21350, 18.74000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1176.60449, -1404.38000, 18.63700,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1176.60449, -1402.57996, 18.74000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1176.60449, -1400.71997, 18.63700,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3850, 1176.60449, -1397.09998, 18.63700,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1176.60449, -1398.92004, 18.74000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1176.60449, -1395.28601, 18.74000,   0.00000, 0.00000, 0.00000);


	//-> Departamento Commerce | By. NúO
	new Hotel_Commerce [1];
	Hotel_Commerce [0] = CreateObject(14675, 1719.75000, -1655.76563, 30.19531,   0.00000, 0.00000, 0.00000, 500000.0);
	SetObjectMaterial(Hotel_Commerce [0], 8, 14702, "masmall3int2", "DinerFloor", 0 ); // Suelo de madera
	SetObjectMaterial(Hotel_Commerce [0], 9, 14707, "labig3int2", "beigehotel_128", 0 ); // Suelo de concreto

	CreateDynamicObject(14674, 1721.63281, -1655.18750, 24.31250,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1533, 1700.13281, -1666.40625, 19.21090,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1537, 1700.13281, -1669.42188, 19.21090,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(700, 1721.64258, -1655.64185, 20.10572,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1721.70776, -1655.66943, 20.08139,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1280, 1724.49353, -1655.51245, 19.43130,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1280, 1719.07874, -1655.51245, 19.43130,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1280, 1721.82532, -1658.57483, 19.43130,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1280, 1721.80530, -1652.52161, 19.43130,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(863, 1730.48035, -1647.63049, 19.83940,   0.00000, 0.00000, 68.88000);
	CreateDynamicObject(863, 1730.47266, -1655.44434, 19.83940,   0.00000, 0.00000, 201.12006);
	CreateDynamicObject(863, 1712.73242, -1655.52246, 19.83940,   0.00000, 0.00000, 94.97999);
	CreateDynamicObject(863, 1712.73694, -1663.35620, 19.83940,   0.00000, 0.00000, 71.52000);
	CreateDynamicObject(2011, 1720.94128, -1642.15845, 19.44802,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2011, 1718.04602, -1642.19434, 19.44802,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2011, 1723.67798, -1642.22351, 19.44802,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2011, 1729.72778, -1642.31787, 19.44802,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(848, 1722.51587, -1620.98987, 19.54505,   0.00000, 0.00000, 12.60000);
	CreateDynamicObject(848, 1722.20801, -1616.34473, 15.46732,   0.00000, 0.00000, -41.15999);
	CreateDynamicObject(18691, 1722.13611, -1620.80396, 20.26812,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18691, 1722.11804, -1615.88562, 16.04172,   0.00000, 0.00000, 0.00000);
	CreateObject(9321, 1702.27478, -1628.93054, 13.91325,   0.00000, 0.00000, 180.24001, 500000.0);


	//-> Telefe Interior | By. NúO
	CreateDynamicObject(8434, 663.49408, -1435.68640, 1086.02795,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8434, 652.11200, -1387.43970, 1086.02795,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(10615, 654.56531, -1361.61816, 1075.74268,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 634.81927, -1401.86511, 1085.98901,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 637.80829, -1401.85706, 1085.98901,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(8434, 707.30286, -1420.91150, 1086.02795,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(8434, 619.74164, -1406.13513, 1086.02795,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 682.03705, -1418.45679, 1087.97803,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 682.03699, -1404.61426, 1087.97803,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, 682.01782, -1410.25256, 1085.41821,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, 682.01782, -1412.87549, 1085.41821,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18981, 681.35992, -1411.43982, 1090.42212,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 656.42419, -1411.43982, 1090.42212,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18981, 631.50909, -1411.43982, 1090.42212,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1569, 668.51892, -1401.85706, 1085.98901,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1569, 665.56329, -1401.86511, 1085.98901,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 668.51892, -1421.25586, 1085.98901,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1569, 665.56329, -1421.25586, 1085.98901,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 637.80829, -1421.25586, 1085.98901,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1569, 634.81927, -1421.25586, 1085.98901,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1253, 667.05127, -1401.83521, 1088.93896,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1253, 636.31970, -1401.83521, 1088.93896,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19617, 667.04187, -1421.30701, 1089.07837,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11711, 636.31427, -1421.27588, 1088.93909,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 690.05560, -1412.84778, 1087.97803,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(16101, 684.35962, -1412.87549, 1085.41821,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8434, 670.15405, -1383.50574, 1086.02795,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(18981, 681.35992, -1386.63818, 1090.42212,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1714, 687.64722, -1398.38501, 1085.97864,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2180, 687.11615, -1399.82495, 1085.99121,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1253, 687.62653, -1400.28845, 1086.47949,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11737, 687.62543, -1401.07349, 1085.99255,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1723, 682.61450, -1407.04199, 1085.97449,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2026, 687.64722, -1399.83911, 1089.91357,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2002, 682.64020, -1401.55200, 1085.98792,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14699, 692.85168, -1416.70605, 1088.35974,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14699, 685.04523, -1416.70605, 1088.35974,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14699, 688.65973, -1416.70605, 1088.35974,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14699, 692.85168, -1421.96851, 1088.35974,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14699, 688.65973, -1421.96851, 1088.35974,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14699, 685.04523, -1421.96851, 1088.35974,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19172, 687.56421, -1397.91870, 1088.28540,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(948, 682.51819, -1404.23901, 1085.96716,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(948, 682.51819, -1407.79114, 1085.96716,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19786, 692.97223, -1406.05066, 1087.98889,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19893, 687.65558, -1399.82507, 1086.78687,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19818, 687.27496, -1399.60266, 1086.87769,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1510, 688.07483, -1399.60242, 1086.79895,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1485, 687.96777, -1399.57837, 1086.82666,   -30.00000, 0.00000, -23.04000);
	CreateDynamicObject(11729, 692.61133, -1413.82874, 1085.98718,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, 692.61133, -1414.48206, 1085.98718,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, 692.61133, -1415.13782, 1085.98718,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, 692.61133, -1415.77502, 1085.98718,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, 692.61133, -1416.42078, 1085.98718,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, 692.61133, -1417.72827, 1085.98718,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, 692.61133, -1418.39319, 1085.98718,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, 692.61133, -1419.05664, 1085.98718,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, 692.61133, -1419.71033, 1085.98718,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11729, 692.61133, -1420.36914, 1085.98718,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(11730, 692.61133, -1417.07312, 1085.98718,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2372, 683.97803, -1420.76050, 1085.95068,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2372, 686.57770, -1420.76050, 1085.95068,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2381, 685.94409, -1420.94470, 1086.60034,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2382, 683.82440, -1420.94470, 1086.57202,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2382, 682.88202, -1420.94470, 1086.57202,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2411, 687.91132, -1421.03430, 1086.31909,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2411, 689.26367, -1421.01355, 1086.31909,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2411, 690.66339, -1421.03430, 1086.31909,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2411, 691.86328, -1421.03430, 1086.31909,   0.00000, 0.00000, 0.00000);

	// Noticias
	CreateDynamicObject(18981, 678.96167, -1342.07434, 1085.42969,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(8434, 652.15814, -1324.98560, 1086.02795,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8434, 663.59546, -1363.40552, 1086.02795,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8434, 705.78320, -1328.14124, 1086.02795,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(8434, 667.18097, -1315.25659, 1086.02795,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(10615, 689.06799, -1299.25098, 1075.74268,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 677.29791, -1348.99670, 1085.96570,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2357, 676.68158, -1334.65894, 1086.39014,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19449, 678.82257, -1335.38403, 1085.05225,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2357, 680.92072, -1334.65894, 1086.39014,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19611, 680.84613, -1334.68298, 1085.46106,   -20.00000, 0.00000, 0.00000);
	CreateDynamicObject(19893, 681.15912, -1334.27612, 1086.79272,   0.00000, 0.00000, 2000.00000);
	CreateDynamicObject(19610, 680.85211, -1334.09485, 1087.00562,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19818, 680.53351, -1334.39270, 1086.89673,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1846, 678.82019, -1328.67114, 1088.92639,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(2229, 677.55371, -1329.29211, 1088.23779,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2229, 680.70721, -1329.29211, 1088.23779,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1714, 680.82721, -1332.99988, 1086.00635,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19893, 676.28552, -1334.27612, 1086.79272,   0.00000, 0.00000, -200.00000);
	CreateDynamicObject(1714, 676.61298, -1332.99988, 1086.00635,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19818, 676.91956, -1334.39270, 1086.89673,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19611, 676.59460, -1334.68298, 1085.46106,   -20.00000, 0.00000, 0.00000);
	CreateDynamicObject(19610, 676.59882, -1334.09485, 1087.00562,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1846, 678.82019, -1328.71118, 1088.92639,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1886, 674.16193, -1341.40747, 1086.81458,   0.00000, 180.00000, -200.00000);
	CreateDynamicObject(16101, 674.13129, -1341.48267, 1087.22876,   180.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, 677.15082, -1341.48267, 1087.22876,   180.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, 680.55542, -1341.48267, 1087.22876,   180.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, 683.47192, -1341.48267, 1087.22876,   180.00000, 0.00000, 0.00000);
	CreateDynamicObject(1886, 677.15082, -1341.39136, 1086.81458,   0.00000, 180.00000, 180.00000);
	CreateDynamicObject(1886, 680.54681, -1341.39136, 1086.81458,   0.00000, 180.00000, 180.00000);
	CreateDynamicObject(1886, 683.44678, -1341.45752, 1086.81458,   0.00000, 180.00000, 200.00000);
	CreateDynamicObject(2227, 674.94232, -1341.14368, 1085.98145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2227, 676.90411, -1341.14368, 1085.98145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2227, 681.33612, -1341.14368, 1085.98145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2227, 683.24762, -1341.14368, 1085.98145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2169, 678.35999, -1341.54309, 1085.98145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19893, 678.86200, -1341.46533, 1086.76868,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1958, 678.17566, -1341.42712, 1086.77307,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1958, 679.57312, -1341.42712, 1086.77307,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 676.60028, -1334.48462, 1090.82007,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 680.83917, -1334.48462, 1090.82007,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18981, 678.96167, -1342.07434, 1091.33032,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(2026, 678.82233, -1341.33508, 1090.82007,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2775, 678.83331, -1348.69214, 1089.33228,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(948, 674.30017, -1335.81274, 1085.98193,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(948, 683.38220, -1335.81274, 1085.98193,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 680.29852, -1348.99670, 1085.96570,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2491, 682.25330, -1341.26611, 1085.96729,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2491, 675.86603, -1341.26611, 1085.96729,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19787, 675.64490, -1341.30334, 1087.19275,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19787, 682.04602, -1341.30334, 1087.19275,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19370, 681.01923, -1334.28784, 1085.01611,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19370, 677.81702, -1334.29187, 1085.01611,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19370, 676.46808, -1334.28784, 1085.01611,   0.00000, 0.00000, 90.00000);

	// Público
	CreateDynamicObject(19379, 775.73053, -1334.41284, 1085.85474,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19379, 775.73053, -1344.00256, 1085.85474,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19379, 786.12958, -1344.00256, 1085.85474,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19379, 786.12958, -1334.39526, 1085.85474,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(3819, 786.73071, -1346.32727, 1086.78210,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3819, 774.83502, -1346.32727, 1086.78210,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(8434, 805.44092, -1329.48267, 1086.02795,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(8434, 756.15302, -1329.89697, 1086.02795,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8434, 767.02527, -1363.04114, 1086.02795,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8434, 763.45245, -1315.29187, 1086.02795,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(16101, 779.62982, -1339.06934, 1087.22876,   180.00000, 0.00000, 0.00000);
	CreateDynamicObject(1886, 779.63275, -1338.97351, 1086.81458,   0.00000, 180.00000, 180.00000);
	CreateDynamicObject(2315, 779.99878, -1333.25354, 1085.94067,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1726, 779.75842, -1331.06653, 1085.92627,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1726, 777.61096, -1332.58557, 1085.92627,   0.00000, 0.00000, 40.00000);
	CreateDynamicObject(1726, 782.36829, -1331.27869, 1085.92627,   0.00000, 0.00000, -40.00000);
	CreateDynamicObject(16101, 781.82141, -1339.06934, 1087.22876,   180.00000, 0.00000, 0.00000);
	CreateDynamicObject(1886, 781.81628, -1338.97351, 1086.81458,   0.00000, 180.00000, 180.00000);
	CreateDynamicObject(2227, 779.41992, -1338.71545, 1085.93604,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2227, 782.62439, -1338.71545, 1085.93604,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18981, 779.73102, -1339.60107, 1091.35754,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19449, 775.26282, -1339.29053, 1090.98401,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19449, 784.85052, -1339.29053, 1090.98401,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19449, 794.45203, -1339.29053, 1090.98401,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19786, 774.83063, -1339.33594, 1090.05042,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19786, 786.79749, -1339.33594, 1090.05042,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19786, 780.75043, -1339.33594, 1090.05042,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1963, 780.75049, -1339.83679, 1086.30127,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19893, 780.74170, -1339.90601, 1086.70288,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1958, 779.81122, -1339.84900, 1086.71484,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1958, 780.19562, -1339.84900, 1086.71484,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1958, 781.28021, -1339.84900, 1086.71484,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1958, 781.68018, -1339.84900, 1086.71484,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19787, 780.77008, -1339.18896, 1086.35413,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2775, 780.74768, -1338.88586, 1089.96533,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(11737, 780.78943, -1334.39233, 1085.94495,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2267, 780.79059, -1329.71191, 1088.34521,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2853, 780.75323, -1333.30676, 1086.43555,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19818, 781.77161, -1333.09583, 1086.51050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19818, 781.11401, -1332.98267, 1086.51050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19818, 780.38013, -1332.86084, 1086.51050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19818, 779.72302, -1333.11035, 1086.51050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1886, 779.63281, -1338.17004, 1090.84216,   50.00000, 0.00000, 180.00000);
	CreateDynamicObject(1886, 779.63275, -1338.97351, 1086.81458,   0.00000, 180.00000, 180.00000);
	CreateDynamicObject(1886, 781.81628, -1338.17004, 1090.84216,   50.00000, 0.00000, 180.00000);
	CreateDynamicObject(1569, 779.28387, -1348.64795, 1085.94263,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 782.24969, -1348.64795, 1085.94263,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(18608, 780.44482, -1344.17139, 1091.83240,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2026, 780.79932, -1333.32800, 1090.86145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 778.33783, -1331.90161, 1090.86145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 780.77557, -1331.18018, 1090.86145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 783.09259, -1332.00952, 1090.86145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2229, 784.24188, -1329.66418, 1085.92249,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2229, 777.92157, -1329.66418, 1085.92249,   0.00000, 0.00000, 0.00000);

	// Música
	CreateDynamicObject(14393, 741.44678, -1387.00476, 1085.85474,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14391, 742.42822, -1386.32104, 1084.56091,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1569, 740.29559, -1378.28516, 1083.62842,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 743.30969, -1378.28516, 1083.62842,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19617, 740.65723, -1378.28772, 1086.60791,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19617, 741.81848, -1378.28772, 1086.60791,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19617, 741.81848, -1378.28772, 1086.60791,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19617, 742.96350, -1378.28772, 1086.60791,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19787, 742.28180, -1389.60474, 1087.60315,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3859, 742.13916, -1387.54626, 1087.27612,   0.00000, 0.00000, -72.84001);
	CreateDynamicObject(3859, 747.37433, -1387.54089, 1087.27612,   0.00000, 0.00000, -72.84000);
	CreateDynamicObject(1569, 741.75922, -1378.25098, 1083.62842,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19786, 745.78619, -1383.67590, 1085.69128,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2271, 738.97522, -1378.78809, 1085.13025,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19609, 742.09222, -1394.29224, 1083.59863,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19611, 742.11981, -1390.53162, 1083.65295,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19610, 742.12091, -1390.52075, 1085.30042,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19317, 738.20367, -1395.56238, 1084.39771,   -10.00000, 0.00000, 180.00000);
	CreateDynamicObject(19318, 737.45056, -1395.58301, 1084.30664,   -10.00000, 0.00000, 180.00000);
	CreateDynamicObject(2026, 742.10638, -1390.51624, 1087.85999,   0.00000, 0.00000, 0.00000);


	//-> Telefe Exterior | By. NúO
	new Telefe [3];
	Telefe [0] = CreateObject(19355, 647.74158, -1355.84497, 18.53840,   0.00000, 0.00000, -0.28800, 500000.0);
	SetObjectMaterialText(Telefe [0], "{377FE3}•{98E944}•{FE3D1E}•", 0, 60, "Impact", 140, 0, -1, 0, 1);
	Telefe [1] = CreateObject(19355, 647.72559, -1359.03064, 18.53840,   0.00000, 0.00000, -0.28800, 500000.0);
	SetObjectMaterialText(Telefe [1], "TELEFE", 0, 60, "Arial", 40, 0, -1, 0, 1);

	Telefe [2] = CreateObject(6490, 717.48438, -1357.30469, 20.29690,   0.00000, 0.00000, 0.00000, 500000.0);
	SetObjectMaterial(Telefe [2], 0, 18765, "concretebits", "stonewalltile1-3", 0 ); // Suelo
	SetObjectMaterial(Telefe [2], 1, 9895, "bigboxtemp1", "shingles1", 0 ); // Techo
	SetObjectMaterial(Telefe [2], 2, 9515, "bigboxtemp1", "ws_alley5_256_blank", 0 ); // Muro 1
	SetObjectMaterial(Telefe [2], 3, 9515, "bigboxtemp1", "ws_alley5_256_blank", 0 ); // Muro 2
	SetObjectMaterial(Telefe [2], 4, 9515, "bigboxtemp1", "ws_alley5_256_blank", 0 ); // Puertas

	CreateDynamicObject(1223, 649.82153, -1357.33899, 11.30148,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(982, 642.99695, -1342.35864, 13.13766,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(982, 642.89648, -1372.10571, 13.13770,   0.00000, 0.00000, -0.24000);
	CreateDynamicObject(9131, 643.24908, -1359.03577, 12.67526,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9131, 643.24908, -1355.51099, 12.67530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1536, 649.67029, -1358.80920, 12.50346,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1536, 649.62903, -1355.78906, 12.50350,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(8661, 767.00000, -1374.80005, 12.70000,   359.25000, 0.00000, 0.00000);
	CreateDynamicObject(16501, 741.00000, -1359.69995, 22.10000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(16501, 757.79999, -1384.19995, 22.10000,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(16501, 757.79999, -1384.19995, 18.40000,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(16501, 757.79999, -1384.19995, 14.40000,   0.00000, 0.00000, 269.98999);
	CreateDynamicObject(16501, 761.20001, -1380.69995, 14.40000,   0.00000, 0.00000, 359.98999);
	CreateDynamicObject(16501, 761.20001, -1380.69995, 18.60000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 761.20001, -1380.69995, 22.10000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 761.20001, -1374.09998, 14.40000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 761.20001, -1367.50000, 14.40000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 761.20001, -1365.59998, 14.40000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 753.90002, -1356.30005, 14.40000,   0.00000, 0.00000, 89.98000);
	CreateDynamicObject(16501, 747.29999, -1356.30005, 14.40000,   0.00000, 0.00000, 89.98000);
	CreateDynamicObject(16501, 744.40002, -1356.30005, 14.40000,   0.00000, 0.00000, 89.98000);
	CreateDynamicObject(16501, 744.40002, -1356.30005, 18.50000,   0.00000, 0.00000, 89.98000);
	CreateDynamicObject(16501, 744.40002, -1356.30005, 22.10000,   0.00000, 0.00000, 89.98000);
	CreateDynamicObject(16501, 747.29999, -1356.30005, 18.50000,   0.00000, 0.00000, 89.98000);
	CreateDynamicObject(16501, 747.29999, -1356.30005, 22.10000,   0.00000, 0.00000, 89.98000);
	CreateDynamicObject(16501, 753.90002, -1356.30005, 18.40000,   0.00000, 0.00000, 89.98000);
	CreateDynamicObject(16501, 753.90002, -1356.30005, 22.10000,   0.00000, 0.00000, 89.98000);
	CreateDynamicObject(16501, 761.20001, -1365.59998, 18.50000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 761.20001, -1365.59998, 22.10000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 761.20001, -1367.50000, 18.60000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 761.20001, -1367.50000, 22.10000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 761.20001, -1374.09998, 18.10000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 761.20001, -1374.09998, 22.10000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 757.70001, -1382.00000, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 757.70001, -1377.90002, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 757.70001, -1373.69995, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 757.70001, -1369.50000, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 757.70001, -1365.50000, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 757.70001, -1364.40002, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 753.90002, -1358.59998, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 748.59998, -1358.59998, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 744.59998, -1358.59998, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(3851, 761.40002, -1378.59998, 16.80000,   0.00000, 0.00000, 359.75000);
	CreateDynamicObject(3851, 761.40002, -1367.59998, 16.80000,   0.00000, 0.00000, 359.75000);
	CreateDynamicObject(3851, 748.50000, -1356.09998, 21.10000,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(3851, 748.40002, -1356.09998, 16.70000,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(7488, 762.32001, -1375.45996, -24.40000,   0.00000, 270.00000, 270.00000);
	CreateDynamicObject(16501, 740.70001, -1353.80005, 14.40000,   0.00000, 0.00000, 39.98000);
	CreateDynamicObject(16501, 735.50000, -1349.30005, 14.40000,   0.00000, 0.00000, 57.98000);
	CreateDynamicObject(16501, 734.09998, -1348.40002, 14.20000,   0.00000, 0.00000, 57.97000);
	CreateDynamicObject(16501, 740.70001, -1353.80005, 18.50000,   0.00000, 0.00000, 39.98000);
	CreateDynamicObject(16501, 740.70001, -1353.80005, 22.10000,   0.00000, 0.00000, 39.98000);
	CreateDynamicObject(16501, 735.50000, -1349.30005, 18.40000,   0.00000, 0.00000, 57.97000);
	CreateDynamicObject(16501, 735.50000, -1349.30005, 22.10000,   0.00000, 0.00000, 57.97000);
	CreateDynamicObject(16501, 734.09998, -1348.40002, 18.20000,   0.00000, 0.00000, 57.97000);
	CreateDynamicObject(16501, 734.09998, -1348.40002, 22.10000,   0.00000, 0.00000, 57.97000);
	CreateDynamicObject(16501, 737.70001, -1357.80005, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 735.00000, -1357.50000, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 734.29999, -1354.40002, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 733.90002, -1351.00000, 24.40000,   0.00000, 270.00000, 237.97000);
	CreateDynamicObject(16501, 738.79999, -1355.00000, 24.40000,   0.00000, 270.00000, 219.72000);
	CreateDynamicObject(3660, 738.40002, -1351.00000, 14.10000,   0.00000, 0.00000, 140.00000);
	CreateDynamicObject(7488, 762.08002, -1385.05005, -24.42000,   0.00000, 270.00000, 270.25000);
	CreateDynamicObject(14387, 776.20001, -1355.00000, 11.94800,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(14387, 773.59998, -1355.00000, 11.95200,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(3934, 741.90002, -1370.30005, 24.65000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(16501, 734.79999, -1358.09998, 25.00000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(16501, 738.40002, -1354.59998, 25.00000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 731.29999, -1354.59998, 25.00000,   0.00000, 0.00000, 180.99001);
	CreateDynamicObject(16501, 734.79999, -1355.90002, 27.10000,   0.00000, 270.00000, 269.95999);
	CreateDynamicObject(16501, 734.79999, -1353.19995, 27.10000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 734.79999, -1351.09998, 25.00000,   0.00000, 0.00000, 89.98000);
	CreateDynamicObject(3851, 742.09998, -1355.30005, 21.10000,   0.00000, 0.00000, 39.99000);
	CreateDynamicObject(3851, 742.09998, -1355.30005, 16.70000,   0.00000, 0.00000, 39.99000);
	CreateDynamicObject(3851, 733.70001, -1348.00000, 16.70000,   0.00000, 0.00000, 57.99000);
	CreateDynamicObject(3851, 733.70001, -1348.00000, 21.10000,   0.00000, 0.00000, 57.99000);
	CreateDynamicObject(16501, 757.70001, -1356.30005, 19.40000,   0.00000, 0.00000, 89.98000);
	CreateDynamicObject(16501, 757.70001, -1356.30005, 22.10000,   0.00000, 0.00000, 89.98000);
	CreateDynamicObject(16501, 761.20001, -1359.80005, 19.40000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 761.20001, -1359.80005, 22.10000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 757.70001, -1358.40002, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(16501, 757.70001, -1360.69995, 24.40000,   0.00000, 270.00000, 269.98001);
	CreateDynamicObject(3851, 755.79999, -1356.09998, 21.10000,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(3851, 761.40002, -1361.68005, 21.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16501, 759.29999, -1359.19995, 15.10000,   0.00000, 0.00000, 31.98000);
	CreateDynamicObject(3851, 751.70001, -1356.09998, 16.70000,   0.00000, 0.00000, 89.99000);
	CreateDynamicObject(16501, 757.50000, -1358.59998, 17.30000,   0.00000, 270.00000, 271.22000);
	CreateDynamicObject(16501, 757.70001, -1362.90002, 17.30000,   0.00000, 270.00000, 269.97000);
	CreateDynamicObject(3851, 761.40002, -1372.90002, 21.10000,   0.00000, 0.00000, 359.75000);
	CreateDynamicObject(3851, 761.40002, -1378.59998, 21.10000,   0.00000, 0.00000, 360.00000);
	CreateDynamicObject(3851, 755.79999, -1384.40002, 21.10000,   0.00000, 0.00000, 271.00000);
	CreateDynamicObject(3851, 755.79999, -1384.40002, 16.80000,   0.00000, 0.00000, 270.98999);
	CreateDynamicObject(1569, 758.50000, -1357.80005, 12.90000,   0.00000, 0.00000, 302.00000);
	CreateDynamicObject(1569, 760.09998, -1360.30005, 12.90000,   0.00000, 0.00000, 123.00000);
	CreateDynamicObject(736, 741.79999, -1353.59998, 23.90000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(736, 734.50000, -1347.40002, 23.90000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3660, 747.79999, -1354.90002, 14.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 757.70001, -1356.19995, 13.30000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 755.59998, -1354.09998, 13.30000,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(970, 751.50000, -1354.09998, 13.30000,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(970, 747.40002, -1354.09998, 13.30000,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(970, 746.40002, -1354.09998, 13.30000,   0.00000, 0.00000, 179.99001);
	CreateDynamicObject(970, 742.70001, -1352.80005, 13.30000,   0.00000, 0.00000, 139.74001);
	CreateDynamicObject(970, 739.50000, -1350.09998, 13.30000,   0.00000, 0.00000, 139.74001);
	CreateDynamicObject(970, 736.29999, -1347.40002, 13.30000,   0.00000, 0.00000, 140.24001);
	CreateDynamicObject(1215, 744.29999, -1354.09998, 12.60000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 757.70001, -1354.09998, 12.60000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(736, 751.09998, -1355.19995, 23.90000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16501, 732.09998, -1340.09998, 18.00000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 732.09998, -1333.09998, 18.00000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 732.09998, -1333.09998, 22.30000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 732.09998, -1340.09998, 22.30000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 732.09998, -1344.19995, 22.30000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 732.09998, -1344.19995, 18.00000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 732.09998, -1333.09998, 13.70000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 732.09998, -1340.19995, 13.70000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(16501, 732.09998, -1346.19995, 13.70000,   0.00000, 0.00000, 359.98001);
	CreateDynamicObject(3851, 732.29999, -1346.50000, 16.70000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 732.29999, -1335.19995, 16.70000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 732.29999, -1335.19995, 21.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3851, 732.29999, -1346.50000, 21.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3660, 732.90002, -1339.39160, 14.10000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 734.29999, -1343.69995, 13.30000,   0.00000, 0.00000, 89.74000);
	CreateDynamicObject(970, 734.29999, -1339.59998, 13.30000,   0.00000, 0.00000, 89.74000);
	CreateDynamicObject(970, 734.29999, -1335.50000, 13.30000,   0.00000, 0.00000, 89.74000);
	CreateDynamicObject(970, 734.29742, -1331.76025, 13.30000,   0.00000, 0.00000, 90.24000);
	CreateDynamicObject(970, 735.79999, -1347.00000, 13.30000,   0.00000, 0.00000, 140.24001);
	CreateDynamicObject(736, 732.90002, -1341.50000, 23.90000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(736, 732.79999, -1334.40002, 23.90000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 734.40002, -1345.80005, 12.60000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 734.29999, -1330.19995, 12.60000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 733.50000, -1358.19995, 24.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 736.40002, -1358.19995, 24.50000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3660, 786.44000, -1366.19995, 15.43000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3660, 785.59998, -1349.40002, 14.10000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 784.90002, -1354.00000, 13.30000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 784.90002, -1349.90002, 13.30000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 784.90002, -1345.80005, 13.30000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 784.90002, -1341.69995, 13.30000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(736, 785.75000, -1341.06995, 23.24000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11547, 747.09998, -1333.90002, 15.51000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(11547, 763.70001, -1334.00000, 15.50000,   0.00000, 0.00000, 269.25000);
	CreateDynamicObject(3657, 784.70001, -1360.22998, 13.30000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1231, 771.12000, -1356.17004, 14.70000,   0.00000, 0.00000, -87.72000);
	CreateDynamicObject(1231, 778.75000, -1356.21997, 14.70000,   0.00000, 0.00000, -92.58000);
	CreateDynamicObject(1439, 736.59998, -1330.50000, 12.70000,   0.00000, 0.00000, 1.14000);
	CreateDynamicObject(3851, 735.00000, -1350.98999, 21.40000,   90.00000, 180.67999, 269.06000);
	CreateDynamicObject(3851, 738.50000, -1354.59998, 21.50000,   90.00000, 179.32001, 180.66000);
	CreateDynamicObject(8168, 784.50000, -1334.00000, 14.50000,   0.00000, 0.00000, 287.73999);
	CreateDynamicObject(970, 785.40002, -1339.59998, 11.78000,   0.00000, 90.00000, 180.00000);
	CreateDynamicObject(970, 786.29999, -1339.59998, 11.78000,   0.00000, 90.00000, 179.99001);
	CreateDynamicObject(1215, 784.79999, -1339.59998, 12.60000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1411, 735.00000, -1329.59998, 15.70000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3526, 737.09998, -1365.50000, 24.70000,   0.00000, 0.00000, 270.98999);
	CreateDynamicObject(3526, 746.79999, -1365.50000, 24.80000,   0.00000, 0.00000, 270.98001);
	CreateDynamicObject(3526, 737.09998, -1375.40002, 24.80000,   0.00000, 0.00000, 90.98000);
	CreateDynamicObject(3526, 746.79999, -1375.40002, 24.80000,   0.00000, 0.00000, 90.98000);
	CreateDynamicObject(1215, 784.90002, -1356.40002, 12.80000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 759.78998, -1356.25000, 13.41000,   0.00000, 0.00000, 179.28000);
	CreateDynamicObject(970, 763.89001, -1356.25000, 13.41000,   0.00000, 0.00000, 180.48000);
	CreateDynamicObject(970, 768.02002, -1356.23999, 13.41000,   0.00000, 0.00000, 179.58000);
	CreateDynamicObject(970, 769.03998, -1356.21997, 13.41000,   0.00000, 0.00000, 179.94000);
	CreateDynamicObject(970, 780.88000, -1356.28003, 13.41000,   0.00000, 0.00000, 179.88000);
	CreateDynamicObject(970, 785.01001, -1356.27002, 13.41000,   0.00000, 0.00000, 179.88000);
	CreateDynamicObject(3660, 785.59998, -1349.40002, 14.10000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3660, 786.47998, -1375.17004, 15.46000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3660, 764.17999, -1383.87000, 15.46000,   0.00000, 0.00000, 179.88000);
	CreateDynamicObject(3660, 761.96997, -1375.13000, 15.46000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3660, 761.41998, -1371.69995, 15.46000,   0.00000, 0.00000, 450.00000);
	CreateDynamicObject(3657, 784.78998, -1367.19995, 13.30000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3657, 784.78003, -1375.31006, 13.30000,   0.00000, 0.00000, 271.14001);
	CreateDynamicObject(3657, 784.78998, -1381.51001, 13.30000,   0.00000, 0.00000, 269.10001);
	CreateDynamicObject(3657, 771.90997, -1381.85999, 13.30000,   0.00000, 0.00000, 180.36000);
	CreateDynamicObject(3657, 765.95001, -1381.75000, 13.30000,   0.00000, 0.00000, 179.58000);
	CreateDynamicObject(3657, 763.37000, -1378.29004, 13.30000,   0.00000, 0.00000, 91.32000);
	CreateDynamicObject(3657, 763.40997, -1371.90002, 13.30000,   0.00000, 0.00000, 90.60000);
	CreateDynamicObject(3657, 763.46997, -1365.94995, 13.30000,   0.00000, 0.00000, 90.60000);
	CreateDynamicObject(736, 785.59998, -1354.75000, 23.24000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(736, 785.46997, -1367.04004, 24.32000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(736, 785.75000, -1380.34998, 24.32000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 762.07001, -1367.27002, 14.78000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 761.92999, -1376.53003, 14.78000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 767.85999, -1383.39001, 14.78000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 785.96002, -1373.59998, 14.78000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 786.14001, -1360.84998, 14.78000,   0.00000, 0.00000, 0.00000);


	//-> Garitas de Policía | By. NúO
	new Garita [12];
	// El Corona (G-1)
	Garita [0] = CreateObject(3626, 1947.24561, -1943.92419, 13.94520,   0.00000, 0.00000, 180.00000, 500000.0);
	SetObjectMaterial(Garita [0], 3, 14707, "labig3int2", "white", 0 ); // Blanco
	SetObjectMaterial(Garita [0], 6, 4002, "cityhall_lan", "cityhalltow1", 0 ); // Azul (Inferior)
	SetObjectMaterial(Garita [0], 7, 4002, "cityhall_lan", "cityhalltow1", 0 ); // Azul (Superior)
	SetObjectMaterial(Garita [0], 8, 10945, "skyscrap_sfse", "ws_airportwin2", 0 ); // Ventanas

	Garita [1] = CreateObject(19355, 1946.21094, -1942.3300, 13.2881,   0.00000, 0.00000, 90.00000, 500000.0);
	SetObjectMaterialText(Garita [1], "{97B5AD}POLICIA", 0, 60, "Arial", 35, 0, -1, 0, 1);

	CreateDynamicObject(19371, 1941.19275, -1944.42444, 12.46270,   0.00000, 90.00000, -90.00000);
	CreateDynamicObject(19371, 1937.98816, -1944.42444, 12.46270,   0.00000, 90.00000, -90.00000);
	CreateDynamicObject(19371, 1934.78247, -1944.42444, 12.46270,   0.00000, 90.00000, -90.00000);
	CreateDynamicObject(19371, 1941.19275, -1947.91931, 12.46270,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19371, 1937.98816, -1947.91931, 12.46270,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19371, 1934.78247, -1947.91931, 12.46270,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19425, 1941.14624, -1942.56152, 12.54250,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 1937.96265, -1942.56152, 12.55050,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 1934.80713, -1942.56152, 12.54250,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19371, 1944.39709, -1947.91931, 12.46270,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19371, 1947.59766, -1947.91931, 12.46270,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19371, 1950.04346, -1947.91931, 12.47070,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(1238, 1933.28809, -1932.31885, 12.68070,   0.00000, 0.00000, 20.28000);
	CreateDynamicObject(1238, 1951.56921, -1932.31885, 12.68070,   0.00000, 0.00000, -43.80000);
	CreateDynamicObject(1238, 1945.34863, -1932.31885, 12.68070,   0.00000, 0.00000, -30.36000);
	CreateDynamicObject(1238, 1939.36780, -1932.31885, 12.68070,   0.00000, 0.00000, -30.66000);
	CreateDynamicObject(3785, 1949.44519, -1942.21704, 15.06700,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(19987, 1831.66504, -1937.48071, 12.06960,   0.00000, 0.00000, -111.72000);
	CreateDynamicObject(19985, 1891.77576, -1937.49036, 12.06960,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19171, 1951.51831, -1944.32068, 14.30401,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(1721, 1951.17297, -1945.88062, 12.71940,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 1950.58887, -1945.88062, 12.71940,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 1950.00391, -1945.88062, 12.71940,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 1949.42444, -1945.88062, 12.71940,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2002, 1950.73157, -1942.95618, 12.72810,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2167, 1943.39819, -1946.01245, 12.72640,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2309, 1943.07520, -1943.80261, 12.66790,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19420, 1942.75305, -1944.29041, 15.15680,   -90.00000, 0.00000, 90.00000);
	CreateDynamicObject(2008, 1944.35315, -1942.92944, 12.71190,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2026, 1944.35315, -1943.32397, 15.16680,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19973, 1919.64343, -1937.48853, 12.39102,   0.00000, 0.00000, -90.00000);

	// Aeropuerto (G-2)
	Garita [2] = CreateObject(3626, 1779.75415, -2159.05298, 13.90878,   0.00000, 0.00000, 0.00000, 500000.0);
	SetObjectMaterial(Garita [2], 3, 14707, "labig3int2", "white", 0 ); // Blanco
	SetObjectMaterial(Garita [2], 6, 4002, "cityhall_lan", "cityhalltow1", 0 ); // Azul (Inferior)
	SetObjectMaterial(Garita [2], 7, 4002, "cityhall_lan", "cityhalltow1", 0 ); // Azul (Superior)
	SetObjectMaterial(Garita [2], 8, 10945, "skyscrap_sfse", "ws_airportwin2", 0 ); // Ventanas

	Garita [3] = CreateObject(19355, 1780.76062, -2160.66479, 13.2481,   0.00000, 0.00000, 90.00000, 500000.0);
	SetObjectMaterialText(Garita [3], "{97B5AD}POLICIA", 0, 60, "Arial", 35, 0, -1, 0, 1);

	CreateDynamicObject(1238, 1789.65125, -2166.52979, 12.68190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1238, 1769.97729, -2166.52979, 12.68190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1238, 1779.75415, -2166.52979, 12.68190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1238, 1784.97083, -2166.54688, 12.68190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1238, 1774.75159, -2166.52979, 12.68190,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19985, 1804.45801, -2161.38843, 12.44298,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1721, 1775.64624, -2160.20557, 12.68310,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, 1775.64624, -2157.24487, 12.68310,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, 1775.64624, -2158.20508, 12.68310,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1721, 1775.64624, -2159.22510, 12.68310,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2167, 1783.62183, -2156.98413, 12.69060,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2309, 1783.87781, -2159.13965, 12.69070,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2008, 1782.48669, -2160.03833, 12.67950,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2309, 1780.92261, -2159.73169, 12.69070,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2026, 1782.42883, -2159.66162, 15.13410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19420, 1784.24048, -2158.73169, 15.11130,   -90.00000, 90.00000, 0.00000);
	CreateDynamicObject(19420, 1775.29980, -2158.73169, 15.11130,   90.00000, 90.00000, 180.00000);
	CreateDynamicObject(2002, 1778.40356, -2160.03174, 12.69160,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19973, 1792.37170, -2161.38843, 12.44300,   0.00000, 0.00000, 90.00000);


	//-> A.R.A San Juan | By. NúO
	new Expo_Submarino [5];
	Expo_Submarino [0] = CreateObject(19355, 988.58490, -1988.96680, 8.59670,   0.00000, 0.00000, 0.00000, 500000.0);
	SetObjectMaterialText(Expo_Submarino [0], "{7D997D}A.R.A\n {7D997D}SAN JUAN\n {7D997D}- 44 -", 0, 60, "Impact", 30, 0, -1, 0, 1);

	Expo_Submarino [1] = CreateObject(9958, 983.03729, -1988.96680, 17.09277,   0.00000, 0.00000, 180.00000, 500000.0); // Submarino
	SetObjectMaterial(Expo_Submarino [1], 2, 9958, "sfe_sub", "sfe_sub_1", 0 ); // Letras (Retiradas)

	// Muros
	Expo_Submarino [0] = CreateObject(19445, 988.56488, -1988.96680, 8.59670,   0.00000, 0.00000, 0.00000, 500000.0); SetObjectMaterial(Expo_Submarino [0], 0, 4601, "lan2_gm1", "sl_plazatile01", 0 );
	Expo_Submarino [1] = CreateObject(19370, 989.10718, -1995.25916, 8.59670,   0.00000, 0.00000, 20.00000, 500000.0); SetObjectMaterial(Expo_Submarino [1], 0, 4601, "lan2_gm1", "sl_plazatile01", 0 );
	Expo_Submarino [2] = CreateObject(19370, 989.10840, -1982.67346, 8.60070,   0.00000, 0.00000, -20.00000, 500000.0); SetObjectMaterial(Expo_Submarino [2], 0, 4601, "lan2_gm1", "sl_plazatile01", 0 );

	CreateDynamicObject(6959, 994.81079, -1988.96680, 6.98370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(6959, 994.81079, -1949.01526, 6.98370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(6959, 994.81079, -2028.91809, 6.98370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(6959, 974.16681, -2028.91809, -13.70680,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(6959, 974.16681, -1988.96680, -13.70680,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(6959, 974.17480, -1949.01929, -13.70680,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(6959, 994.14130, -1928.99194, -13.71080,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(6959, 994.14130, -2048.87378, -13.71080,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19872, 984.86951, -1986.28674, 5.82580,   0.00000, -20.00000, 0.00000);
	CreateDynamicObject(19872, 981.19757, -1986.28674, 5.82580,   0.00000, 20.00000, 0.00000);
	CreateDynamicObject(19872, 984.86951, -2016.79150, 5.82580,   0.00000, -20.00000, 0.00000);
	CreateDynamicObject(19872, 984.86951, -1955.27124, 5.82580,   0.00000, -20.00000, 0.00000);
	CreateDynamicObject(19872, 981.19757, -1955.27124, 5.82580,   0.00000, 20.00000, 0.00000);
	CreateDynamicObject(19872, 981.19757, -2016.79150, 5.82580,   0.00000, 20.00000, 0.00000);
	CreateDynamicObject(19872, 984.86951, -1969.95654, 5.82580,   0.00000, -20.00000, 0.00000);
	CreateDynamicObject(19872, 984.86951, -2002.55334, 5.82580,   0.00000, -20.00000, 0.00000);
	CreateDynamicObject(19872, 981.19757, -2002.55334, 5.82580,   0.00000, 20.00000, 0.00000);
	CreateDynamicObject(19872, 981.19757, -1969.95654, 5.82580,   0.00000, 20.00000, 0.00000);
	CreateDynamicObject(620, 976.12158, -1930.28503, 5.87720,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 976.12158, -2047.79895, 5.87720,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 974.54779, -2035.09253, 7.63760,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9131, 974.54779, -1929.41125, 8.05410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9131, 974.54779, -2048.49756, 8.05410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 974.54779, -2008.98108, 7.63760,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 974.54779, -1982.86865, 7.63760,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 974.54779, -1956.76172, 7.63760,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 974.55182, -1942.28052, 7.64160,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9339, 987.68793, -1929.41125, 7.63760,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(9339, 987.68793, -2048.49756, 7.63760,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2240, 989.52930, -1995.36914, 7.33550,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2240, 989.52930, -1982.78870, 7.33550,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 989.03900, -1992.17664, 7.44620,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 989.03900, -1985.64368, 7.44616,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1568, 998.53699, -1929.41125, 9.17731,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1568, 998.53699, -2048.49756, 8.13200,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14394, 1001.73163, -1988.96680, 7.61770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14394, 1001.73163, -1980.98242, 7.61770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14394, 1001.73163, -1996.96155, 7.61770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19372, 1004.43597, -1999.35144, 8.34750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19372, 1004.43597, -1996.14624, 8.34750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19372, 1004.43597, -1992.94263, 8.34750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19372, 1004.43597, -1989.74133, 8.34750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19372, 1004.43597, -1986.53882, 8.34750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19372, 1004.43597, -1983.33484, 8.34750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19372, 1004.43597, -1980.13696, 8.34750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19372, 1004.43597, -1978.58362, 8.34350,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(9339, 1013.68201, -1976.92737, 7.77710,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(9339, 1013.68201, -2001.04932, 7.77710,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(620, 1001.83398, -2001.78467, 5.87720,   0.00000, 0.00000, 22.02000);
	CreateDynamicObject(620, 1001.83398, -1976.25928, 5.87720,   0.00000, 0.00000, -27.06000);
	CreateDynamicObject(648, 1016.47687, -1947.46069, 8.91669,   0.00000, 0.00000, -17.22000);
	CreateDynamicObject(648, 1016.71454, -2034.85620, 10.78719,   0.00000, 0.00000, -85.98000);
	CreateDynamicObject(1215, 1000.38922, -1976.92737, 7.80136,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 1000.38922, -2001.04932, 7.80140,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2253, 988.84253, -1987.53809, 7.21350,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2253, 988.84253, -1990.44580, 7.21350,   0.00000, 0.00000, 90.00000);


	//-> Villa 3 | By. Julian Llorca y Ema Baqué
	new Dec_V3 [1];
	Dec_V3 [0] = CreateObject(19787, 2625.49951, -2025.78271, 14.82940,   0.00000, 0.00000, 180.00000);
	SetObjectMaterial(Dec_V3 [0], 0, 3253, "cxref_oldwest", "cratetop128", 0 );
	SetObjectMaterial(Dec_V3 [0], 1, 5040, "shopliquor_las", "sjmlashop5", 0 );

	CreateDynamicObject(1448, 2626.75830, -2025.54858, 12.95478,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1448, 2626.75830, -2025.11914, 12.81880,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1448, 2626.75830, -2024.69128, 12.66930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1448, 2626.75830, -2024.26245, 12.52570,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1448, 2626.75830, -2025.31055, 12.52570,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1448, 2626.75830, -2025.74744, 12.66930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1448, 2626.75830, -2026.16895, 12.81880,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1368, 2624.46313, -2021.94470, 13.14420,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2074, 2626.58423, -2025.50989, 17.39950,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11440, 2696.51294, -1987.24243, 12.06499,   0.00000, 0.00000, 359.62219);
	CreateDynamicObject(3866, 2638.11060, -1983.85718, 20.37108,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1415, 2626.47632, -1974.25134, 12.63300,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(13591, 2630.78052, -1991.39661, 12.53739,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11457, 2661.45825, -1980.23230, 11.92950,   0.00000, 0.00000, -91.00000);
	CreateDynamicObject(12957, 2626.47925, -1982.96729, 13.42137,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1358, 2635.79492, -1988.57446, 14.11150,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14600, 2631.95605, -1974.42944, 14.44770,   0.00000, 0.00000, 89.00000);
	CreateDynamicObject(1415, 2626.47632, -1974.25134, 12.73400,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1358, 2635.08618, -1983.63733, 13.70024,   0.00000, 0.00000, 354.50681);
	CreateDynamicObject(11447, 2645.55444, -1977.83594, 12.49281,   0.00000, 0.00000, 88.74573);
	CreateDynamicObject(11443, 2632.32227, -1981.24524, 12.50178,   0.00000, 0.00000, -98.00000);
	CreateDynamicObject(19915, 2632.55151, -1981.93384, 12.77020,   -47.00000, 0.00000, 76.00000);
	CreateDynamicObject(19990, 2633.73071, -1982.10571, 12.54900,   -40.00000, 0.00000, 0.00000);
	CreateDynamicObject(19900, 2630.99048, -1981.67371, 12.63266,   0.00000, 0.00000, 351.50385);
	CreateDynamicObject(3253, 2626.58423, -2029.99011, 13.35197,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3250, 2635.66382, -2030.00781, 12.77680,   0.00000, 0.00000, 0.42036);
	CreateDynamicObject(853, 2631.38965, -1978.20752, 12.93530,   0.00000, 0.00000, 0.30301);
	CreateDynamicObject(851, 2633.94312, -1978.49023, 12.84603,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11457, 2673.47241, -2023.35999, 12.21810,   0.00000, 0.00000, 359.74936);
	CreateDynamicObject(11440, 2674.63013, -1986.91614, 11.93800,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11447, 2659.40527, -1978.62048, 14.98297,   0.00000, 0.00000, 88.74573);
	CreateDynamicObject(1415, 2626.47632, -1974.25134, 12.63300,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11295, 2686.12329, -1965.57434, 18.33791,   0.00000, 0.00000, 1.46698);
	CreateDynamicObject(11295, 2651.45166, -1965.60596, 18.16026,   0.00000, 0.00000, 0.20471);
	CreateDynamicObject(11295, 2669.98926, -1965.65784, 18.57548,   0.00000, 0.00000, 358.24326);
	CreateDynamicObject(11461, 2642.15869, -1965.80139, 11.99334,   0.00000, 0.00000, 358.32629);
	CreateDynamicObject(3887, 2669.00000, -1951.21301, 20.84703,   0.00000, 0.00000, 269.63025);
	CreateDynamicObject(1281, 2666.72363, -1944.85645, 20.55675,   0.00000, 0.00000, 0.61211);
	CreateDynamicObject(1841, 2667.70044, -1945.27661, 20.59152,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2229, 2667.94897, -1949.83899, 19.66626,   0.00000, 0.00000, 272.16739);
	CreateDynamicObject(1369, 2696.54590, -1954.86694, 13.25037,   0.00000, -25.00000, 353.00000);
	CreateDynamicObject(2114, 2686.86304, -1942.67224, 29.13175,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2937, 2694.38696, -1972.08325, 13.81543,   -62.00000, 4.00000, 358.79898);
	CreateDynamicObject(3403, 2699.75146, -2025.74146, 15.45980,   0.00000, 0.00000, 90.48136);
	CreateDynamicObject(3403, 2688.27808, -2031.90186, 15.45980,   0.00000, 0.00000, 0.41010);
	CreateDynamicObject(3403, 2687.76978, -2019.66296, 15.45980,   0.00000, 0.00000, 0.41010);
	CreateDynamicObject(917, 2685.00610, -2025.76990, 13.44400,   0.00000, 0.00000, 93.35160);
	CreateDynamicObject(918, 2685.45020, -2019.94897, 13.64170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(919, 2675.54810, -2019.76624, 15.98540,   0.00000, 0.00000, 359.90100);
	CreateDynamicObject(1820, 2620.12354, -2058.53687, 12.54222,   0.00000, 0.00000, 0.12000);
	CreateDynamicObject(11712, 2620.58765, -2057.63281, 13.95416,   0.00000, 0.00000, 88.00780);
	CreateDynamicObject(1669, 2620.89233, -2058.37256, 13.24617,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11746, 2620.28345, -2058.29761, 13.05054,   -92.00000, 4.00000, 11.00000);
	CreateDynamicObject(19792, 2620.89624, -2057.52222, 13.04673,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(325, 2621.15503, -2057.63916, 13.04710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(325, 2620.02759, -2057.66968, 13.09498,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14705, 2621.25879, -2057.55640, 12.82761,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14705, 2620.06421, -2057.57056, 12.87753,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11704, 2620.56958, -2057.67114, 13.39591,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1669, 2620.98706, -2057.96436, 13.24617,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1669, 2620.27197, -2058.10083, 13.24617,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19897, 2620.73926, -2058.19727, 13.06700,   0.00000, 0.00000, 0.12000);
	CreateDynamicObject(918, 2684.94507, -2017.64612, 13.64174,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(918, 2685.14526, -2018.10864, 13.64170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(918, 2684.77368, -2018.26978, 13.64170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(918, 2685.36548, -2019.04199, 13.64170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(918, 2684.89282, -2019.40747, 13.64170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3860, 2684.30542, -2018.88574, 13.65141,   0.00000, 0.00000, 91.75085);
	CreateDynamicObject(917, 2685.42871, -2023.64099, 13.44400,   0.00000, 0.00000, 2.23590);
	CreateDynamicObject(917, 2684.90576, -2024.07764, 13.44400,   0.00000, 0.00000, 92.00240);
	CreateDynamicObject(19638, 2685.55688, -2025.49927, 13.24350,   0.00000, 0.00000, 1.60970);
	CreateDynamicObject(19638, 2685.48706, -2024.27600, 13.24351,   0.00000, 0.00000, 1.60969);
	CreateDynamicObject(823, 2693.91943, -1968.96191, 13.48027,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2700.37085, -1945.54907, 13.48027,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2700.57202, -1962.74866, 13.48027,   0.00000, 0.00000, 303.43582);
	CreateDynamicObject(823, 2700.56616, -1958.36597, 13.48027,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2700.41602, -1952.90784, 13.48027,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2700.32666, -1947.87720, 13.48027,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2689.11646, -1968.92224, 13.48027,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2688.54028, -1963.12195, 13.48027,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2691.92529, -1954.18616, 13.48027,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2685.55005, -1953.13257, 13.48027,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2682.43848, -1969.13000, 13.48027,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2683.37158, -1964.36694, 13.68127,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2676.81641, -1962.03870, 13.68127,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2677.92896, -1966.32104, 13.68127,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2678.32056, -1969.33936, 13.68127,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2664.87842, -1949.92847, 13.68127,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2666.35327, -1960.80725, 13.68127,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2668.68311, -1964.90027, 13.68127,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2673.40869, -1965.89978, 13.68127,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2667.79321, -1969.57410, 13.68127,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(823, 2671.65308, -1969.08472, 13.68127,   0.00000, 0.00000, 326.88464);
	CreateDynamicObject(967, 2703.47485, -1971.66870, 12.54161,   0.00000, 0.00000, 269.27966);
	CreateDynamicObject(19868, 2703.79663, -1968.25342, 12.40828,   0.00000, 0.00000, 270.07629);
	CreateDynamicObject(19868, 2703.68481, -1962.96533, 12.40828,   0.00000, 0.00000, 270.51239);
	CreateDynamicObject(19868, 2703.78687, -1957.86462, 12.40828,   0.00000, 0.00000, 270.51239);
	CreateDynamicObject(19868, 2703.86646, -1953.23096, 12.40828,   0.00000, 0.00000, 270.51239);
	CreateDynamicObject(3860, 2684.51074, -2024.93677, 13.64958,   0.00000, 0.00000, 91.81085);
	CreateDynamicObject(1096, 2686.32593, -2033.68823, 12.99127,   0.00000, 0.00000, 328.50870);
	CreateDynamicObject(1096, 2685.99072, -2031.00793, 13.70678,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3860, 2684.85864, -2031.98669, 13.58557,   0.00000, 0.00000, 91.81085);
	CreateDynamicObject(19637, 2685.76416, -2023.83093, 12.50115,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19636, 2685.76880, -2024.00110, 12.59908,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19636, 2684.84399, -2024.99756, 13.24350,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19137, 2636.21362, -1983.23938, 13.91197,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1458, 2700.25586, -2019.29102, 12.93216,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3005, 2698.77466, -2016.37842, 12.53855,   0.00000, 0.00000, 339.67773);
	CreateDynamicObject(3005, 2701.60864, -2017.90747, 12.53855,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1438, 2702.54175, -2025.47607, 12.49405,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1440, 2701.50000, -2016.59558, 13.10934,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1421, 2703.07056, -2020.09094, 13.29105,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1412, 2703.05054, -2030.74805, 13.71850,   0.00000, 0.00000, -89.00000);
	CreateDynamicObject(1413, 2702.96704, -2036.13525, 13.62230,   0.00000, 0.00000, 91.00000);
	CreateDynamicObject(1412, 2701.58325, -2014.03186, 13.93590,   0.00000, 0.00000, 357.29117);
	CreateDynamicObject(1412, 2685.63281, -2014.02527, 13.93590,   0.00000, 0.00000, 0.23034);
	CreateDynamicObject(19473, 2628.95752, -2063.76831, 12.54976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2629.84692, -2063.83594, 12.54976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2628.32910, -2062.53125, 12.54976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2629.14209, -2062.53638, 12.54976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2629.82422, -2062.77002, 12.54976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2628.11694, -2061.54297, 12.54976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2629.05981, -2061.44775, 12.54976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2627.07959, -2061.75220, 12.54976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19868, 2623.83325, -2024.70593, 12.22990,   0.00000, 0.00000, 269.13687);
	CreateDynamicObject(19868, 2623.89429, -2019.30835, 12.43090,   0.00000, 0.00000, 269.48755);
	CreateDynamicObject(19868, 2623.93311, -2013.37939, 12.43699,   0.00000, 0.00000, 270.62122);
	CreateDynamicObject(19868, 2623.91284, -2008.14270, 12.43699,   0.00000, 0.00000, 269.98105);
	CreateDynamicObject(19868, 2623.91602, -2002.80518, 12.33599,   0.00000, 0.00000, 269.91000);
	CreateDynamicObject(19868, 2623.87012, -1997.41235, 12.33599,   0.00000, 0.00000, 270.82626);
	CreateDynamicObject(1421, 2703.07056, -2020.09094, 13.29105,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1412, 2703.05054, -2030.74805, 13.71850,   0.00000, 0.00000, -89.00000);
	CreateDynamicObject(1413, 2702.96704, -2036.13525, 13.62230,   0.00000, 0.00000, 91.00000);
	CreateDynamicObject(1413, 2704.20581, -2025.20422, 13.82020,   4.00000, -1.00000, 268.90689);
	CreateDynamicObject(1413, 2704.37964, -2019.97998, 13.88970,   0.00000, 0.00000, -91.00000);
	CreateDynamicObject(1412, 2697.39673, -2013.95813, 13.83590,   0.00000, 0.00000, 359.10294);
	CreateDynamicObject(1412, 2685.63281, -2014.02527, 13.93590,   0.00000, 0.00000, 0.23034);
	CreateDynamicObject(18666, 2699.10303, -1981.50854, 17.31745,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18667, 2699.17090, -1977.82483, 15.32510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18662, 2638.35303, -1991.00610, 14.56802,   0.00000, 0.00000, 0.33165);
	CreateDynamicObject(18664, 2681.36377, -1988.06848, 14.57480,   0.00000, 0.00000, 0.21730);
	CreateDynamicObject(1413, 2699.14331, -2038.93652, 13.62230,   0.00000, 0.00000, 1.27410);
	CreateDynamicObject(1728, 2637.31372, -2046.04285, 12.52590,   0.00000, 0.00000, -40.00000);
	CreateDynamicObject(2121, 2639.31885, -2049.50049, 13.03210,   0.00000, 0.00000, -105.00000);
	CreateDynamicObject(2121, 2639.55933, -2048.38867, 13.01770,   0.00000, 0.00000, -69.00000);
	CreateDynamicObject(2315, 2636.67554, -2047.87463, 12.53759,   0.00000, 0.00000, 326.89999);
	CreateDynamicObject(910, 2639.79395, -2053.05762, 13.73990,   0.00000, 0.00000, -91.00000);
	CreateDynamicObject(1338, 2639.90283, -2051.47998, 13.23577,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3168, 2637.17969, -2062.53174, 12.37932,   0.00000, 0.00000, 269.84592);
	CreateDynamicObject(19843, 2634.72949, -2062.45728, 15.55602,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2657.19263, -2060.46069, 18.51880,   90.00000, 0.00000, 359.78235);
	CreateDynamicObject(1413, 2626.33960, -2064.55151, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2626.26074, -2062.18140, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2626.18457, -2059.90063, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2631.23389, -2059.93408, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2631.31128, -2062.25708, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2631.39136, -2064.65869, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2636.48779, -2064.69043, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2636.40894, -2062.32251, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2636.42725, -2059.87280, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2641.52734, -2060.01880, 18.51880,   90.00000, 0.00000, 359.25681);
	CreateDynamicObject(1413, 2641.55347, -2062.40161, 18.51880,   90.00000, 0.00000, 359.78235);
	CreateDynamicObject(1413, 2641.58960, -2064.77466, 18.51880,   90.00000, 0.00000, 359.78235);
	CreateDynamicObject(1413, 2646.82886, -2064.77466, 18.51880,   90.00000, 0.00000, 359.78235);
	CreateDynamicObject(1413, 2646.82886, -2062.35034, 18.51880,   90.00000, 0.00000, 359.78235);
	CreateDynamicObject(1413, 2646.82886, -2059.94702, 18.51880,   90.00000, 0.00000, 359.78235);
	CreateDynamicObject(1413, 2651.89795, -2059.99365, 18.51880,   90.00000, 0.00000, 359.78235);
	CreateDynamicObject(1413, 2651.86426, -2062.41455, 18.51880,   90.00000, 0.00000, 359.78235);
	CreateDynamicObject(1413, 2651.82983, -2064.86157, 18.51880,   90.00000, 0.00000, 359.78235);
	CreateDynamicObject(1413, 2657.13135, -2064.83447, 18.51880,   90.00000, 0.00000, 359.78235);
	CreateDynamicObject(1413, 2657.16187, -2062.64160, 18.51880,   90.00000, 0.00000, 359.78235);
	CreateDynamicObject(1413, 2657.19263, -2060.46069, 18.51880,   90.00000, 0.00000, 359.78235);
	CreateDynamicObject(1413, 2659.30420, -2063.02344, 17.27401,   0.00000, 0.00000, 270.89255);
	CreateDynamicObject(1413, 2659.53540, -2061.84326, 17.21570,   0.00000, 0.00000, 270.68338);
	CreateDynamicObject(1413, 2659.56396, -2063.20093, 13.48861,   0.00000, 0.00000, 270.68338);
	CreateDynamicObject(1413, 2659.30420, -2063.02344, 14.89192,   0.00000, 0.00000, 270.89255);
	CreateDynamicObject(19772, 2661.09155, -2058.45679, 13.04633,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2660.01367, -2058.45190, 13.04633,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2660.01367, -2058.45190, 14.31458,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2661.06006, -2058.45679, 14.31458,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2661.06006, -2058.45679, 15.65120,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2660.00342, -2058.44604, 15.45020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2659.53540, -2061.84326, 14.96954,   0.00000, 0.00000, 270.68338);
	CreateDynamicObject(1413, 2659.53540, -2061.84326, 13.48861,   0.00000, 0.00000, 270.68338);
	CreateDynamicObject(1413, 2641.87354, -2059.21460, 19.86548,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2626.16235, -2059.31641, 19.86548,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2631.40161, -2059.39575, 19.86548,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2636.74878, -2059.25195, 19.86548,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.65039, -2060.34937, 17.82631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.60669, -2064.68506, 17.93212,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.63330, -2063.28418, 17.95624,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.65137, -2061.86694, 17.87308,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.65039, -2060.34937, 13.14933,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.65137, -2061.86694, 13.14933,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.63330, -2063.28418, 13.14933,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2617.40308, -2064.64111, 13.14933,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.65039, -2060.34937, 14.30600,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.65137, -2061.86694, 14.31757,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.65039, -2060.34937, 14.30600,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.65137, -2061.86694, 14.31757,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2617.46362, -2064.64380, 14.34105,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.63330, -2063.28418, 14.32925,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.65039, -2060.34937, 15.43347,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.65137, -2061.86694, 15.45631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2617.33740, -2064.64087, 15.49118,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.63330, -2063.28418, 15.49088,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.65039, -2060.34937, 16.58227,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.65137, -2061.86694, 16.61660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.60669, -2064.68506, 16.66307,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.63330, -2063.28418, 16.67450,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3256, 2654.76904, -2107.51196, 12.69316,   0.00000, 0.00000, 359.83389);
	CreateDynamicObject(849, 2582.49316, -2113.56030, 12.96358,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(849, 2582.81030, -2119.89404, 12.84976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(849, 2582.83154, -2116.70874, 12.84976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.60669, -2064.68506, 14.34105,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.60669, -2064.68506, 13.14933,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2623.60669, -2064.68506, 15.49118,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2622.51172, -2064.68213, 14.34105,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2622.49854, -2064.67944, 13.14933,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2622.48584, -2064.67920, 15.49118,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2621.43164, -2064.67383, 14.34105,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2621.40820, -2064.67114, 13.14933,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2621.38403, -2064.67090, 15.49118,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2620.39380, -2064.66626, 14.34105,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2620.36060, -2064.66357, 13.14933,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2620.32593, -2064.66333, 15.49118,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2619.37622, -2064.65845, 14.34105,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2619.33350, -2064.65576, 13.14933,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2619.28809, -2064.65552, 15.49118,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2618.40894, -2064.65112, 14.34105,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2618.35718, -2064.64844, 13.14933,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19772, 2618.30176, -2064.64819, 15.49118,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1460, 2630.99170, -2060.65137, 13.25715,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1460, 2626.52100, -2060.55688, 13.25615,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2630.02783, -2061.45068, 12.54976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2627.77954, -2063.62329, 12.54976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2627.30469, -2062.57715, 12.54976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 2626.66797, -2063.46826, 12.54976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2626.26074, -2062.18140, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2622.12793, -2059.94043, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2622.18726, -2064.46606, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2620.09619, -2059.97485, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2618.64722, -2062.98633, 18.51880,   90.00000, 0.00000, 270.31766);
	CreateDynamicObject(19868, 2623.88135, -2030.15234, 12.44273,   0.00000, 0.00000, 270.39343);
	CreateDynamicObject(19868, 2623.93457, -2033.76099, 12.44273,   0.00000, 0.00000, 270.39343);
	CreateDynamicObject(19868, 2621.11304, -2036.47314, 12.44270,   0.00000, 0.00000, 179.65207);
	CreateDynamicObject(19868, 2619.48853, -2036.50464, 12.44270,   0.00000, 0.00000, 179.65207);
	CreateDynamicObject(19868, 2616.95410, -2046.16968, 12.54020,   0.00000, 0.00000, -91.00000);
	CreateDynamicObject(19868, 2616.88232, -2051.36255, 12.54020,   0.00000, 0.00000, -91.00000);
	CreateDynamicObject(19868, 2618.11768, -2060.19678, 12.60910,   0.00000, 0.00000, 269.92383);
	CreateDynamicObject(1221, 2617.29980, -2037.23547, 14.69161,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1221, 2617.29980, -2037.23547, 13.04490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1221, 2617.29980, -2037.23547, 13.86725,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1221, 2617.34424, -2038.34607, 14.67835,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1221, 2617.34424, -2038.34607, 13.04701,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1221, 2617.34424, -2038.34607, 13.86315,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1221, 2617.38501, -2039.40588, 14.68074,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1221, 2617.38501, -2039.40588, 13.04419,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1221, 2617.38501, -2039.40588, 13.96554,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1221, 2617.45703, -2040.39893, 14.66531,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1221, 2617.45703, -2040.39893, 12.92071,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1221, 2617.45703, -2040.39893, 13.84195,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1413, 2622.14966, -2062.33838, 18.51880,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(14400, 2682.36646, -1949.92883, 27.99303,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14400, 2693.27271, -1949.79285, 27.99303,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14400, 2687.82178, -1949.99744, 27.99303,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(17969, 2669.22729, -1942.62659, 24.01437,   0.00000, 0.00000, 268.93011);
	CreateDynamicObject(4227, 2674.27026, -1942.89136, 17.69082,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(639, 2668.13843, -1942.18176, 27.63650,   0.00000, 0.00000, 269.23962);
	CreateDynamicObject(639, 2645.34424, -1942.31836, 16.50119,   0.00000, 0.00000, 268.54962);
	CreateDynamicObject(639, 2660.67188, -1942.24817, 17.86683,   0.00000, 0.00000, 268.79626);
	CreateDynamicObject(14402, 2643.46509, -1944.82971, 19.18800,   0.00000, 0.00000, 359.86252);
	CreateDynamicObject(14402, 2643.75439, -1945.72278, 19.18800,   0.00000, 0.00000, 359.86252);
	CreateDynamicObject(14402, 2646.62842, -1945.62256, 19.18800,   0.00000, 0.00000, 359.86252);
	CreateDynamicObject(14402, 2643.26611, -1948.20349, 19.18800,   0.00000, 0.00000, 359.86252);
	CreateDynamicObject(19781, 2693.84253, -1958.05554, 12.52039,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1427, 2624.36328, -1942.68420, 13.08288,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1427, 2632.62695, -1942.81970, 13.08288,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1427, 2631.80444, -1942.80615, 13.08288,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1427, 2630.96777, -1942.79236, 13.08288,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1427, 2630.13916, -1942.77881, 13.08288,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1427, 2629.31763, -1942.76538, 13.08288,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1427, 2628.50220, -1942.75208, 13.08288,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1427, 2627.67358, -1942.73853, 13.08288,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1427, 2626.85718, -1942.72510, 13.08288,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1427, 2626.02148, -1942.71143, 13.08288,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1427, 2625.18481, -1942.69763, 13.08288,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1422, 2628.38550, -1941.90076, 12.84295,   0.00000, 0.00000, 0.00000);


	//-> Obelisco | By. NúO
	new Obelisco [1];
	Obelisco [0] = CreateObject(8397, 1474.39465, -2287.03369, 16.39310,   0.00000, 0.00000, 0.00000, 500000.0);
	SetObjectMaterial(Obelisco [0], 0, 4002, "cityhall_lan", "LAcityhwal1", 0 );

	CreateDynamicObject(3509, 1505.05322, -2338.49365, 12.24909,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1486.91589, -2318.33911, 11.17098,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1460.63416, -2264.33276, 11.17098,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1488.74695, -2281.38354, 11.17098,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1509.14050, -2303.05933, 11.17098,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1448.12439, -2296.98413, 11.17098,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(620, 1493.49768, -2253.07910, 11.17098,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1470.34082, -2291.65503, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1469.56641, -2291.62573, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1472.21899, -2291.68164, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1472.32458, -2291.52148, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1474.05664, -2291.74585, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1475.67871, -2291.53003, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1476.88171, -2291.53369, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1477.99072, -2291.48535, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1479.02686, -2291.64185, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1479.24072, -2291.86182, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1479.01001, -2290.26782, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1479.40649, -2288.53882, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1479.13037, -2287.25195, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1479.05017, -2286.05640, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1479.05383, -2284.61426, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1478.96436, -2282.89014, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1478.73828, -2282.46118, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1476.89783, -2281.97388, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1475.49634, -2282.34839, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1474.12695, -2281.93286, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1472.83325, -2282.01709, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1471.46558, -2282.13354, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1469.77551, -2282.41260, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1469.42371, -2282.68237, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1469.73828, -2282.60693, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1469.47461, -2283.97534, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1469.61646, -2285.45752, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1469.57275, -2287.30566, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1469.69141, -2289.03931, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1469.62366, -2290.56519, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1470.58118, -2282.31958, 12.76722,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 1473.51318, -2282.27759, 12.76720,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(870, 1476.98523, -2282.39136, 12.76720,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(870, 1479.12000, -2285.59912, 12.76720,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3509, 1404.26489, -2302.85938, 12.37964,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3509, 1404.26489, -2269.07813, 12.37960,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3509, 1379.36719, -2269.07813, 12.37960,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3509, 1379.36719, -2302.85938, 12.37960,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(712, 1537.13391, -2234.05396, 21.64844,   356.85840, 0.00000, 3.14159);
	CreateDynamicObject(19126, 1469.30518, -2281.89429, 12.95710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1469.33057, -2292.22095, 12.95710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1479.31677, -2292.21704, 12.95710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19126, 1479.24353, -2281.83008, 12.95710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1419, 1474.39465, -2293.10034, 13.04140,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1419, 1478.47961, -2293.10034, 13.04140,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1419, 1470.33679, -2293.10034, 13.04140,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1419, 1468.31995, -2287.03369, 13.04140,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1419, 1468.31995, -2291.08643, 13.04140,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1419, 1480.53186, -2291.09277, 13.04140,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1419, 1480.53186, -2287.03369, 13.04140,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1419, 1480.53186, -2282.95630, 13.04140,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1419, 1478.47961, -2280.91211, 13.04140,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1419, 1474.39465, -2280.91211, 13.04140,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1419, 1468.31995, -2282.95630, 13.04140,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1419, 1470.33679, -2280.91211, 13.04140,   0.00000, 0.00000, 180.00000);


	//-> Casas del 24/7 Ayuntamiento | By. NúO
	new C24_7A [10];

	C24_7A [0] = CreateObject(3555, 1328.92822, -1837.24963, 15.17259,   0.00000, 0.00000, 90.00000+0.0,500000.0);
	SetObjectMaterial(C24_7A [0], 0, 6100, "law_doontoon", "mono1_sfe", 0 ); // Piedras
	SetObjectMaterial(C24_7A [0], 2, 8534, "tikimotel", "LAcityhwal1", 0 ); // Paredes
	SetObjectMaterial(C24_7A [0], 3, 8534, "tikimotel", "rooftiles1", 0 ); // Techo

	C24_7A [1] = CreateObject(3555, 1328.92822, -1825.99561, 15.17260,   0.00000, 0.00000, 90.00000+0.0,500000.0);
	SetObjectMaterial(C24_7A [1], 0, 6100, "law_doontoon", "mono1_sfe", 0 ); // Piedras
	SetObjectMaterial(C24_7A [1], 2, 8534, "tikimotel", "LAcityhwal1", 0 ); // Paredes
	SetObjectMaterial(C24_7A [1], 3, 8534, "tikimotel", "rooftiles1", 0 ); // Techo

	C24_7A [2] = CreateObject(3555, 1328.92822, -1814.80762, 15.17260,   0.00000, 0.00000, 90.00000+0.0,500000.0);
	SetObjectMaterial(C24_7A [2], 0, 6100, "law_doontoon", "mono1_sfe", 0 ); // Piedras
	SetObjectMaterial(C24_7A [2], 2, 8534, "tikimotel", "LAcityhwal1", 0 ); // Paredes
	SetObjectMaterial(C24_7A [2], 3, 8534, "tikimotel", "rooftiles1", 0 ); // Techo

	C24_7A [3] = CreateObject(3555, 1328.92822, -1803.49341, 15.17260,   0.00000, 0.00000, 90.00000+0.0,500000.0);
	SetObjectMaterial(C24_7A [3], 0, 6100, "law_doontoon", "mono1_sfe", 0 ); // Piedras
	SetObjectMaterial(C24_7A [3], 2, 8534, "tikimotel", "LAcityhwal1", 0 ); // Paredes
	SetObjectMaterial(C24_7A [3], 3, 8534, "tikimotel", "rooftiles1", 0 ); // Techo

	C24_7A [4] = CreateObject(3555, 1328.92822, -1792.00903, 15.17260,   0.00000, 0.00000, 90.00000+0.0,500000.0);
	SetObjectMaterial(C24_7A [4], 0, 6100, "law_doontoon", "mono1_sfe", 0 ); // Piedras
	SetObjectMaterial(C24_7A [4], 2, 8534, "tikimotel", "LAcityhwal1", 0 ); // Paredes
	SetObjectMaterial(C24_7A [4], 3, 8534, "tikimotel", "rooftiles1", 0 ); // Techo

	C24_7A [5] = CreateObject(3555, 1328.92822, -1780.69373, 15.17260,   0.00000, 0.00000, 90.00000+0.0,500000.0);
	SetObjectMaterial(C24_7A [5], 0, 6100, "law_doontoon", "mono1_sfe", 0 ); // Piedras
	SetObjectMaterial(C24_7A [5], 2, 8534, "tikimotel", "LAcityhwal1", 0 ); // Paredes
	SetObjectMaterial(C24_7A [5], 3, 8534, "tikimotel", "rooftiles1", 0 ); // Techo

	C24_7A [6] = CreateObject(3555, 1328.92822, -1769.50793, 15.17260,   0.00000, 0.00000, 90.00000+0.0,500000.0);
	SetObjectMaterial(C24_7A [6], 0, 6100, "law_doontoon", "mono1_sfe", 0 ); // Piedras
	SetObjectMaterial(C24_7A [6], 2, 8534, "tikimotel", "LAcityhwal1", 0 ); // Paredes
	SetObjectMaterial(C24_7A [6], 3, 8534, "tikimotel", "rooftiles1", 0 ); // Techo

	C24_7A [7] = CreateObject(3555, 1328.92822, -1758.41394, 15.17260,   0.00000, 0.00000, 90.00000+0.0,500000.0);
	SetObjectMaterial(C24_7A [7], 0, 6100, "law_doontoon", "mono1_sfe", 0 ); // Piedras
	SetObjectMaterial(C24_7A [7], 2, 8534, "tikimotel", "LAcityhwal1", 0 ); // Paredes
	SetObjectMaterial(C24_7A [7], 3, 8534, "tikimotel", "rooftiles1", 0 ); // Techo

	C24_7A [8] = CreateObject(3555, 1328.92822, -1747.33838, 15.17260,   0.00000, 0.00000, 90.00000+0.0,500000.0);
	SetObjectMaterial(C24_7A [8], 0, 6100, "law_doontoon", "mono1_sfe", 0 ); // Piedras
	SetObjectMaterial(C24_7A [8], 2, 8534, "tikimotel", "LAcityhwal1", 0 ); // Paredes
	SetObjectMaterial(C24_7A [8], 3, 8534, "tikimotel", "rooftiles1", 0 ); // Techo

	CreateDynamicObject(1372, 1335.51782, -1839.83716, 12.66440,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1372, 1335.51782, -1822.74304, 12.66440,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1372, 1335.51782, -1817.22620, 12.66440,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1372, 1335.51782, -1800.33191, 12.66440,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1372, 1335.51782, -1789.00854, 12.66440,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1372, 1335.51782, -1783.16992, 12.66440,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1372, 1335.51782, -1772.05237, 12.66440,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1372, 1335.51782, -1755.22229, 12.66440,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1372, 1335.51782, -1744.14917, 12.66440,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1265, 1335.43018, -1838.57104, 12.91983,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 1335.39160, -1818.47961, 12.91983,   0.00000, 0.00000, 4.38000);
	CreateDynamicObject(1265, 1335.40552, -1819.35974, 12.91983,   0.00000, 0.00000, -30.30000);
	CreateDynamicObject(1265, 1335.34949, -1801.57434, 12.91983,   0.00000, 0.00000, 4.38000);
	CreateDynamicObject(1265, 1335.42578, -1781.92383, 12.91983,   0.00000, 0.00000, 4.38000);
	CreateDynamicObject(1265, 1335.45935, -1773.20215, 12.91983,   0.00000, 0.00000, 4.38000);
	CreateDynamicObject(1265, 1335.51147, -1770.81812, 12.91983,   0.00000, 0.00000, 4.38000);
	CreateDynamicObject(1265, 1336.14709, -1755.17822, 12.91983,   0.00000, 0.00000, 4.38000);
	CreateDynamicObject(1265, 1335.80115, -1745.43457, 12.91983,   0.00000, 0.00000, 4.38000);
	CreateDynamicObject(2026, 1324.07336, -1837.45251, 15.87990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1324.07336, -1826.13611, 15.87990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1324.07336, -1815.02576, 15.87990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1324.07336, -1803.64941, 15.87990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1324.07336, -1792.23145, 15.87990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1324.07336, -1780.86792, 15.87990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1324.07336, -1769.74011, 15.87990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1324.07336, -1758.60144, 15.87990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2026, 1324.07336, -1747.50317, 15.87990,   0.00000, 0.00000, 0.00000);


	//-> Casas | By. NúO
	CreateObject(14755, -79.76019, 1375.42126, 1079.20508,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, -80.68050, 1382.76636, 1077.94690,   0.00000, 0.00000, 0.00000);
	CreateObject(14756, -48.48457, 1458.49207, 1086.61377,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, -47.69450, 1457.73669, 1084.60840,   0.00000, 0.00000, 90.00000);
	CreateObject(14748, 41.38534, 1440.95935, 1083.41199,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 46.51220, 1438.62793, 1081.40894,   0.00000, 0.00000, 90.00000);
	CreateObject(14750, 11.03331, 1314.19482, 1088.33093,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 6.96000, 1304.85022, 1081.82263,   0.00000, 0.00000, 0.00000);
	CreateObject(14754, 85.66241, 1280.42249, 1082.82739,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 82.19940, 1271.31091, 1078.86523,   0.00000, 0.00000, 0.00000);
	CreateObject(14758, 155.35648, 1409.17212, 1087.30750,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 154.62061, 1409.09656, 1085.43335,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 156.12061, 1409.09656, 1085.43335,   0.00000, 0.00000, 0.00000);
	CreateObject(14714, 289.94763, 1509.23218, 1079.22510,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 289.17270, 1501.17688, 1077.42126,   0.00000, 0.00000, 0.00000);
	CreateObject(14700, 329.35416, 1516.43005, 1086.31531,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 328.56949, 1512.34375, 1084.81165,   0.00000, 0.00000, 0.00000);
	CreateObject(14711, 382.01254, 1498.42480, 1080.69409,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 391.08289, 1505.09924, 1079.09644,   0.00000, 0.00000, 90.00000);
	CreateObject(14710, 366.74869, 1381.78625, 1080.31787,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 376.35840, 1377.81616, 1078.80579,   0.00000, 0.00000, 90.00000);
	CreateObject(14701, 448.67178, 1363.61853, 1083.28748,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 447.54770, 1353.26965, 1081.21570,   0.00000, 0.00000, 0.00000);
	CreateObject(14703, 506.95187, 1366.91003, 1080.07947,   0.00000, 0.00000, 0.00000);
	CreateObject(1504, 508.85950, 1353.45654, 1075.78345,   0.00000, 0.00000, 0.00000);
	CreateObject(14722, 510.94690, 1363.57544, 1078.67737,   0.00000, 0.00000, 0.00000);
	CreateObject(14724, 510.99319, 1363.60266, 1078.67590,   0.00000, 0.00000, 0.00000);
	CreateObject(14715, 510.92340, 1363.51001, 1078.70215,   0.00000, 0.00000, 0.00000);
	CreateObject(14723, 510.91971, 1363.70605, 1078.84021,   0.00000, 0.00000, 0.00000);
	CreateObject(14736, 755.25836, 1419.45801, 1102.58032,   0.00000, 0.00000, 0.00000);
	CreateObject(14738, 753.20190, 1415.76831, 1104.04199,   0.00000, 0.00000, 0.00000);
	CreateObject(1504, 744.47321, 1411.75403, 1101.42236,   0.00000, 0.00000, 0.00000);
	CreateObject(14713, 289.97849, 1289.53406, 1079.25183,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 294.37189, 1284.51709, 1077.43616,   0.00000, 0.00000, 0.00000);
	CreateObject(14718, 188.29053, 1293.25732, 1081.13208,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 190.53439, 1288.35291, 1081.13416,   0.00000, 0.00000, 0.00000);
	CreateObject(14712, 287.90448, 1249.52588, 1083.25146,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 290.09601, 1241.95874, 1081.70117,   0.00000, 0.00000, 0.00000);
	CreateObject(14709, 245.01108, 1155.45520, 1081.63599,   0.00000, 0.00000, 0.00000);
	CreateObject(14735, 342.67169, 1081.66528, 1082.87891,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 325.45471, 1074.26355, 1081.25549,   0.00000, 0.00000, 0.00000);
	CreateObject(14708, 200.11450, 1119.56934, 1083.97693,   0.00000, 0.00000, 0.00000);
	CreateObject(14706, 277.86502, 1069.62952, 1085.65552,   0.00000, 0.00000, 0.00000);
	CreateObject(14707, 275.53461, 992.44232, 1087.27319,   0.00000, 0.00000, 0.00000);
	CreateObject(15029, 2265.87500, -1122.75220, 1049.62781,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2260.34570, -1121.88794, 1047.87683,   0.00000, 0.00000, 90.00000);
	CreateObject(15031, 2281.78003, -1121.99768, 1049.92285,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2284.04028, -1126.90771, 1049.91650,   0.00000, 0.00000, 0.00000);
	CreateObject(15055, 2374.03271, -1102.76465, 1049.87073,   0.00000, 0.00000, 0.00000);
	CreateObject(1504, 2369.77124, -1094.13245, 1048.61951,   0.00000, 0.00000, 0.00000);
	CreateObject(15042, 2318.45508, -1230.66187, 1048.40820,   0.00000, 0.00000, 0.00000);
	CreateObject(1501, 2312.65112, -1231.38013, 1046.40540,   0.00000, 0.00000, 0.00000);
	CreateObject(15053, 2243.98071, -1024.30042, 1048.01758,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2243.21191, -1027.78198, 1046.76501,   0.00000, 0.00000, 0.00000);
	CreateObject(15054, 2260.93286, -1251.45007, 1051.05786,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 2273.48657, -1243.43054, 1047.59131,   0.00000, 0.00000, 90.00000);
	CreateObject(15041, 2158.54736, -1220.96997, 1050.11694,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 2149.11328, -1216.07935, 1048.11365,   0.00000, 0.00000, 0.00000);
	CreateObject(15046, 2364.22144, -1082.74231, 1048.01733,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 2363.47827, -1075.46021, 1046.76379,   0.00000, 0.00000, 0.00000);
	CreateObject(15048, 2364.55444, -1179.42346, 1055.79187,   0.00000, 0.00000, 0.00000);
	CreateObject(15059, 2364.56909, -1179.41418, 1055.79187,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 2372.00317, -1184.51221, 1052.20117,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 2373.50317, -1184.51221, 1052.20117,   0.00000, 0.00000, 0.00000);
	CreateObject(14859, 245.20708, 321.97745, 1000.59143,   0.00000, 0.00000, 0.00000);
	CreateObject(14865, 269.22012, 322.22049, 998.14349,   0.00000, 0.00000, 0.00000);
	CreateObject(14889, 363.51450, 304.98868, 998.14722,   0.00000, 0.00000, 0.00000);
	CreateObject(15033, 2177.35718, -1069.85181, 1049.47449,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2190.13110, -1074.29504, 1049.47742,   0.00000, 0.00000, 90.00000);
	CreateObject(15034, 2254.38940, -1108.71704, 1049.87268,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2254.09644, -1113.33044, 1048.11633,   0.00000, 0.00000, 0.00000);
	CreateObject(15030, 2293.09204, -1092.09229, 1049.62341,   0.00000, 0.00000, 0.00000);
	CreateObject(2904, 2298.69800, -1093.70605, 1048.97290,   0.00000, 0.00000, 90.00000);
	CreateObject(1535, 2298.64600, -1094.47375, 1047.87195,   0.00000, 0.00000, 90.00000);
	CreateObject(14876, 304.82809, 328.74170, 1003.21881,   0.00000, 0.00000, 0.00000);
	CreateObject(14877, 306.45309, 334.84299, 1000.21881,   0.00000, 0.00000, 0.00000);


	//-> Leñador | By. Edinson
	CreateDynamicObject(17457, -570.88019, -1490.22913, 10.51511,   -1.98000, -1.32000, -142.08002);
	CreateDynamicObject(3286, -566.70563, -1479.84790, 13.35605,   0.60000, 1.08000, 16.55999);
	CreateDynamicObject(3419, -553.42316, -1491.11450, 8.40726,   -0.60000, -2.04000, 38.64000);


	//-> Deposito | By. Edinson
	CreateDynamicObject(5837, -481.48563, -558.42505, 25.97714,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3458, -517.94897, -558.83051, 25.93505,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1597, -480.77600, -480.04428, 27.05149,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1597, -501.88507, -479.65829, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -522.32013, -480.08255, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -543.15369, -480.01431, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -562.80817, -480.17029, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -583.58685, -480.20047, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(6296, -504.66312, -522.02258, 26.62269,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, -469.13492, -559.99615, 24.63004,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, -504.24918, -506.07968, 24.67746,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, -504.05792, -539.75946, 24.67746,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -485.51678, -561.37286, 24.83320,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -488.17297, -561.37085, 24.83320,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -483.79755, -562.34674, 24.83315,   0.00000, 0.00000, 90.00000);


	//-> Garajes | By. Edinson
	new garg;

	CreateObject(3354, -2460.04688, -626.38354, 13.01109,   0.00000, 0.00000, 90.00000);
	CreateObject(3354, -2412.56616, -642.18176, 12.99715,   0.00000, 0.00000, 90.00000);
	CreateObject(3354, -2397.39404, -598.26202, 13.01110,   0.00000, 0.00000, 133.32021);
	// ——— Pequeño
	garg = CreateObject(18981, -2461.87158, -633.33533, 11.23182,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "bwtilebroth", 0);
	garg = CreateObject(18981, -2461.91162, -633.33679, 16.82644,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2458.95630, -637.70593, 11.71500,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2455.97437, -630.51752, 11.71500,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2466.09595, -630.39453, 11.71500,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2458.91211, -625.88312, 11.71500,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);

	// ——— Mediano
	garg = CreateObject(18981, -2413.29858, -636.12415, 11.23182,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "bwtilebroth", 0);
	garg = CreateObject(18981, -2413.29858, -636.12415, 17.22640,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2406.50415, -634.00873, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2415.04199, -642.64331, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2423.60986, -639.16626, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2415.74731, -629.33917, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);

	// ——— Grande
	garg = CreateObject(18981, -2402.85938, -592.28430, 11.33661,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "bwtilebroth", 0);
	garg = CreateObject(18981, -2402.85938, -592.28430, 18.15434,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2402.52710, -581.26819, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2396.96826, -598.51227, 11.23180,   0.00000, 0.00000, 133.32021);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2412.33765, -592.73846, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2408.76904, -603.04407, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2391.55151, -589.30396, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);


	//-> VIP Interior | By. Edinson
	new vip;
	vip = CreateDynamicObject(18981, -2312.12012, 176.00507, 40.90909,   0.00000, 90.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 14669, "711c", "bwtilebroth", 0);
	vip = CreateDynamicObject(18981, -2312.12012, 176.00507, 33.84071,   0.00000, 90.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 14669, "711c", "bwtilebroth", 0);
	vip = CreateDynamicObject(18981, -2310.21997, 185.58154, 34.33010,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "pagodaroof4", 0);
	vip = CreateDynamicObject(18981, -2306.54492, 168.78226, 34.33010,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "pagodaroof4", 0);
	vip = CreateDynamicObject(18981, -2300.25610, 176.28162, 34.33012,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "walpaper_dragn", 0);
	vip = CreateDynamicObject(18981, -2317.55054, 176.00523, 34.33012,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "walpaper_dragn", 0);
	CreateDynamicObject(14782, -2301.08594, 173.50267, 35.27818,   0.00000, 0.00000, -90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2302.33643, 176.29814, 34.85120,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2303.31592, 175.35020, 34.83290,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(18885, -2304.57178, 169.64328, 35.41940,   0.00000, 0.00000, 180.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2305.49854, 171.11031, 34.83290,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2304.23950, 174.37891, 34.85120,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19125, -2305.56519, 169.54500, 34.53240,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2302.63916, 169.61447, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2299.97900, 169.61218, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19125, -2301.00928, 172.50560, 34.53237,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2315.71436, 184.32672, 34.29805,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1569, -2300.83130, 181.89047, 34.25342,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.95142, 183.70245, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2317.14917, 185.42450, 36.64207,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2300.29199, 185.29639, 36.64207,   0.00000, 0.00000, 0.06000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2300.25146, 169.14325, 36.64207,   0.00000, 0.00000, 0.06000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2317.29077, 169.08047, 36.64207,   0.00000, 0.00000, 0.06000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2312.09448, 184.31015, 34.29810,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.91797, 176.08099, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.91870, 173.34589, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.93628, 170.60448, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.91748, 180.99863, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.89819, 181.89952, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.92456, 186.22101, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.89355, 175.18550, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.90820, 170.87070, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14608, -2313.09473, 171.20479, 35.76169,   0.00000, 0.00000, -44.27999, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2300.75024, 182.61356, 35.94881,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(11725, -2301.32983, 180.70349, 34.72287,   0.00000, 0.00000, -97.25999, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2725, -2312.99316, 182.97859, 34.71739,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2726, -2313.06274, 183.00795, 35.49006,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19128, -2312.42822, 175.15434, 34.32055,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2316.30835, 179.53941, 34.29810,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2316.38892, 175.74800, 34.29810,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3524, -2316.35669, 178.62827, 34.60627,   0.00000, 0.00000, 91.80000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, -2316.98535, 173.88535, 36.64071,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, -2317.02515, 183.12483, 36.64071,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, -2310.48535, 185.00037, 36.64070,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2307.42261, 184.73531, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2304.75415, 184.71144, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2302.06519, 184.70569, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2301.51392, 179.32788, 34.29810,   0.00000, 0.00000, -90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	// Mappeo Villa by Hanks
	CreateDynamicObject(19529, 3991.23047, 1492.90381, -9791.60938,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19535, 2409.37549, -1506.85742, 22.83320,   0.00000, 0.00000, -180.05991);
	CreateDynamicObject(19535, 2394.38257, -1506.85583, 22.83530,   0.00000, 0.00000, -180.05991);
	CreateDynamicObject(19435, 2387.68921, -1496.32764, 22.91230,   -0.06000, -90.00000, -270.06000);
	CreateDynamicObject(19435, 2387.55884, -1492.59766, 22.91230,   -0.06000, -90.00000, -89.82001);
	CreateDynamicObject(19435, 2387.54883, -1489.09753, 22.91230,   -0.06000, -90.00000, -89.82001);
	CreateDynamicObject(19435, 2387.53955, -1486.09668, 22.91230,   -0.06000, -90.00000, -89.82001);
	CreateDynamicObject(3651, 2410.15356, -1464.58496, 27.64390,   0.00000, 0.00000, 270.12000);
	CreateDynamicObject(3651, 2376.69995, -1503.71057, 27.63920,   0.00000, 0.00000, -180.30009);
	CreateDynamicObject(3651, 2411.13062, -1470.26416, 27.64330,   0.00000, 0.00000, 90.12000);
	CreateDynamicObject(3651, 2362.64429, -1504.57251, 27.65126,   0.00000, 0.00000, -0.30010);
	CreateDynamicObject(3651, 2363.08350, -1484.25891, 27.65120,   0.00000, 0.00000, 89.70000);
	CreateDynamicObject(3651, 2362.22412, -1470.20605, 27.66140,   0.00000, 0.00000, -90.30000);
	CreateDynamicObject(17637, 2391.18701, -1414.32019, 22.92430,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19435, 2385.12744, -1506.37451, 22.91230,   -0.06000, -90.00000, -179.93991);
	CreateDynamicObject(3061, 2368.59839, -1508.53149, 25.98400,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(3651, 2362.55029, -1450.77673, 27.66920,   0.00000, 0.00000, -0.30010);
	CreateDynamicObject(673, 2380.94287, -1511.15466, 16.40511,   0.00000, 0.00000, 11.22000);
	CreateDynamicObject(1264, 2384.24243, -1508.32849, 25.20145,   0.00000, 0.00000, -164.94000);
	CreateDynamicObject(19435, 2358.11719, -1489.52734, 22.91230,   -0.06000, -90.00000, -89.82001);
	CreateDynamicObject(3061, 2369.79590, -1499.65759, 26.01770,   0.00000, 0.00000, -90.36000);
	CreateDynamicObject(3061, 2362.10083, -1499.60498, 26.02610,   0.00000, 0.00000, -90.24000);
	CreateDynamicObject(3651, 2376.61035, -1449.89075, 27.67220,   0.00000, 0.00000, -180.30009);
	CreateDynamicObject(1308, 2363.14648, -1394.71448, 23.19531,   359.31854, -3.30000, -3.14159);
	CreateDynamicObject(19435, 2354.30859, -1501.89172, 22.91230,   -0.06000, -90.00000, -179.93991);
	CreateDynamicObject(3651, 2378.18530, -1484.31409, 27.63320,   0.00000, 0.00000, 89.70000);
	CreateDynamicObject(3651, 2377.31226, -1470.30054, 27.62860,   0.00000, 0.00000, -90.36000);
	CreateDynamicObject(19455, 2357.19214, -1461.74915, 23.07870,   0.00000, 0.00000, -90.30000);
	CreateDynamicObject(19455, 2357.08374, -1503.01428, 23.06270,   0.00000, 0.00000, -90.29999);
	CreateDynamicObject(19455, 2352.36670, -1507.86597, 23.06270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19455, 2357.08105, -1514.32983, 23.06270,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19363, 2352.36108, -1512.75232, 23.05520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19455, 2362.52368, -1509.61938, 23.06270,   0.00000, 0.00000, 0.30000);
	CreateDynamicObject(14411, 2363.45337, -1513.68982, 21.61250,   0.00000, 0.00000, -0.30000);
	CreateDynamicObject(19363, 2360.93872, -1514.34082, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19373, 2360.70728, -1512.64978, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2357.21826, -1512.64368, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2354.19580, -1512.64331, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2360.71558, -1509.45654, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2357.22607, -1509.44360, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2354.19336, -1509.43481, 24.72880,   0.00000, -90.00000, -0.06000);
	CreateDynamicObject(19373, 2354.19141, -1506.23218, 24.72880,   0.00000, -90.00000, -0.12000);
	CreateDynamicObject(19373, 2354.18481, -1504.68628, 24.72880,   0.00000, -90.00000, -0.12000);
	CreateDynamicObject(827, 2355.48364, -1509.85950, 24.81424,   0.00000, 0.00000, 47.34001);
	CreateDynamicObject(19455, 2364.31006, -1509.61658, 23.06270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19373, 2366.14771, -1512.65845, 24.72880,   0.00000, -90.00000, -0.06000);
	CreateDynamicObject(19363, 2365.98877, -1514.34106, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19373, 2366.15161, -1509.45715, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19455, 2368.14355, -1509.60535, 23.06270,   0.00000, 0.00000, 0.30000);
	CreateDynamicObject(19363, 2366.63354, -1514.32996, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(803, 2357.88428, -1511.83496, 25.27958,   0.00000, 0.00000, 31.62000);
	CreateDynamicObject(824, 2357.78564, -1509.06165, 24.81418,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(859, 2354.19678, -1510.57312, 24.81606,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11289, 2355.63574, -1504.86670, 29.62952,   0.00000, 0.00000, -90.42000);
	CreateDynamicObject(8614, 2357.28174, -1486.87207, 26.39120,   0.00000, 0.00000, -90.30000);
	CreateDynamicObject(19373, 2366.32593, -1512.67407, 24.72880,   0.00000, -90.00000, -0.06000);
	CreateDynamicObject(19373, 2366.32886, -1509.46729, 24.72880,   0.00000, -90.00000, -0.06000);
	CreateDynamicObject(14411, 2369.08350, -1513.70679, 21.61250,   0.00000, 0.00000, -0.30000);
	CreateDynamicObject(19455, 2369.92651, -1509.61365, 23.06270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19455, 2375.86792, -1509.54065, 23.06270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19363, 2371.44507, -1514.34912, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19363, 2374.35840, -1514.34766, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19373, 2374.03613, -1510.23450, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2371.75513, -1510.21375, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2371.74414, -1512.67383, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2374.04468, -1512.69202, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(14411, 2376.83936, -1513.72815, 21.61250,   0.00000, 0.00000, -0.30000);
	CreateDynamicObject(19455, 2377.65332, -1509.64758, 23.06270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19363, 2379.35132, -1514.38330, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19363, 2382.56348, -1514.39429, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19363, 2385.27002, -1514.40222, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19363, 2386.78564, -1512.70911, 23.06130,   0.00000, 0.00000, -180.00002);
	CreateDynamicObject(19363, 2386.78735, -1509.50330, 23.06130,   0.00000, 0.00000, -180.00002);
	CreateDynamicObject(14411, 2386.17261, -1505.47339, 21.61250,   0.00000, 0.00000, 89.94000);
	CreateDynamicObject(19363, 2386.78125, -1509.02246, 23.06130,   0.00000, 0.00000, -180.00002);
	CreateDynamicObject(19363, 2385.25146, -1507.50818, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19455, 2382.08374, -1505.26514, 23.06270,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19455, 2382.10278, -1498.31274, 23.06270,   0.00000, 0.00000, -90.35999);
	CreateDynamicObject(19363, 2386.81763, -1503.74890, 23.06130,   0.00000, 0.00000, -180.30000);
	CreateDynamicObject(19363, 2386.83081, -1500.54858, 23.06130,   0.00000, 0.00000, -180.30000);
	CreateDynamicObject(19363, 2386.82520, -1499.88611, 23.06130,   0.00000, 0.00000, -180.30000);
	CreateDynamicObject(19373, 2384.98340, -1503.57446, 24.72880,   0.00000, -90.00000, 0.12000);
	CreateDynamicObject(19373, 2384.99341, -1500.37830, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2385.00562, -1500.01538, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2381.51880, -1499.99707, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2384.95996, -1509.19751, 24.72880,   0.00000, -90.00000, 0.12000);
	CreateDynamicObject(19373, 2384.96802, -1512.40710, 24.72880,   0.00000, -90.00000, 0.12000);
	CreateDynamicObject(19373, 2384.97437, -1512.71912, 24.72880,   0.00000, -90.00000, 0.12000);
	CreateDynamicObject(1432, 2393.23071, -1497.32825, 24.93410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(17969, 2396.34424, -1493.50281, 26.10650,   0.00000, 0.00000, 89.40000);
	CreateDynamicObject(19373, 2381.49121, -1512.71838, 24.72880,   0.00000, -90.00000, 0.12000);
	CreateDynamicObject(19373, 2379.48755, -1512.72522, 24.72880,   0.00000, -90.00000, 0.12000);
	CreateDynamicObject(19373, 2379.47583, -1509.51611, 24.72880,   0.00000, -90.00000, 0.12000);
	CreateDynamicObject(19373, 2381.45996, -1509.51501, 24.72880,   0.00000, -90.00000, 0.12000);
	CreateDynamicObject(824, 2382.24780, -1510.21191, 24.81418,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2672, 2385.33643, -1503.85352, 25.09720,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8614, 2371.59351, -1509.44897, 26.41093,   0.00000, 0.00000, -0.35984);
	CreateDynamicObject(3061, 2368.59839, -1508.53149, 28.84600,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(8614, 2379.30176, -1509.48840, 26.41093,   0.00000, 0.00000, -0.35984);
	CreateDynamicObject(4227, 2404.80859, -1493.48181, 28.81640,   0.00000, 0.00000, -0.30000);
	CreateDynamicObject(2675, 2369.10278, -1510.33020, 24.87872,   0.00000, 0.00000, 81.06000);
	CreateDynamicObject(928, 2364.71289, -1514.82043, 23.27460,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(852, 2371.64526, -1514.45520, 22.96010,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1265, 2375.18530, -1513.65259, 25.17359,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19865, 2386.80884, -1511.91492, 23.85560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19865, 2386.81128, -1509.98071, 23.86560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19865, 2386.84253, -1502.77307, 23.85670,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19865, 2386.83789, -1500.83337, 23.85670,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(853, 2350.11328, -1516.85278, 23.38870,   0.00000, 0.00000, -76.02000);
	CreateDynamicObject(16635, 2384.95044, -1514.41199, 25.24910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2381.23413, -1514.39990, 25.24910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2379.51294, -1514.40283, 25.24910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2374.03809, -1514.37561, 25.24910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2371.75635, -1514.37109, 25.24910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2366.25513, -1514.37329, 25.24910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2360.73267, -1514.35217, 25.24910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2357.00879, -1514.34167, 25.24910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2354.22607, -1514.33826, 25.24910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2384.99536, -1498.34192, 25.25730,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(16635, 2381.27490, -1498.31909, 25.25730,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(18666, 2382.26050, -1499.71191, 26.27370,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(700, 2418.37134, -1495.25220, 20.02860,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14411, 2353.00220, -1502.03540, 21.61250,   0.00000, 0.00000, -90.05997);
	CreateDynamicObject(19455, 2357.09692, -1500.78076, 23.06270,   0.00000, 0.00000, -90.29999);
	CreateDynamicObject(19381, 2371.41797, -1502.99622, 24.74130,   0.00000, 90.06000, -0.30000);
	CreateDynamicObject(19436, 2352.37036, -1499.87842, 23.05860,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19436, 2352.37378, -1498.92334, 23.05860,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19381, 2360.92871, -1503.16370, 24.74130,   0.00000, 90.06000, -0.30000);
	CreateDynamicObject(19545, 2360.03687, -1474.88708, 23.00030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19545, 2379.74365, -1476.69019, 23.00030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19363, 2382.80347, -1494.48242, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19363, 2385.18018, -1494.48853, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19455, 2390.08032, -1494.52063, 23.05470,   0.00000, 0.00000, -0.18000);
	CreateDynamicObject(16635, 2388.19214, -1494.50916, 25.24910,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(16635, 2383.13086, -1494.49353, 25.24910,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(643, 2385.39551, -1499.93079, 25.29560,   0.00000, 0.00000, -47.22001);
	CreateDynamicObject(2675, 2388.34229, -1496.42139, 23.09490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2675, 2385.33911, -1496.16699, 23.07890,   0.00000, 0.00000, 83.39999);
	CreateDynamicObject(19455, 2373.39502, -1488.09692, 23.06270,   0.00000, 0.00000, -0.18000);
	CreateDynamicObject(14411, 2420.32910, -1467.73816, 21.61250,   0.00000, 0.00000, 90.00002);
	CreateDynamicObject(3061, 2415.05347, -1468.28271, 25.99290,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14411, 2412.97314, -1455.07581, 21.61250,   0.00000, 0.00000, -179.69998);
	CreateDynamicObject(3061, 2376.28638, -1508.58337, 25.98400,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19381, 2375.97437, -1495.51416, 24.72130,   0.00000, 90.06000, -0.30000);
	CreateDynamicObject(14411, 2383.05615, -1496.47498, 21.60360,   0.00000, 0.00000, 89.70000);
	CreateDynamicObject(14411, 2356.70728, -1496.10840, 21.60360,   0.00000, 0.00000, -90.23999);
	CreateDynamicObject(19455, 2373.32788, -1494.42041, 23.06270,   0.00000, 0.00000, -90.35999);
	CreateDynamicObject(19455, 2357.26172, -1498.23950, 23.06270,   0.00000, 0.00000, -90.35999);
	CreateDynamicObject(19455, 2357.11108, -1494.23865, 23.06270,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19381, 2363.80469, -1493.55396, 24.74130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(16635, 2352.34668, -1512.49048, 25.26910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(16635, 2352.35547, -1508.76807, 25.26910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(16635, 2352.37085, -1505.04590, 25.26910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19381, 2373.05347, -1493.39160, 24.74130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(19381, 2371.09863, -1483.95007, 24.74130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(859, 2358.52637, -1498.06079, 24.81606,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(859, 2358.66553, -1461.82983, 24.81606,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(859, 2381.14258, -1494.59607, 24.81606,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2356.70215, -1494.26794, 25.22910,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(16635, 2354.23779, -1494.26794, 25.24910,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(14411, 2353.10132, -1471.00720, 21.61250,   0.00000, 0.00000, -90.30000);
	CreateDynamicObject(19436, 2352.39185, -1493.49268, 23.05860,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(19455, 2357.32837, -1472.00110, 23.08360,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19436, 2352.39990, -1491.90076, 23.05860,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3061, 2358.08252, -1484.79761, 26.00610,   0.00000, 0.00000, -360.41989);
	CreateDynamicObject(3061, 2358.08252, -1484.79761, 28.82520,   0.00000, 0.00000, -360.41989);
	CreateDynamicObject(11289, 2415.11182, -1460.24829, 28.98691,   0.00000, 0.00000, -269.88007);
	CreateDynamicObject(8614, 2357.34009, -1479.15405, 26.39120,   0.00000, 0.00000, -90.36000);
	CreateDynamicObject(3061, 2358.14307, -1477.10498, 28.82520,   0.00000, 0.00000, -360.41989);
	CreateDynamicObject(3061, 2358.15112, -1477.10645, 26.00610,   0.00000, 0.00000, -360.41989);
	CreateDynamicObject(14411, 2353.06958, -1484.23962, 21.61250,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19455, 2357.19507, -1470.09668, 23.08360,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19363, 2352.40698, -1489.51306, 23.06130,   0.00000, 0.00000, -179.99997);
	CreateDynamicObject(19455, 2357.15527, -1485.20605, 23.08360,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19363, 2352.41846, -1486.72778, 23.06130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19373, 2354.21826, -1492.55750, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19373, 2356.81299, -1492.55945, 24.74880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19455, 2357.15015, -1483.44153, 23.08360,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19373, 2354.22925, -1489.34436, 24.74880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19373, 2354.23169, -1486.88306, 24.74880,   0.00000, -90.00000, 0.18000);
	CreateDynamicObject(19373, 2357.71509, -1486.86499, 24.74880,   0.00000, -90.00000, 0.36000);
	CreateDynamicObject(19373, 2357.71973, -1489.68384, 24.74880,   0.00000, -90.00000, 0.36000);
	CreateDynamicObject(700, 2354.49976, -1491.93835, 16.51769,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19363, 2352.42578, -1481.76111, 23.08130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19363, 2352.43530, -1479.02954, 23.08130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19455, 2357.15991, -1477.48889, 23.08360,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19373, 2354.25439, -1481.75195, 24.74880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2357.74805, -1481.76318, 24.74880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2354.25952, -1479.17310, 24.74880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2357.74731, -1479.18945, 24.74880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19455, 2357.18237, -1475.71899, 23.08360,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19363, 2352.45044, -1474.02600, 23.08130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(14411, 2353.09473, -1476.48303, 21.61250,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19373, 2354.27759, -1474.03040, 24.74880,   0.00000, -90.00000, -0.12000);
	CreateDynamicObject(19373, 2357.77246, -1474.03015, 24.74880,   0.00000, -90.00000, -0.12000);
	CreateDynamicObject(19373, 2354.27222, -1473.68018, 24.74880,   0.00000, -90.00000, -0.12000);
	CreateDynamicObject(19436, 2352.45703, -1472.71814, 23.07860,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19373, 2357.77026, -1473.68860, 24.74880,   0.00000, -90.00000, -0.12000);
	CreateDynamicObject(16635, 2352.41895, -1473.90356, 25.22910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(16635, 2356.70508, -1498.23035, 25.22910,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(16635, 2354.25708, -1498.21350, 25.24910,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(19363, 2352.46094, -1468.57495, 23.08130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19363, 2352.45605, -1465.37903, 23.08130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19363, 2352.46118, -1463.24402, 23.08130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19373, 2354.28857, -1468.40857, 24.74880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(19373, 2357.78052, -1468.41443, 24.74880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(19373, 2354.29688, -1465.20752, 24.74880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(19373, 2357.79590, -1465.21094, 24.74880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(1516, 2354.09253, -1486.79541, 25.01550,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1712, 2355.16162, -1488.22559, 24.83689,   0.00000, 0.00000, -162.48001);
	CreateDynamicObject(16635, 2354.23438, -1500.78552, 25.24910,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(16635, 2352.43677, -1468.31653, 25.22910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(16635, 2352.44409, -1464.59326, 25.22910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(3651, 2396.52124, -1470.26428, 27.59130,   0.00000, 0.00000, 89.70000);
	CreateDynamicObject(19381, 2384.86646, -1479.93298, 24.74130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(19381, 2386.38403, -1470.30786, 24.74130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(19381, 2381.42798, -1462.19873, 24.74130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(16635, 2385.35083, -1493.25073, 24.85730,   -89.94000, 39.18000, 22.74000);
	CreateDynamicObject(8614, 2383.04468, -1475.33679, 26.41093,   0.00000, 0.00000, 89.88017);
	CreateDynamicObject(3061, 2382.24292, -1477.40967, 28.84520,   0.00000, 0.00000, -180.47990);
	CreateDynamicObject(8614, 2383.08594, -1467.69690, 26.41093,   0.00000, 0.00000, 89.64017);
	CreateDynamicObject(3061, 2382.29077, -1469.74194, 26.02190,   0.00000, 0.00000, -180.47990);
	CreateDynamicObject(17526, 2431.38403, -1393.31934, 25.50380,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(17636, 2411.16528, -1402.87964, 28.01730,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3651, 2395.59790, -1464.64709, 27.59130,   0.00000, 0.00000, -90.30001);
	CreateDynamicObject(19381, 2403.22705, -1473.59058, 24.72130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(19381, 2403.26685, -1463.95923, 24.72130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(3061, 2400.57959, -1463.84485, 26.02690,   0.00000, 0.00000, -180.35991);
	CreateDynamicObject(8614, 2415.92383, -1465.23657, 26.41093,   0.00000, 0.00000, 90.24018);
	CreateDynamicObject(19455, 2420.96631, -1459.14795, 23.06270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19363, 2420.97290, -1465.31519, 23.06130,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(19455, 2416.23853, -1468.74463, 23.06270,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19455, 2416.23267, -1466.81824, 23.06270,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19455, 2420.96338, -1473.64563, 23.06270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19455, 2416.24072, -1483.21790, 23.07070,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19381, 2415.66260, -1473.64685, 24.74130,   0.00000, 90.06000, -0.12000);
	CreateDynamicObject(3061, 2415.05347, -1468.28271, 28.84060,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2419.12305, -1483.23083, 25.23730,   0.00000, 0.00000, -0.06000);
	CreateDynamicObject(19373, 2419.14038, -1465.15417, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19373, 2415.64307, -1465.14453, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19373, 2419.12866, -1461.94604, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19373, 2419.13574, -1458.74658, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19363, 2419.43433, -1454.41272, 23.06130,   0.00000, 0.00000, -90.24000);
	CreateDynamicObject(19363, 2416.23242, -1454.39124, 23.06130,   0.00000, 0.00000, -90.24000);
	CreateDynamicObject(19363, 2415.47949, -1454.39856, 23.06130,   0.00000, 0.00000, -90.24000);
	CreateDynamicObject(19455, 2413.96021, -1459.12158, 23.06270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19455, 2411.57764, -1459.14258, 23.06270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19373, 2419.14746, -1456.10059, 24.72880,   0.00000, -90.00000, -0.12000);
	CreateDynamicObject(19373, 2415.79541, -1456.08167, 24.72880,   0.00000, -90.00000, -0.12000);
	CreateDynamicObject(19373, 2415.63403, -1459.29150, 24.72880,   0.00000, -90.00000, -0.12000);
	CreateDynamicObject(19373, 2415.77856, -1462.22510, 24.72880,   0.00000, -90.00000, -0.12000);
	CreateDynamicObject(19455, 2406.73584, -1454.41284, 23.06270,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(2674, 2383.11011, -1463.19128, 24.83960,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2672, 2383.48071, -1482.02979, 25.10772,   0.00000, 0.00000, 14.76000);
	CreateDynamicObject(1441, 2391.05347, -1469.67517, 25.45390,   0.00000, 0.00000, 271.20001);
	CreateDynamicObject(3061, 2382.24292, -1477.40967, 26.02040,   0.00000, 0.00000, -180.47990);
	CreateDynamicObject(3061, 2382.29077, -1469.74194, 28.83220,   0.00000, 0.00000, -180.47990);
	CreateDynamicObject(19381, 2406.22852, -1459.30444, 24.72130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(16635, 2420.98364, -1470.61511, 25.22910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(16635, 2420.95313, -1464.99658, 25.16910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(16635, 2420.97559, -1461.26697, 25.18910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(16635, 2420.97705, -1457.79822, 25.20910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(16635, 2420.98413, -1456.30078, 25.20910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(16635, 2419.14478, -1454.42200, 25.23730,   0.00000, 0.00000, -0.24000);
	CreateDynamicObject(16635, 2415.84863, -1454.40967, 25.25730,   0.00000, 0.00000, -0.24000);
	CreateDynamicObject(16635, 2409.72119, -1454.40857, 25.23730,   0.00000, 0.00000, -0.24000);
	CreateDynamicObject(16635, 2405.99731, -1454.40662, 25.23730,   0.00000, 0.00000, -0.24000);
	CreateDynamicObject(19381, 2396.77002, -1458.35376, 24.72130,   0.00000, 90.06000, -11.64000);
	CreateDynamicObject(19455, 2397.21704, -1453.43958, 23.07870,   0.00000, 0.00000, -101.64000);
	CreateDynamicObject(19455, 2385.38574, -1447.60474, 23.06270,   0.00000, 0.00000, -124.37996);
	CreateDynamicObject(14411, 2388.61084, -1454.88538, 21.61250,   0.00000, 0.00000, 145.55992);
	CreateDynamicObject(19455, 2389.86890, -1456.40002, 23.05870,   0.00000, 0.00000, -34.44000);
	CreateDynamicObject(19381, 2393.59033, -1459.63696, 24.72130,   0.00000, 90.06000, 55.56000);
	CreateDynamicObject(19381, 2383.18799, -1459.77759, 24.74130,   0.00000, 90.06000, 55.56000);
	CreateDynamicObject(19455, 2386.61841, -1454.17371, 23.05870,   0.00000, 0.00000, -34.44000);
	CreateDynamicObject(16635, 2403.71021, -1454.40210, 25.25730,   0.00000, 0.00000, -0.24000);
	CreateDynamicObject(19865, 2399.38428, -1453.87939, 23.85670,   0.00000, 0.00000, 78.36000);
	CreateDynamicObject(19865, 2394.99438, -1452.98267, 23.85670,   0.00000, 0.00000, 78.36000);
	CreateDynamicObject(19865, 2391.14111, -1454.53687, 23.85670,   0.00000, 0.00000, 145.49989);
	CreateDynamicObject(19865, 2389.28809, -1457.23743, 23.85670,   0.00000, 0.00000, 145.49989);
	CreateDynamicObject(19865, 2387.85767, -1461.78003, 23.85670,   0.00000, 0.00000, 179.57980);
	CreateDynamicObject(19381, 2391.88354, -1466.06274, 24.74130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(19381, 2382.23877, -1451.90161, 24.74130,   0.00000, 90.06000, 55.62000);
	CreateDynamicObject(14411, 2356.84985, -1459.62073, 21.60360,   0.00000, 0.00000, -90.23999);
	CreateDynamicObject(19381, 2363.94385, -1459.60254, 24.74130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(19381, 2374.44556, -1459.64673, 24.74130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(19381, 2370.41309, -1474.32336, 24.74130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(19381, 2370.86450, -1469.25574, 24.74130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(19455, 2357.21875, -1457.75439, 23.06270,   0.00000, 0.00000, -90.29999);
	CreateDynamicObject(19373, 2354.29810, -1463.42212, 24.74080,   0.00000, -90.00000, -0.30000);
	CreateDynamicObject(19373, 2357.77661, -1463.42407, 24.74080,   0.00000, -90.00000, -0.30000);
	CreateDynamicObject(19363, 2352.43433, -1456.20996, 23.08130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19373, 2354.27466, -1456.04456, 24.74880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(14411, 2353.08276, -1448.09229, 21.61250,   0.00000, 0.00000, -90.05997);
	CreateDynamicObject(19363, 2352.43750, -1453.00903, 23.08130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19363, 2352.44385, -1450.90710, 23.08130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19455, 2357.17188, -1449.26013, 23.06270,   0.00000, 0.00000, -90.29999);
	CreateDynamicObject(19455, 2357.16724, -1446.97546, 23.06270,   0.00000, 0.00000, -90.29999);
	CreateDynamicObject(19373, 2354.28345, -1452.83484, 24.74880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2354.27393, -1450.92847, 24.74880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2357.76294, -1456.05884, 24.74880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19363, 2384.95044, -1445.84180, 23.06130,   0.00000, 0.00000, -146.16010);
	CreateDynamicObject(19363, 2385.88330, -1447.22180, 23.06130,   0.00000, 0.00000, -146.16010);
	CreateDynamicObject(19373, 2382.29883, -1446.23889, 24.74880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2383.67310, -1446.98596, 24.74880,   0.00000, -90.00000, -56.39999);
	CreateDynamicObject(19373, 2384.39160, -1448.03540, 24.74880,   0.00000, -90.00000, -56.39999);
	CreateDynamicObject(16635, 2388.22485, -1451.82166, 25.25730,   0.00000, 0.00000, -124.56000);
	CreateDynamicObject(16635, 2385.70752, -1446.95190, 25.25730,   0.00000, 0.00000, -236.39990);
	CreateDynamicObject(16635, 2383.64136, -1443.84692, 25.25730,   0.00000, 0.00000, -236.39990);
	CreateDynamicObject(1308, 2377.36426, -1423.37866, 23.31447,   358.87814, -7.87488, -4.38471);
	CreateDynamicObject(19363, 2388.38818, -1494.49329, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19435, 2389.29272, -1496.32813, 22.91230,   -0.06000, -90.00000, -270.06000);
	CreateDynamicObject(19435, 2388.63647, -1498.87756, 22.91230,   -0.06000, -90.00000, -180.00000);
	CreateDynamicObject(19381, 2386.45361, -1489.58032, 24.72190,   0.00000, 90.06000, -0.12000);
	CreateDynamicObject(3651, 2396.79761, -1489.53284, 27.63920,   0.00000, 0.00000, -0.30009);
	CreateDynamicObject(14411, 2397.63232, -1498.63855, 21.61250,   0.00000, 0.00000, -0.06000);
	CreateDynamicObject(19455, 2396.67603, -1494.54639, 23.06270,   0.00000, 0.00000, -0.18000);
	CreateDynamicObject(19363, 2395.13721, -1499.26868, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19363, 2391.58276, -1499.25586, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(3651, 2410.83154, -1488.61389, 27.63920,   0.00000, 0.00000, 179.93996);
	CreateDynamicObject(14411, 2403.33960, -1498.63525, 21.61250,   0.00000, 0.00000, -0.06000);
	CreateDynamicObject(19373, 2394.83179, -1497.57349, 24.72880,   0.00000, -90.00000, -0.30000);
	CreateDynamicObject(19373, 2391.90576, -1497.55957, 24.72880,   0.00000, -90.00000, -0.06000);
	CreateDynamicObject(19373, 2391.90967, -1494.34961, 24.72880,   0.00000, -90.00000, -0.06000);
	CreateDynamicObject(673, 2384.97534, -1491.15649, 16.40511,   0.00000, 0.00000, 11.22000);
	CreateDynamicObject(19455, 2402.32886, -1494.53455, 23.06270,   0.00000, 0.00000, -0.18000);
	CreateDynamicObject(3061, 2410.44678, -1493.48853, 25.99200,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(14411, 2411.01953, -1498.64441, 21.61250,   0.00000, 0.00000, -0.06000);
	CreateDynamicObject(19363, 2408.46997, -1499.27417, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19373, 2408.15967, -1497.58093, 24.72880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(16635, 2391.93652, -1499.27637, 25.24910,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(19865, 2390.06177, -1496.76331, 23.83670,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2394.81470, -1499.29199, 25.24910,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(8614, 2405.75635, -1494.37219, 26.41093,   0.00000, 0.00000, -0.05984);
	CreateDynamicObject(8614, 2413.42920, -1494.38184, 26.41093,   0.00000, 0.00000, -0.11984);
	CreateDynamicObject(19455, 2410.00317, -1494.54700, 23.06270,   0.00000, 0.00000, -0.18000);
	CreateDynamicObject(19363, 2419.42358, -1499.28284, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(14411, 2417.33667, -1481.36792, 21.60360,   0.00000, 0.00000, 89.70000);
	CreateDynamicObject(19455, 2416.23340, -1479.34766, 23.05070,   0.00000, 0.00000, -90.30000);
	CreateDynamicObject(19455, 2420.95752, -1474.64380, 23.06270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19455, 2416.22046, -1490.15454, 23.06270,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(14411, 2420.31616, -1491.36475, 21.61250,   0.00000, 0.00000, 90.06001);
	CreateDynamicObject(19455, 2416.21948, -1492.41162, 23.06270,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(16635, 2415.39331, -1483.23218, 25.23730,   0.00000, 0.00000, -0.06000);
	CreateDynamicObject(19363, 2420.94824, -1497.77075, 23.06130,   0.00000, 0.00000, -180.18001);
	CreateDynamicObject(19363, 2420.95630, -1494.56042, 23.06130,   0.00000, 0.00000, -180.18001);
	CreateDynamicObject(19363, 2420.95605, -1493.93445, 23.06130,   0.00000, 0.00000, -180.18001);
	CreateDynamicObject(19363, 2420.95581, -1488.64270, 23.06130,   0.00000, 0.00000, -180.18001);
	CreateDynamicObject(19363, 2420.96680, -1485.43323, 23.06130,   0.00000, 0.00000, -180.18001);
	CreateDynamicObject(19363, 2420.96631, -1484.74133, 23.06130,   0.00000, 0.00000, -180.18001);
	CreateDynamicObject(19373, 2419.11841, -1494.11011, 24.72880,   0.00000, -90.00000, -0.12000);
	CreateDynamicObject(19373, 2413.67041, -1494.36841, 24.72880,   0.00000, -90.00000, -0.12000);
	CreateDynamicObject(19373, 2419.10547, -1497.59753, 24.72880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(19373, 2415.61011, -1497.58423, 24.72880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(19373, 2419.11279, -1495.91333, 24.72880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(19373, 2417.17163, -1494.37866, 24.72880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(19373, 2419.12134, -1488.46484, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19373, 2415.62134, -1488.46167, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19373, 2419.12793, -1485.25940, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19373, 2419.13379, -1484.90991, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19373, 2415.63525, -1484.90674, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19373, 2412.13647, -1484.90625, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19373, 2415.65625, -1486.96411, 24.72880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19865, 2407.49878, -1499.27625, 23.84070,   0.00000, 0.00000, 89.88000);
	CreateDynamicObject(19865, 2414.30127, -1499.28271, 23.84070,   0.00000, 0.00000, 89.88000);
	CreateDynamicObject(19435, 2387.57202, -1511.10217, 22.92430,   -0.06000, -90.00000, -89.99990);
	CreateDynamicObject(19435, 2387.56934, -1507.60327, 22.92430,   -0.06000, -90.00000, -89.99990);
	CreateDynamicObject(19435, 2387.56567, -1504.10791, 22.92430,   -0.06000, -90.00000, -89.99990);
	CreateDynamicObject(19435, 2387.56567, -1502.59839, 22.92030,   -0.06000, -90.00000, -89.99990);
	CreateDynamicObject(19865, 2418.46826, -1499.29639, 23.84070,   0.00000, 0.00000, 89.88000);
	CreateDynamicObject(19865, 2420.95288, -1496.81567, 23.85670,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19865, 2420.95142, -1494.87769, 23.85670,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1419, 2420.97510, -1485.28687, 25.32940,   0.00000, 0.00000, 89.88000);
	CreateDynamicObject(1419, 2420.97021, -1488.15417, 25.32940,   0.00000, 0.00000, 89.88000);
	CreateDynamicObject(19455, 2376.92261, -1444.82007, 23.06270,   0.00000, 0.00000, -179.70016);
	CreateDynamicObject(2672, 2376.22583, -1422.52173, 23.34400,   0.00000, 0.00000, -40.08000);
	CreateDynamicObject(14411, 2375.90918, -1440.73157, 21.61250,   0.00000, 0.00000, -179.69998);
	CreateDynamicObject(19363, 2383.43726, -1443.58606, 23.06130,   0.00000, 0.00000, -146.16010);
	CreateDynamicObject(19363, 2382.41602, -1441.62256, 23.06130,   0.00000, 0.00000, -168.83998);
	CreateDynamicObject(19535, 2360.05347, -1435.11536, 22.99710,   0.00000, 0.00000, -179.99989);
	CreateDynamicObject(19535, 2373.57397, -1435.12268, 22.99710,   0.00000, 0.00000, -179.99989);
	CreateDynamicObject(19363, 2378.41626, -1440.09436, 23.06130,   0.00000, 0.00000, -90.30000);
	CreateDynamicObject(19435, 2381.85962, -1436.18982, 22.90630,   -0.06000, -90.00000, -89.99990);
	CreateDynamicObject(19373, 2354.26904, -1445.26709, 24.72480,   0.00000, -90.00000, -0.42000);
	CreateDynamicObject(19363, 2352.44238, -1445.25793, 23.08130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19435, 2381.87476, -1439.69055, 22.90630,   -0.06000, -90.00000, -89.99990);
	CreateDynamicObject(19363, 2380.58740, -1440.10632, 23.06130,   0.00000, 0.00000, -90.30000);
	CreateDynamicObject(16635, 2386.77002, -1450.08472, 24.86730,   -89.94000, 39.18000, 197.75999);
	CreateDynamicObject(19373, 2378.74316, -1441.77478, 24.72480,   0.00000, -90.00000, 0.24000);
	CreateDynamicObject(19373, 2378.75781, -1444.98132, 24.72480,   0.00000, -90.00000, 0.24000);
	CreateDynamicObject(19373, 2380.64307, -1442.11877, 24.72480,   0.00000, -90.00000, 11.22000);
	CreateDynamicObject(19373, 2381.89844, -1444.58118, 24.72480,   0.00000, -90.00000, 33.84000);
	CreateDynamicObject(19373, 2380.28662, -1441.77258, 24.72480,   0.00000, -90.00000, -0.30000);
	CreateDynamicObject(16635, 2380.24341, -1440.07922, 25.25730,   0.00000, 0.00000, -180.29990);
	CreateDynamicObject(16635, 2378.71240, -1440.07263, 25.25730,   0.00000, 0.00000, -180.29990);
	CreateDynamicObject(16635, 2383.66113, -1441.69678, 23.01400,   -89.94000, 39.18000, 329.58014);
	CreateDynamicObject(19455, 2374.91724, -1444.82727, 23.06270,   0.00000, 0.00000, -179.70016);
	CreateDynamicObject(3061, 2369.94800, -1445.84851, 25.99200,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19373, 2373.08789, -1441.78955, 24.71880,   0.00000, -90.00000, 0.06000);
	CreateDynamicObject(19455, 2371.35547, -1444.82727, 23.06270,   0.00000, 0.00000, -179.70016);
	CreateDynamicObject(19363, 2373.37329, -1440.09387, 23.06130,   0.00000, 0.00000, -90.06001);
	CreateDynamicObject(14411, 2370.27319, -1440.73193, 21.61250,   0.00000, 0.00000, -179.69998);
	CreateDynamicObject(19363, 2372.85010, -1440.09827, 23.06130,   0.00000, 0.00000, -90.06001);
	CreateDynamicObject(19373, 2373.09033, -1444.99646, 24.71880,   0.00000, -90.00000, 0.06000);
	CreateDynamicObject(19455, 2369.45288, -1444.82922, 23.06270,   0.00000, 0.00000, -179.70016);
	CreateDynamicObject(19363, 2367.90967, -1440.09460, 23.06130,   0.00000, 0.00000, -90.06001);
	CreateDynamicObject(3061, 2362.24805, -1445.81604, 25.99200,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(19363, 2365.19727, -1440.09448, 23.06130,   0.00000, 0.00000, -90.06001);
	CreateDynamicObject(14411, 2362.57153, -1440.73352, 21.61250,   0.00000, 0.00000, -179.69998);
	CreateDynamicObject(19455, 2363.69971, -1444.82214, 23.06270,   0.00000, 0.00000, -179.70016);
	CreateDynamicObject(19373, 2367.61279, -1441.78784, 24.71880,   0.00000, -90.00000, -0.06000);
	CreateDynamicObject(19373, 2365.51221, -1441.78284, 24.71880,   0.00000, -90.00000, -0.06000);
	CreateDynamicObject(19373, 2367.62280, -1444.99500, 24.71880,   0.00000, -90.00000, 0.06000);
	CreateDynamicObject(19373, 2365.52808, -1444.98511, 24.71880,   0.00000, -90.00000, 0.06000);
	CreateDynamicObject(19455, 2361.70557, -1444.83679, 23.06270,   0.00000, 0.00000, -179.70016);
	CreateDynamicObject(19363, 2352.44336, -1442.05225, 23.08130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19363, 2352.44580, -1441.61914, 23.08130,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19363, 2360.16333, -1440.10620, 23.06130,   0.00000, 0.00000, -90.06001);
	CreateDynamicObject(19363, 2356.95337, -1440.10278, 23.06130,   0.00000, 0.00000, -90.06001);
	CreateDynamicObject(19363, 2353.96558, -1440.10083, 23.06130,   0.00000, 0.00000, -90.06001);
	CreateDynamicObject(19381, 2415.65698, -1474.45874, 24.74130,   0.00000, 90.06000, -0.12000);
	CreateDynamicObject(19381, 2410.24487, -1481.51025, 24.72330,   0.00000, 90.06000, -0.30000);
	CreateDynamicObject(16635, 2420.97876, -1474.34558, 25.20910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(16635, 2420.96851, -1477.52393, 25.18910,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(16635, 2419.12744, -1479.38184, 25.17730,   0.00000, 0.00000, -0.06000);
	CreateDynamicObject(16635, 2417.41968, -1479.37134, 25.17730,   0.00000, 0.00000, -0.06000);
	CreateDynamicObject(19381, 2403.42554, -1483.22510, 24.72330,   0.00000, 90.06000, -0.30000);
	CreateDynamicObject(19381, 2395.36084, -1479.97534, 24.73130,   0.00000, 90.06000, -0.24000);
	CreateDynamicObject(19381, 2382.51074, -1479.92798, 24.73130,   0.00000, 90.06000, -0.30000);
	CreateDynamicObject(673, 2417.90869, -1476.82324, 16.40511,   0.00000, 0.00000, 11.22000);
	CreateDynamicObject(1446, 2356.36743, -1457.76453, 25.05240,   0.00000, 0.00000, -0.24000);
	CreateDynamicObject(1446, 2354.70435, -1457.75684, 25.05240,   0.00000, 0.00000, -0.24000);
	CreateDynamicObject(1446, 2352.41675, -1455.45557, 25.05240,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(1446, 2352.42920, -1451.46594, 25.05240,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19373, 2354.28149, -1441.79529, 24.72480,   0.00000, -90.00000, -0.06000);
	CreateDynamicObject(19373, 2354.28369, -1443.69775, 24.72480,   0.00000, -90.00000, -0.06000);
	CreateDynamicObject(19373, 2357.78687, -1441.79211, 24.72480,   0.00000, -90.00000, 0.06000);
	CreateDynamicObject(19373, 2359.86597, -1441.79602, 24.71680,   0.00000, -90.00000, 0.06000);
	CreateDynamicObject(19373, 2359.86816, -1444.99243, 24.72480,   0.00000, -90.00000, 0.24000);
	CreateDynamicObject(19373, 2356.37207, -1444.99780, 24.72480,   0.00000, -90.00000, 0.24000);
	CreateDynamicObject(1446, 2352.43042, -1444.68115, 25.11240,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(1446, 2352.42944, -1442.33289, 25.11240,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(1446, 2354.86377, -1440.08545, 25.11240,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(1446, 2359.44580, -1440.08936, 25.11240,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(1451, 2419.31079, -1486.25525, 25.26697,   0.00000, 0.00000, -327.60010);
	CreateDynamicObject(1451, 2355.36084, -1468.29224, 25.28790,   0.00000, 0.00000, -90.24000);
	CreateDynamicObject(19865, 2366.14233, -1440.09253, 23.85769,   0.00000, 0.00000, 89.94002);
	CreateDynamicObject(19865, 2366.96387, -1440.09399, 23.85769,   0.00000, 0.00000, 89.94002);
	CreateDynamicObject(16635, 2373.09839, -1440.07800, 25.25730,   0.00000, 0.00000, -180.29990);
	CreateDynamicObject(19865, 2352.37964, -1491.77747, 23.85820,   0.00000, 0.00000, 179.75999);
	CreateDynamicObject(19865, 2352.40283, -1487.66968, 23.85820,   0.00000, 0.00000, 179.75999);
	CreateDynamicObject(19865, 2352.42432, -1480.97363, 23.85820,   0.00000, 0.00000, 179.75999);
	CreateDynamicObject(19865, 2352.43237, -1479.95886, 23.85820,   0.00000, 0.00000, 179.75999);
	CreateDynamicObject(16635, 2355.15381, -1462.74292, 24.84690,   -89.94000, 39.18000, -139.62001);
	CreateDynamicObject(19363, 2388.78052, -1457.97559, 23.08530,   0.00000, 0.00000, -34.43999);
	CreateDynamicObject(19363, 2387.87598, -1460.84192, 23.08530,   0.00000, 0.00000, -0.42000);
	CreateDynamicObject(16635, 2386.92212, -1453.70728, 25.25730,   0.00000, 0.00000, -124.56000);
	CreateDynamicObject(813, 2355.56177, -1443.21362, 26.20487,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(814, 2354.83740, -1492.35217, 26.72869,   0.00000, 0.00000, 44.76000);
	CreateDynamicObject(804, 2354.37549, -1444.01367, 25.75453,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(802, 2355.19312, -1441.94397, 25.11329,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(803, 2358.07813, -1443.47705, 25.54825,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(800, 2379.66284, -1443.96924, 24.81142,   0.00000, 0.00000, -59.03999);
	CreateDynamicObject(801, 2385.28320, -1448.80566, 24.09490,   0.00000, 0.00000, 57.77999);
	CreateDynamicObject(1227, 2357.22437, -1430.34131, 23.84130,   0.00000, 0.00000, 19.79999);
	CreateDynamicObject(1227, 2354.42969, -1430.35400, 23.84130,   0.00000, 0.00000, -16.26000);
	CreateDynamicObject(8614, 2360.15747, -1445.01062, 26.39120,   0.00000, 0.00000, -180.30000);
	CreateDynamicObject(8614, 2367.85376, -1445.05676, 26.39120,   0.00000, 0.00000, -180.30000);
	CreateDynamicObject(803, 2417.96460, -1496.61011, 25.60107,   0.00000, 0.00000, 25.43999);
	CreateDynamicObject(895, 2419.03101, -1475.32300, 24.82520,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(814, 2393.58472, -1455.47485, 26.76008,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(813, 2385.49854, -1492.65979, 26.74938,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1546, 2393.42139, -1497.17175, 25.64220,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(806, 2381.30737, -1442.40283, 26.95245,   0.00000, 0.00000, -80.09999);
	CreateDynamicObject(2821, 2353.54395, -1431.06165, 23.00440,   0.00000, 0.00000, -20.58000);
	CreateDynamicObject(2677, 2355.29419, -1432.53967, 23.27400,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2676, 2355.64233, -1417.55823, 23.05530,   0.00000, 0.00000, -68.88000);
	CreateDynamicObject(2674, 2379.53247, -1395.84412, 23.00860,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2670, 2366.21240, -1442.22327, 24.88550,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2673, 2355.90967, -1484.29614, 24.89270,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1280, 2372.80396, -1511.92786, 25.21410,   0.00000, 0.00000, 90.42000);
	CreateDynamicObject(1951, 2393.28564, -1496.97827, 25.73730,   0.00000, 0.00000, 17.52000);
	CreateDynamicObject(2673, 2407.06055, -1496.75415, 24.90690,   0.00000, 0.00000, -4.74000);
	CreateDynamicObject(2674, 2410.56079, -1494.41406, 27.66430,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1950, 2354.37695, -1487.03003, 25.72140,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1578, 2354.05664, -1486.64063, 25.51810,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2674, 2372.65552, -1512.74866, 24.84400,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1526, 2374.92407, -1445.88440, 26.28000,   0.00000, 0.00000, 269.93988);
	CreateDynamicObject(11744, 2354.75220, -1468.29175, 24.84590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1344, 2367.89014, -1473.86584, 25.48140,   0.00000, 0.00000, 94.56000);
	CreateDynamicObject(1344, 2372.45972, -1487.57092, 25.48140,   0.00000, 0.00000, -97.80002);
	CreateDynamicObject(1344, 2405.47656, -1473.78186, 25.45390,   0.00000, 0.00000, -90.00002);
	CreateDynamicObject(1344, 2405.28076, -1458.94617, 25.45390,   0.00000, 0.00000, 270.06009);
	CreateDynamicObject(2676, 2405.47534, -1477.81006, 24.93600,   0.00000, 0.00000, 129.36000);
	CreateDynamicObject(2673, 2368.25781, -1475.29932, 24.94790,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2670, 2380.19775, -1492.30774, 24.90340,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(849, 2418.96191, -1499.99036, 23.28210,   0.00000, 0.00000, 94.97999);
	CreateDynamicObject(2670, 2414.70117, -1503.26331, 22.90910,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2676, 2414.38623, -1502.15283, 22.92770,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1344, 2373.21680, -1455.59216, 25.48140,   0.00000, 0.00000, -6.71999);
	CreateDynamicObject(854, 2379.40796, -1439.68250, 23.20820,   0.00000, 0.00000, -5.82005);
	CreateDynamicObject(18665, 2368.57983, -1486.32227, 26.20000,   0.00000, 0.00000, 179.75999);
	CreateDynamicObject(1264, 2421.59790, -1455.04907, 23.42670,   0.00000, 0.00000, 8.27996);
	CreateDynamicObject(1432, 2417.97217, -1458.36060, 24.93410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1520, 2418.33081, -1458.48706, 25.60860,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(681, 2419.68506, -1455.66516, 24.81730,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(681, 2416.41064, -1496.63269, 24.81730,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(12957, 2366.29517, -1436.61243, 23.78400,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1369, 2355.51343, -1479.16370, 25.44020,   0.00000, 0.00000, -90.30000);
	CreateDynamicObject(19444, 2354.18213, -1499.88049, 24.73470,   0.18000, -90.06000, -0.36000);
	CreateDynamicObject(19444, 2354.19556, -1499.10120, 24.73470,   0.18000, -90.06000, -0.36000);
	CreateDynamicObject(18726, 2382.30762, -1488.57385, 27.95307,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3061, 2369.18164, -1454.73523, 26.01770,   0.00000, 0.00000, -90.36000);
	CreateDynamicObject(3061, 2376.41699, -1454.79150, 26.01770,   0.00000, 0.00000, -90.36000);
	CreateDynamicObject(3061, 2391.57617, -1467.41479, 26.01770,   0.00000, 0.00000, -0.12000);
	CreateDynamicObject(3061, 2406.15381, -1471.00549, 26.01770,   0.00000, 0.00000, 0.18000);
	CreateDynamicObject(3061, 2403.91504, -1484.59839, 26.01770,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(3061, 2392.80811, -1484.54602, 26.01770,   0.00000, 0.00000, -90.36000);
	CreateDynamicObject(3061, 2367.03760, -1478.31335, 26.01770,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(3061, 2367.10327, -1470.62317, 26.01770,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(3061, 2373.25732, -1477.19397, 26.01770,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(3061, 2373.21851, -1484.85754, 26.01770,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(2672, 2371.89551, -1490.11377, 25.10772,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16635, 2351.06689, -1499.19519, 23.02780,   -89.94000, 39.18000, -218.70000);
	CreateDynamicObject(19377, 2415.79443, -1481.13611, 22.89810,   0.00000, 90.06000, 0.06000);
	CreateDynamicObject(19377, 2387.82983, -1454.99170, 22.91410,   0.00000, 90.06000, -34.44000);
	CreateDynamicObject(19535, 2413.52417, -1506.85681, 22.80920,   0.00000, 0.00000, -180.05991);
	CreateDynamicObject(13591, 2413.47437, -1511.11743, 23.26030,   0.00000, 0.00000, 179.88000);
	CreateDynamicObject(18451, 2419.99463, -1510.71533, 23.48650,   0.00000, 0.00000, 89.82000);
	CreateDynamicObject(13591, 2406.72192, -1511.26831, 23.26840,   0.00000, 0.00000, 178.92010);
	CreateDynamicObject(19455, 2421.12598, -1498.42236, 21.24380,   0.00000, 0.00000, -0.06000);
	CreateDynamicObject(19455, 2421.11011, -1508.05042, 21.24380,   0.00000, 0.00000, -0.06000);
	CreateDynamicObject(19455, 2414.70361, -1514.44080, 21.24380,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19455, 2408.16992, -1514.43298, 21.24380,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(1413, 2418.30493, -1514.29968, 24.11434,   -9.78000, 0.24000, 0.00000);
	CreateDynamicObject(1413, 2413.04272, -1514.29614, 24.13830,   -9.78000, 0.24000, 0.00000);
	CreateDynamicObject(1413, 2406.93872, -1513.74878, 24.13830,   -34.80002, -7.08000, 0.00000);
	CreateDynamicObject(1458, 2415.41602, -1518.47058, 23.24620,   0.00000, 0.00000, -83.16000);
	CreateDynamicObject(18862, 2405.38428, -1512.31763, 23.53771,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18862, 2415.94165, -1511.65137, 23.47861,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(17864, 2365.80518, -1410.73145, 22.98750,   -0.90000, 0.00000, -90.72000);
	CreateDynamicObject(1458, 2377.73193, -1423.64917, 23.27020,   0.00000, 0.00000, -122.52000);
	CreateDynamicObject(3061, 2369.94800, -1445.84851, 28.81720,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(3061, 2362.24805, -1445.81604, 28.81590,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(3061, 2376.28638, -1508.58337, 28.83770,   0.00000, 0.00000, -90.18000);
	CreateDynamicObject(2945, 2366.86133, -1395.35510, 23.97681,   13.50000, 0.06000, 0.00000);
	CreateDynamicObject(1308, 2364.61694, -1395.77405, 25.56220,   1.56000, -180.42000, 0.00000);
	CreateDynamicObject(1308, 2368.50391, -1395.74536, 25.56220,   1.56000, -180.42000, 0.00000);
	CreateDynamicObject(1308, 2369.29028, -1426.14832, 25.56220,   1.56000, -180.42000, 0.00000);
	CreateDynamicObject(1308, 2365.34424, -1426.13110, 25.56220,   1.56000, -180.42000, 0.00000);
	CreateDynamicObject(2945, 2367.14966, -1426.53723, 23.97681,   13.50000, 0.06000, 179.99991);
	CreateDynamicObject(1256, 2353.30933, -1416.90906, 23.60760,   0.00000, 0.00000, -180.00002);
	CreateDynamicObject(1256, 2353.28784, -1405.48706, 23.60760,   0.00000, 0.00000, -180.00002);
	CreateDynamicObject(1256, 2380.33252, -1404.79541, 23.60760,   0.00000, 0.00000, -360.00000);
	CreateDynamicObject(1256, 2380.26563, -1415.80737, 23.60760,   0.00000, 0.00000, -360.00000);
	CreateDynamicObject(19363, 2387.85767, -1462.75171, 23.08530,   0.00000, 0.00000, -0.42000);
	CreateDynamicObject(8614, 2390.75659, -1469.39795, 26.39120,   0.00000, 0.00000, -90.29999);
	CreateDynamicObject(19363, 2389.37012, -1464.27100, 23.08530,   0.00000, 0.00000, 89.75999);
	CreateDynamicObject(19865, 2390.32690, -1464.27844, 23.85670,   0.00000, 0.00000, 269.69977);
	CreateDynamicObject(3061, 2410.44678, -1493.48853, 28.83620,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19455, 2411.84204, -1494.54785, 23.06270,   0.00000, 0.00000, -0.18000);
	CreateDynamicObject(19373, 2413.66455, -1497.57446, 24.72880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(19363, 2416.21484, -1499.27283, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19363, 2413.35010, -1499.27686, 23.06130,   0.00000, 0.00000, -89.88000);
	CreateDynamicObject(3061, 2402.74683, -1493.48682, 25.99200,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19373, 2408.17017, -1494.37463, 24.72880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(19455, 2398.49658, -1494.54675, 23.06270,   0.00000, 0.00000, -0.18000);
	CreateDynamicObject(19455, 2404.12305, -1494.53479, 23.06270,   0.00000, 0.00000, -0.18000);
	CreateDynamicObject(19363, 2405.62573, -1499.27014, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19363, 2400.79248, -1499.26770, 23.06130,   0.00000, 0.00000, -89.88000);
	CreateDynamicObject(19363, 2400.00391, -1499.26855, 23.06130,   0.00000, 0.00000, -89.88000);
	CreateDynamicObject(19363, 2393.43726, -1499.25891, 23.06130,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(19373, 2394.84692, -1494.36426, 24.72880,   0.00000, -90.00000, -0.30000);
	CreateDynamicObject(19373, 2400.48340, -1497.57898, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2400.49683, -1494.37512, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2400.32251, -1497.58289, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(19373, 2400.33569, -1494.37036, 24.72880,   0.00000, -90.00000, -0.24000);
	CreateDynamicObject(3061, 2402.74683, -1493.48682, 28.83660,   0.00000, 0.00000, -90.06000);
	CreateDynamicObject(19373, 2405.94800, -1497.58154, 24.72880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(19373, 2405.95361, -1494.37634, 24.72880,   0.00000, -90.00000, -0.18000);
	CreateDynamicObject(19865, 2406.57568, -1499.27319, 23.84070,   0.00000, 0.00000, 89.88000);
	CreateDynamicObject(16635, 2400.42432, -1499.28040, 25.24910,   0.00000, 0.00000, -0.36000);
	CreateDynamicObject(3061, 2391.57617, -1467.41479, 28.81330,   0.00000, 0.00000, -0.12000);

	//Mappeo Idlewood by Frann
	CreateObject(1496, 1803.53552, -2143.07568, 12.60648,   0.00000, 0.00000, 0.00000);
	CreateObject(1343, 1736.43542, -2098.13574, 13.31427,   0.00000, 0.00000, 0.00000);
	CreateObject(1357, 1765.00769, -2102.10278, 12.81389,   0.00000, 0.00000, 0.00000);
	CreateObject(1462, 1727.82910, -2098.66113, 12.53281,   359.24701, 0.00000, 93.49900);
	CreateObject(921, 1870.51746, -2020.53125, 14.73607,   0.00000, 0.00000, 90.00000);
	CreateObject(928, 1694.46643, -2081.99292, 12.83051,   0.00000, 0.00000, 0.00000);
	CreateObject(951, 1873.55554, -2071.64795, 15.63448,   0.00000, 0.00000, 359.25000);
	CreateObject(2587, 1951.10181, -2029.81506, 14.84088,   0.00000, 358.25000, 0.00000);
	CreateObject(16759, 1726.31641, -2087.82520, 12.61037,   359.74701, 0.00000, 177.99500);
	CreateObject(8508, 1898.92566, -2116.47852, 11.16090,   0.00000, 0.00000, 270.00000);
	CreateObject(5709, 1706.08679, -2154.80493, 3.59058,   0.00000, 0.00000, 90.00000);
	CreateObject(1943, 1674.60107, -2095.76709, 12.80779,   0.00000, 0.00000, 182.24699);
	CreateObject(14401, 1888.51050, -2123.46191, 14.48353,   0.00000, 0.00000, 359.75000);
	CreateObject(2800, 1762.94482, -2136.53857, 12.34688,   0.00000, 0.00000, 126.00000);
	CreateObject(1356, 1671.98572, -2120.45117, 12.67626,   0.00000, 0.00000, 0.00000);
	CreateObject(1551, 1675.32532, -2123.96045, 12.78974,   0.00000, 0.00000, 0.00000);
	CreateObject(18633, 1704.03418, -2084.45117, 13.35000,   1.10000, 90.00000, 70.00000);
	CreateObject(18635, 1713.81421, -2078.46899, 13.36000,   90.00000, 90.00000, 60.00000);
	CreateObject(18644, 1712.41418, -2078.22900, 13.38000,   0.00000, 90.00000, 85.00000);
	CreateObject(18641, 1714.57056, -2078.19214, 13.46500,   0.00000, 0.00000, 4.75000);
	CreateObject(17969, 2161.69653, -1515.56128, 25.74486,   0.00000, 0.00000, 67.19997);
	CreateObject(1227, 2030.04980, -1597.85779, 13.47989,   0.00000, 0.00000, -78.72001);
	CreateObject(2676, 2027.86902, -1595.35364, 12.84423,   0.00000, 0.00000, 0.00000);
	CreateObject(1264, 1986.93311, -1613.92505, 13.10155,   0.00000, 0.00000, 0.00000);
	CreateObject(1264, 1985.44775, -1613.40857, 13.08602,   2.10000, -3.06000, 0.00000);
	CreateObject(17969, 1986.23206, -1598.21997, 14.21661,   0.00000, 0.00000, 225.05998);
	CreateObject(1441, 1983.74011, -1558.13867, 13.28419,   0.00000, 0.00000, 13.14000);
	CreateObject(4227, 1924.93994, -1569.88843, 13.94399,   0.00000, 0.00000, 90.06001);
	CreateObject(11735, 1938.18640, -1600.44360, 21.03421,   0.00000, 0.00000, 0.00000);
	CreateObject(11735, 1937.91907, -1600.50061, 21.04589,   -8.88000, 32.04000, 0.00000);
	CreateObject(1525, 1925.04309, -1594.31042, 17.19847,   0.00000, 0.00000, 0.00000);
	CreateObject(1525, 1924.91565, -1555.18066, 14.00740,   -1.98000, 1.68000, 180.06010);
	CreateObject(1264, 1926.67383, -1595.86975, 13.03188,   0.00000, 0.00000, 0.00000);
	CreateObject(1264, 1927.68140, -1594.67590, 13.03188,   0.00000, 0.00000, -29.63999);
	CreateObject(1327, 1926.10620, -1594.51392, 13.40277,   4.98000, -34.62000, 0.36000);
	CreateObject(1450, 1925.60938, -1568.28113, 13.14953,   -2.04000, 1.08000, -262.07999);
	CreateObject(1227, 1985.73535, -1615.01086, 13.47801,   0.00000, 0.00000, 92.04003);
	CreateObject(1227, 1967.07861, -1590.53882, 13.46106,   0.00000, 0.00000, -43.55996);
	CreateObject(1227, 1957.55127, -1615.02795, 13.38855,   0.00000, 0.00000, 270.54007);
	CreateObject(928, 1957.48071, -1616.92932, 12.82896,   0.00000, 0.00000, 0.00000);
	CreateObject(928, 1957.12817, -1617.55725, 12.84789,   -77.28004, -60.59999, 0.00000);
	CreateObject(928, 1956.87390, -1616.83704, 12.84789,   0.60000, -8.15999, 0.00000);
	CreateObject(1712, 1969.09534, -1593.44934, 12.53582,   0.00000, 0.00000, -45.48005);
	CreateObject(3593, 1963.50598, -1598.08899, 13.01312,   0.00000, 0.00000, 0.60001);
	CreateObject(2676, 1966.36194, -1592.77283, 12.82038,   0.00000, 0.00000, 0.00000);
	CreateObject(2672, 1970.93359, -1596.21155, 12.89392,   0.00000, 0.00000, 0.00000);
	CreateObject(1280, 1967.63940, -1598.34607, 13.06010,   0.00000, 0.00000, -79.74001);
	CreateObject(1823, 1967.42371, -1595.63953, 12.63333,   0.00000, 0.00000, -28.38000);
	CreateObject(1484, 1964.25891, -1595.28247, 13.61780,   -5.46000, 25.98000, 0.00000);
	CreateObject(1484, 1964.39307, -1595.28967, 13.62570,   -4.20000, 31.26000, -82.56000);
	CreateObject(1484, 1964.12573, -1595.25269, 13.38090,   58.13990, -49.26000, -34.08000);
	CreateObject(19369, 1975.21692, -1587.05859, 14.33040,   0.00000, 0.00000, 45.18000);
	CreateObject(19369, 1975.25562, -1593.75110, 14.33040,   0.00000, 0.00000, 134.39999);
	CreateObject(19369, 1977.53674, -1591.49792, 14.33040,   0.00000, 0.00000, -45.24000);
	CreateObject(19369, 1973.88806, -1595.10083, 14.33040,   0.00000, 0.00000, 135.06000);
	CreateObject(19369, 1969.68213, -1593.02319, 14.33040,   0.00000, 0.00000, 224.69991);
	CreateObject(19369, 1971.68774, -1595.03882, 14.33040,   0.00000, 0.00000, 224.63989);
	CreateObject(17969, 1970.59009, -1594.18677, 14.39161,   0.00000, 0.00000, 44.75999);
	CreateObject(19369, 1969.61206, -1590.83105, 14.33040,   0.00000, 0.00000, 316.07990);
	CreateObject(1413, 1945.08862, -1592.74072, 13.74159,   0.00000, 0.00000, -90.65999);
	CreateObject(1413, 1945.28552, -1583.97180, 13.74159,   0.00000, 0.00000, -90.65999);
	CreateObject(1413, 1945.23962, -1587.47644, 13.74159,   0.00000, 0.00000, -90.65999);
	CreateObject(1458, 2026.65381, -1599.02979, 12.91911,   0.00000, 0.00000, -65.10000);
	CreateObject(852, 1982.72107, -1594.48926, 12.55222,   0.00000, 0.00000, -46.97999);
	CreateObject(1265, 1975.17078, -1586.03833, 12.99645,   0.00000, 0.00000, 0.00000);
	CreateObject(1529, 1975.62573, -1556.77441, 13.90946,   0.00000, 0.00000, 133.86003);
	CreateObject(1227, 1974.50427, -1551.34082, 13.41827,   0.00000, 0.00000, -224.63991);
	CreateObject(1450, 1972.78467, -1549.69287, 13.19154,   0.00000, 0.00000, 135.96019);
	CreateObject(5130, 1936.08374, -1545.82544, 15.26964,   0.00000, 0.00000, 90.12000);
	CreateObject(5130, 1990.80017, -1567.24036, 15.26964,   0.00000, 0.00000, 90.12000);
	CreateObject(1280, 1957.51611, -1576.46680, 12.97795,   0.00000, 0.00000, -134.33990);
	CreateObject(1227, 1956.97058, -1621.99902, 13.46106,   0.00000, 0.00000, 270.54007);
	CreateObject(994, -3847.36523, -1667.98010, -8178.92725,   0.00000, 0.00000, 0.00000);
	CreateObject(700, 1942.71716, -1592.82312, 12.99219,   356.85840, 0.00000, -1.57080);
	CreateObject(700, 1942.91321, -1583.55127, 12.99219,   356.85840, 0.00000, -1.57080);
	CreateObject(19377, 1926.30127, -1584.68896, 12.53390,   -359.81979, -90.12020, 0.30000);
	CreateObject(19377, 1926.25732, -1575.05164, 12.53390,   -359.81979, -90.12020, 0.24000);
	CreateObject(19377, 1927.58105, -1588.27917, 12.51387,   -359.81979, -90.12020, 0.30000);
	CreateObject(1535, 1950.71265, -1574.30457, 18.62780,   0.00000, 0.00000, -134.93980);
	CreateObject(1535, 1938.52661, -1547.25781, 16.24796,   0.00000, 0.00000, -134.93985);
	CreateObject(1535, 1993.29553, -1568.60999, 16.24796,   0.00000, 0.00000, -134.93985);
	CreateObject(19397, 1977.44165, -1589.26501, 14.33040,   0.00000, 0.00000, 45.18000);
	CreateObject(1524, 1961.79150, -1593.72095, 13.95428,   0.00000, 0.00000, 135.53998);
	CreateObject(4227, 1993.73352, -1548.17822, 13.65966,   0.00000, 0.00000, 0.00001);
	CreateObject(1530, 1963.55078, -1607.79810, 13.85156,   0.00000, 0.00000, -404.81970);
	CreateObject(1530, 1984.44470, -1606.74097, 13.94995,   0.00000, 0.00000, -225.66005);
	CreateObject(1524, 2031.46985, -1600.98865, 13.79021,   0.00000, 0.00000, -169.85994);
	CreateObject(1413, 1950.34094, -1614.50647, 14.37314,   0.00000, 0.00000, -65.39995);
	CreateObject(1413, 1947.85413, -1609.87610, 14.37314,   0.00000, 0.00000, -57.11993);
	CreateObject(1413, 1944.45532, -1605.92188, 14.37314,   0.00000, 0.00000, -41.21989);
	CreateObject(1413, 1998.88574, -1605.75647, 14.37917,   0.00000, 0.00000, 39.95999);
	CreateObject(1413, 1995.33118, -1609.53992, 14.37917,   0.00000, 0.00000, 54.77999);
	CreateObject(1413, 1992.80603, -1614.12231, 14.37917,   0.00000, 0.00000, 69.54003);
	CreateObject(946, 1968.43262, -1574.65100, 14.76459,   0.00000, 0.00000, -45.05999);
	CreateObject(1413, 1981.21606, -1559.62866, 13.74383,   0.00000, 0.00000, 135.59999);
	CreateObject(1413, 1984.11951, -1562.52698, 13.74383,   0.00000, 0.00000, 135.59999);
	CreateObject(1412, 1976.48730, -1560.56531, 13.73761,   0.00000, 0.00000, 45.18000);
	CreateObject(1412, 1973.99707, -1563.05811, 13.73761,   0.00000, 0.00000, 45.18000);
	CreateObject(1412, 1970.21655, -1566.74805, 13.73761,   0.00000, 0.00000, 45.18000);
	CreateObject(1413, 1966.50281, -1570.40906, 13.74383,   0.00000, 0.00000, 225.60019);
	CreateObject(1413, 1966.48462, -1574.21960, 13.74383,   0.00000, 0.00000, 314.28012);
	CreateObject(1413, 1969.39990, -1577.22034, 13.74383,   0.00000, 0.00000, 314.28012);
	CreateObject(1413, 1984.10315, -1566.29895, 13.74383,   0.00000, 0.00000, 45.35997);
	CreateObject(1413, 1981.89746, -1568.49670, 13.74383,   0.00000, 0.00000, 45.35997);
	CreateObject(1412, 1978.14624, -1572.15796, 13.73761,   0.00000, 0.00000, 224.94006);
	CreateObject(1412, 1974.45178, -1575.82043, 13.73761,   0.00000, 0.00000, 224.94006);
	CreateObject(946, 1981.80688, -1561.73657, 14.80460,   0.00000, 0.00000, 134.88010);
	CreateObject(3593, 1987.31458, -1559.19189, 13.02553,   0.00000, 0.00000, 18.11999);
	CreateObject(1226, 1984.90527, -1566.46924, 16.48227,   0.00000, 0.00000, -44.64001);
	CreateObject(1226, 1973.91785, -1578.26892, 16.48227,   0.00000, 0.00000, -44.64001);
	CreateObject(1226, 1977.78491, -1558.88574, 16.48227,   0.00000, 0.00000, -224.99992);
	CreateObject(1226, 1966.29700, -1570.15393, 16.48227,   0.00000, 0.00000, -224.99992);
	CreateObject(19435, 1929.74524, -1567.62317, 12.53390,   0.06000, -269.76001, -0.06000);
	CreateObject(19435, 1928.07153, -1566.68323, 12.53390,   0.06000, -269.76001, -90.06000);
	CreateObject(19435, 1928.07178, -1563.93823, 12.54450,   0.06000, -269.76001, -90.06000);
	CreateObject(19435, 1928.07080, -1560.43872, 12.56450,   0.06000, -269.76001, -90.06000);
	CreateObject(19435, 1928.08862, -1556.97729, 12.56960,   -0.02000, -269.76001, -90.06000);
	CreateObject(19435, 1928.09290, -1554.61243, 12.59540,   -0.04000, -269.20001, -90.14000);
	CreateObject(19435, 1929.09973, -1552.20557, 12.61440,   0.06000, -269.76001, -135.12000);
	CreateObject(19435, 1930.65405, -1550.66687, 12.61440,   0.06000, -269.76001, -135.12000);
	CreateObject(19377, 1936.39648, -1597.53027, 12.51387,   -359.81979, -90.12020, 0.30000);
	CreateObject(19377, 1936.34680, -1587.88672, 12.51387,   -359.81979, -90.12020, 0.30000);
	CreateObject(19377, 1936.36182, -1575.06775, 12.54590,   -359.81979, -90.12020, 179.46001);
	CreateObject(19377, 1936.33521, -1583.16003, 12.51387,   -359.81979, -90.12020, 0.30000);
	CreateObject(18727, 1977.04016, -1591.02698, 13.37742,   0.00000, 0.00000, 0.00000);
	CreateObject(700, 1992.52893, -1607.41479, 12.99219,   356.85840, 0.00000, -1.57080);
	CreateObject(700, 2008.38660, -1548.11401, 11.94591,   356.85840, 0.00000, -1.57080);
	CreateObject(700, 2021.46277, -1600.06714, 12.99219,   356.85840, 0.00000, -1.57080);
	CreateObject(673, 2023.41052, -1578.26843, 10.43237,   356.85840, 0.00000, -1.57080);
	CreateObject(1256, 1980.40796, -1573.40039, 13.25244,   0.00000, 0.00000, -44.82000);
	CreateObject(1256, 1971.03027, -1563.92712, 13.25244,   0.00000, 0.00000, -224.63991);
	CreateObject(700, 1929.43823, -1542.78406, 12.99219,   356.85840, 0.00000, -1.57080);
	CreateObject(673, 2015.65857, -1563.06128, 10.43237,   356.85840, 0.00000, -1.57080);
	CreateObject(620, 1958.09595, -1602.35901, 12.50000,   356.85840, 0.00000, 3.14159);
	CreateObject(1413, 1958.19934, -1597.24744, 13.74159,   0.00000, 0.00000, 44.70001);
	CreateObject(19377, 1950.58569, -1584.48145, 12.55390,   -359.81979, -90.12020, -1.08000);
	CreateObject(19377, 1953.54358, -1594.43738, 12.57790,   -359.81979, -90.12020, -45.36000);
	CreateObject(19377, 1949.51233, -1598.54919, 12.57790,   -359.81979, -90.12020, -32.45999);
	CreateObject(19377, 1950.44202, -1592.94421, 12.55390,   -359.81979, -90.12020, -1.08000);
	CreateObject(1413, 1955.70557, -1599.70874, 13.74159,   0.00000, 0.00000, 44.70001);
	CreateObject(1413, 2018.81433, -1597.01196, 13.72139,   0.00000, 0.00000, -316.67987);
	CreateObject(18663, 2007.05591, -1557.46497, 16.11696,   3.00000, -0.48000, 51.24002);
	CreateObject(833, 2003.30933, -1561.73108, 12.52313,   3.12000, 151.02037, 50.10000);
	CreateObject(834, 2007.14355, -1561.48706, 10.96130,   0.00000, 0.00000, 0.00000);
	CreateObject(1298, 1952.23755, -1606.08582, 15.97856,   0.00000, 0.00000, -134.63997);
	CreateObject(1256, 1954.26208, -1608.04553, 13.25244,   0.00000, 0.00000, -120.66001);
	CreateObject(19362, 1943.38708, -1600.71667, 12.51390,   0.00000, 90.00000, 0.72000);
	CreateObject(19362, 1943.24854, -1597.51111, 12.51390,   0.00000, 90.00000, 0.72000);
	CreateObject(19362, 1946.37646, -1600.68591, 12.51390,   0.00000, 90.00000, -0.12000);
	CreateObject(1535, 1962.56042, -1592.85583, 12.57420,   0.00000, 0.00000, 45.42000);
	CreateObject(1535, 1970.71106, -1589.83325, 12.57420,   0.00000, 0.00000, 45.00000);
	CreateObject(1494, 1976.89368, -1588.69775, 12.57960,   0.00000, 0.00000, -44.18000);
	CreateObject(700, 2021.46277, -1600.06714, 12.99219,   356.85840, 0.00000, -1.57080);
	CreateObject(19435, 1998.41797, -1561.92700, 12.58220,   -0.50000, -269.78000, -176.01984);
	CreateObject(19435, 2000.78186, -1562.81616, 12.58744,   -0.28000, -269.78000, -225.09979);
	CreateObject(19435, 2003.24683, -1565.28589, 12.59440,   -0.20000, -269.88000, -225.09979);
	CreateObject(19435, 2005.71777, -1567.74524, 12.61440,   -1.24000, -269.88000, -225.03979);
	CreateObject(19435, 2008.18445, -1570.21069, 12.61440,   -1.24000, -269.88000, -225.03979);
	CreateObject(19435, 2010.66797, -1572.68066, 12.61440,   -1.24000, -269.88000, -225.03979);
	CreateObject(19435, 2013.14832, -1575.15161, 12.61440,   -1.24000, -269.88000, -225.03979);
	CreateObject(19435, 2015.60449, -1577.60803, 12.61440,   -1.24000, -269.88000, -225.03979);
	CreateObject(19435, 2018.06079, -1580.07605, 12.61440,   -1.24000, -269.88000, -225.03979);
	CreateObject(19435, 2020.54224, -1582.54028, 12.61440,   -1.24000, -269.88000, -225.03979);
	CreateObject(19435, 2023.00806, -1585.01819, 12.61440,   -1.24000, -269.88000, -225.03979);
	CreateObject(19435, 2025.47766, -1587.48938, 12.61440,   -1.24000, -269.88000, -225.03979);
	CreateObject(19435, 2025.86304, -1593.84924, 12.61440,   -1.24000, -269.88000, -314.67975);
	CreateObject(19435, 2026.61060, -1589.95544, 12.63440,   -1.24000, -269.88000, -265.71991);
	CreateObject(19435, 2023.40601, -1596.34241, 12.61440,   -1.24000, -269.88000, -314.67975);
	CreateObject(19435, 2020.95520, -1598.81348, 12.61440,   -1.24000, -269.88000, -314.67975);
	CreateObject(19435, 2018.50781, -1599.81763, 12.61440,   -1.24000, -269.88000, -360.03989);
	CreateObject(19435, 2026.73755, -1591.47742, 12.63440,   -1.24000, -269.88000, -265.71991);
	CreateObject(1413, 1931.35657, -1557.03137, 13.74383,   0.00000, 0.00000, 630.23981);
	CreateObject(1413, 1931.32568, -1562.31738, 13.74383,   0.00000, 0.00000, 630.23981);
	CreateObject(1280, 2018.24548, -1567.20508, 13.68641,   0.00000, 0.00000, 28.44000);
	CreateObject(1280, 2021.37366, -1573.27100, 13.68641,   0.00000, 0.00000, 28.44000);
	CreateObject(5639, 1956.05957, -1649.90320, -1.74054,   0.00000, 0.00000, 0.00000);
	CreateObject(3987, 1934.25696, -1566.75952, 12.23478,   0.00000, 0.00000, 225.05992);
	CreateObject(1535, 1948.09204, -1576.92700, 14.15980,   0.00000, 0.00000, -134.93980);
	CreateObject(1535, 1950.71265, -1574.30457, 14.15980,   0.00000, 0.00000, -134.93980);
	CreateObject(3034, 1946.90527, -1578.07446, 20.07938,   0.00000, 0.00000, -135.05998);
	CreateObject(19377, 1971.53589, -1572.09363, 12.59390,   -359.81979, -90.12020, 44.64000);
	CreateObject(19377, 1978.98145, -1564.74158, 12.59390,   -359.81979, -90.12020, 44.64000);

	//Calle Grove by Hanks
	CreateDynamicObject(19381, 2398.50708, -1742.33020, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2388.00684, -1742.33325, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2377.50488, -1742.32959, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2367.00391, -1742.33044, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2356.50830, -1742.32983, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2346.01123, -1742.33240, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2335.51367, -1742.33215, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2325.01538, -1742.33289, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2314.51563, -1742.33081, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2304.01904, -1742.32837, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2293.52490, -1742.32727, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2283.02783, -1742.32727, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2272.52515, -1742.32654, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2262.02979, -1742.32971, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2251.52930, -1742.32654, 12.46810,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2241.02954, -1742.32288, 12.47610,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(19381, 2231.51001, -1742.31836, 12.47610,   0.00000, 89.99990, 0.00000);
	CreateDynamicObject(3578, 2398.60132, -1737.60352, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2388.30151, -1737.59851, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2378.00806, -1737.60205, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2367.71362, -1737.59534, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2357.41626, -1737.59546, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2347.11987, -1737.60181, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2336.82129, -1737.56360, 11.76990,   0.00000, 0.00000, -0.30000);
	CreateDynamicObject(3578, 2326.53247, -1737.57837, 11.76990,   0.00000, 0.00000, 0.60000);
	CreateDynamicObject(3578, 2295.64453, -1737.59558, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2285.35229, -1737.59741, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2275.05444, -1737.59570, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2264.75684, -1737.59790, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2254.45703, -1737.59766, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2244.15503, -1737.60168, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2233.85767, -1737.59900, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2231.40259, -1737.59900, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2305.93970, -1737.60632, 11.76990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3578, 2316.23535, -1737.61914, 11.76990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3578, 2231.40698, -1747.08972, 11.77790,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2241.69995, -1747.09790, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2251.99902, -1747.09265, 11.76990,   0.00000, 0.00000, 0.12000);
	CreateDynamicObject(3578, 2262.29248, -1747.09216, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2272.59082, -1747.09595, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2282.88184, -1747.09875, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2293.18042, -1747.09839, 11.76990,   0.00000, 0.00000, 0.12000);
	CreateDynamicObject(3578, 2303.48071, -1747.09863, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2313.77368, -1747.09949, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2324.06641, -1747.09399, 11.76990,   0.00000, 0.00000, 0.12000);
	CreateDynamicObject(3578, 2334.36035, -1747.09338, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2344.65771, -1747.09863, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2354.95386, -1747.09863, 11.76990,   0.00000, 0.00000, 0.12000);
	CreateDynamicObject(3578, 2365.24731, -1747.09082, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2375.54565, -1747.10242, 11.76990,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3578, 2385.84106, -1747.10132, 11.76990,   0.00000, 0.00000, 0.12000);
	CreateDynamicObject(3578, 2396.13770, -1747.09900, 11.76990,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(3578, 2398.59229, -1747.09448, 11.76990,   0.00000, 0.00000, 0.12000);
	CreateDynamicObject(19435, 2402.01538, -1738.30872, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2398.52002, -1738.31006, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2395.02783, -1738.31067, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2391.53149, -1738.31067, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2388.03345, -1738.31152, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2384.53394, -1738.30859, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2381.03442, -1738.31055, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2377.53564, -1738.31177, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2374.04077, -1738.31201, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2370.54004, -1738.31262, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2367.04346, -1738.31384, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2363.54810, -1738.31213, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2360.04907, -1738.31519, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2356.54907, -1738.31323, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2353.05371, -1738.31262, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2349.56177, -1738.31042, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2346.06055, -1738.31262, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2342.56396, -1738.31384, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2339.06885, -1738.31653, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2335.57129, -1738.31128, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2332.07300, -1738.31152, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2328.57593, -1738.31079, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2325.07593, -1738.30957, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2321.57690, -1738.31165, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2318.08203, -1738.30884, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2314.58594, -1738.30859, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2311.08813, -1738.31116, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2307.59302, -1738.30823, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2304.09424, -1738.30566, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2300.59863, -1738.30359, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2297.09912, -1738.30603, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2293.60522, -1738.30945, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2290.11035, -1738.30933, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2286.61377, -1738.31067, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2283.11450, -1738.30713, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2279.62085, -1738.30371, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2276.12524, -1738.30457, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2272.63037, -1738.30481, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2269.12988, -1738.30554, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2265.63452, -1738.30444, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2262.13354, -1738.30615, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2258.63794, -1738.30322, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2255.13745, -1738.30322, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2251.64014, -1738.30737, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2248.14697, -1738.30969, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2244.65063, -1738.30579, 12.48260,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2241.15527, -1738.30066, 12.48260,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2237.65942, -1738.30103, 12.48260,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2234.16528, -1738.29614, 12.48260,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2230.66870, -1738.29907, 12.48260,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2228.00781, -1738.29639, 12.48260,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2228.01099, -1746.33484, 12.48260,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2231.50952, -1746.33850, 12.48260,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2235.00977, -1746.33704, 12.48260,   0.06000, -90.00000, -0.12000);
	CreateDynamicObject(19435, 2238.50757, -1746.34155, 12.48260,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2242.00317, -1746.34302, 12.48260,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2245.50195, -1746.34351, 12.48260,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2248.99805, -1746.34692, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2252.49561, -1746.34631, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2255.99072, -1746.34680, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2259.48877, -1746.34814, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2262.98145, -1746.34766, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2266.47998, -1746.34595, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2269.97900, -1746.34790, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2273.47729, -1746.34448, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2276.97217, -1746.34424, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2280.47388, -1746.34619, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2283.97192, -1746.34363, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2287.47266, -1746.34412, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2290.96973, -1746.34656, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2294.46753, -1746.34802, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2297.96802, -1746.35083, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2301.46631, -1746.35046, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2304.96509, -1746.34973, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2308.46094, -1746.35059, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2311.96094, -1746.35168, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2315.46143, -1746.34900, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2318.96191, -1746.34998, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2322.46069, -1746.35571, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2325.95728, -1746.35181, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2329.45410, -1746.35132, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2332.95410, -1746.34460, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2336.44800, -1746.34937, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2339.94751, -1746.34448, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2343.44824, -1746.34607, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2346.94775, -1746.34766, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2350.44751, -1746.35266, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2353.94775, -1746.34827, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2357.44385, -1746.34814, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2360.93652, -1746.35132, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2364.42920, -1746.35217, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2367.92920, -1746.34937, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2371.42310, -1746.34766, 12.47460,   0.06000, -90.00000, -0.06000);
	CreateDynamicObject(19435, 2374.92505, -1746.35095, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2378.42188, -1746.35120, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2381.92139, -1746.34924, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2385.42065, -1746.35522, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2388.91943, -1746.35352, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2392.41895, -1746.35522, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2395.91504, -1746.34961, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2399.41382, -1746.35095, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(19435, 2402.00635, -1746.34827, 12.47460,   0.06000, -90.00000, 0.00000);
	CreateDynamicObject(674, 2229.45923, -1742.17139, 12.56183,   0.00000, 0.00000, -31.50000);
	CreateDynamicObject(676, 2231.00903, -1742.27380, 12.55490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(674, 2231.67798, -1742.80969, 12.56183,   0.00000, 0.00000, -64.74000);
	CreateDynamicObject(674, 2293.91846, -1742.28455, 12.56183,   0.00000, 0.00000, -64.74000);
	CreateDynamicObject(676, 2294.97754, -1743.20557, 12.55490,   0.00000, 0.00000, -51.18000);
	CreateDynamicObject(674, 2318.39771, -1742.38416, 12.56183,   0.00000, 0.00000, -194.04001);
	CreateDynamicObject(676, 2313.01074, -1742.16235, 12.55490,   0.00000, 0.00000, -51.18000);
	CreateDynamicObject(676, 2336.39819, -1743.83435, 12.55490,   0.00000, 0.00000, -51.18000);
	CreateDynamicObject(676, 2392.36255, -1741.89746, 12.55490,   0.00000, 0.00000, -51.18000);
	CreateDynamicObject(674, 2393.81909, -1742.89099, 12.56183,   0.00000, 0.00000, -154.98001);
	CreateDynamicObject(779, 2273.21997, -1742.49548, 12.55640,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(671, 2361.40747, -1742.19531, 12.55082,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(671, 2253.69287, -1742.19702, 12.55082,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(779, 2334.12061, -1742.21643, 12.55640,   0.00000, 0.00000, 0.00000);

	//Mapeo Idlewood by Hanks
    CreateDynamicObject(8658, 2056.67676, -1662.13501, 13.54550,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(852, 2047.94019, -1650.00903, 12.50480,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19865, 2051.31201, -1662.14453, 12.53880,   0.00000, 0.00000, 89.94000);
	CreateDynamicObject(19865, 2049.28418, -1662.14307, 12.53880,   0.00000, 0.00000, 89.94000);
	CreateDynamicObject(19463, 2035.01611, -1662.23450, 12.86110,   0.00000, 0.00000, 89.94000);
	CreateDynamicObject(19463, 2025.39014, -1662.22119, 12.86110,   0.00000, 0.00000, 89.94000);
	CreateDynamicObject(19463, 2016.47595, -1662.22253, 12.86110,   0.00000, 0.00000, 89.94000);
	CreateDynamicObject(3642, 2041.56335, -1656.40698, 15.44510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3651, 2039.16907, -1629.27710, 14.89840,   0.00000, 0.00000, -90.12000);
	CreateDynamicObject(1492, 2044.54395, -1622.40784, 12.32260,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19381, 2041.58997, -1647.25610, 12.47140,   0.06000, -90.06000, -0.30000);
	CreateDynamicObject(1483, 2039.81726, -1641.15417, 14.30829,   0.00000, 0.00000, 89.82002);
	CreateDynamicObject(1483, 2039.82056, -1637.44434, 14.30829,   0.00000, 0.00000, 269.88013);
	CreateDynamicObject(3920, 2018.00195, -1662.04224, 13.61700,   0.00000, 0.00000, -180.00020);
	CreateDynamicObject(19363, 2038.41943, -1642.50916, 12.68140,   0.00000, 0.00000, -90.36000);
	CreateDynamicObject(19363, 2041.62000, -1642.51660, 12.68140,   0.00000, 0.00000, -90.36000);
	CreateDynamicObject(1450, 2048.11865, -1621.75720, 13.12370,   0.00000, 0.00000, -174.89999);
	CreateDynamicObject(19843, 2073.56763, -1664.34436, 12.54120,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(671, 2049.63086, -1646.22485, 12.70258,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(669, 2033.85571, -1658.28687, 12.76536,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2055.89526, -1626.24841, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2075.91602, -1631.32690, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2075.91064, -1640.53870, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1451, 2033.64856, -1655.60657, 13.00430,   0.00000, 0.00000, 269.76022);
	CreateDynamicObject(1411, 2033.74426, -1662.42920, 13.64300,   0.00000, 0.00000, 539.93982);
	CreateDynamicObject(3920, 2030.25317, -1662.16943, 13.61700,   0.00000, 0.00000, -180.00020);
	CreateDynamicObject(1358, 2027.06372, -1675.89441, 13.57580,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2075.92798, -1648.49438, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2075.92383, -1659.40076, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2065.44116, -1666.16931, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2044.39990, -1666.27637, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2020.39709, -1666.17090, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2020.51721, -1678.62341, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2044.42896, -1678.42346, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2065.38306, -1678.50159, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2075.91528, -1685.07751, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2075.93042, -1707.42590, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2075.91528, -1720.96130, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2075.94116, -1734.84277, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2020.91064, -1746.20313, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2067.92822, -1746.24146, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2007.35925, -1728.51453, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2007.38025, -1713.50549, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2007.42651, -1697.58411, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2007.36060, -1658.83130, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2007.37183, -1644.16077, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2007.46021, -1626.45715, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(891, 2037.63428, -1618.41125, 12.53989,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19363, 2047.66101, -1622.41663, 13.06880,   0.00000, 0.00000, -90.54000);
	CreateDynamicObject(19436, 2043.75537, -1622.40906, 13.07140,   0.00000, 0.00000, -89.70000);
	CreateDynamicObject(1411, 2068.82544, -1622.76074, 13.85410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1411, 2063.65186, -1622.75171, 13.85410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1411, 2058.47852, -1622.75195, 13.85410,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1481, 2037.17578, -1639.26160, 13.25320,   0.00000, 0.00000, 90.12000);
	CreateDynamicObject(1413, 2043.78015, -1642.57031, 13.20434,   0.00000, 0.00000, -0.24000);
	CreateDynamicObject(1598, 2038.97668, -1648.14697, 12.84780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(928, 2043.68494, -1636.65833, 12.81470,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1486, 2043.22314, -1662.27209, 14.67450,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19582, 2033.01465, -1655.63452, 12.56180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2673, 2026.84802, -1679.29260, 12.63830,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3556, 2041.57617, -1696.60522, 15.03148,   0.00000, 0.00000, -360.17987);
	CreateDynamicObject(3589, 2041.68896, -1735.78662, 14.94168,   0.00000, 0.00000, -179.99991);
	CreateDynamicObject(8674, 2041.66895, -1714.76819, 13.09840,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19381, 2041.63953, -1707.06641, 12.46330,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19381, 2041.64050, -1716.69666, 12.46330,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19381, 2041.63892, -1726.32678, 12.46330,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(673, 2036.59021, -1698.35779, 3.72217,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(657, 2038.18433, -1713.52075, 12.55042,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(676, 2045.67078, -1715.78088, 12.55081,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3520, 2042.48645, -1713.92151, 12.55126,   0.00000, 0.00000, -87.83999);
	CreateDynamicObject(1501, 2043.66675, -1702.26477, 12.54920,   0.00000, 0.00000, -0.12000);
	CreateDynamicObject(12957, 2069.22314, -1687.11658, 13.27400,   0.00000, 0.00000, 179.64000);
	CreateDynamicObject(669, 2049.45947, -1720.85779, 12.76536,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2804, 2037.20386, -1639.29346, 13.38380,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19839, 2042.12402, -1717.97681, 12.53836,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19839, 2044.25256, -1725.29456, 12.53836,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19839, 2040.16736, -1721.81006, 12.53836,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19839, 2044.04041, -1720.35571, 12.53836,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19839, 2039.55286, -1717.97668, 12.53836,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19839, 2042.63611, -1722.64783, 12.53836,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1357, 2037.34155, -1637.07031, 12.81950,   0.00000, 0.00000, 86.46000);
	CreateDynamicObject(2074, 2041.82349, -1740.33142, 15.48070,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1411, 2028.46497, -1662.42749, 13.64300,   0.00000, 0.00000, 539.93982);
	CreateDynamicObject(1411, 2023.17761, -1662.42346, 13.64300,   0.00000, 0.00000, 539.93982);
	CreateDynamicObject(1411, 2017.89441, -1662.42468, 13.64300,   0.00000, 0.00000, 539.93982);
	CreateDynamicObject(1411, 2014.38489, -1662.41418, 13.64300,   0.00000, 0.00000, 539.93982);

	//Mapeo Cancha de Futbol By Hanks
	CreateDynamicObject(2945, 2116.96289, -1904.92590, 13.77259,   22.00000, 0.00000, 0.00000);
	CreateDynamicObject(16281, 2117.96899, -1905.57397, 12.73920,   180.00000, 0.00000, 0.00000);
	CreateDynamicObject(2945, 2119.41675, -1904.93347, 13.77259,   22.00000, 0.00000, 0.00000);
	CreateDynamicObject(2945, 2118.95679, -1929.46375, 13.77259,   22.00000, 0.00000, 179.88014);
	CreateDynamicObject(16281, 2117.96533, -1928.71655, 12.73920,   180.00000, 0.00000, 0.00000);
	CreateDynamicObject(2945, 2116.50439, -1929.45752, 13.77259,   22.00000, 0.00000, 179.88014);
	CreateDynamicObject(18451, 2106.21997, -1940.47131, 13.06676,   0.00000, 0.00000, -181.26003);
	CreateDynamicObject(17969, 2102.25342, -1938.73645, 14.40453,   0.00000, 0.00000, 179.87999);
	CreateDynamicObject(2670, 2108.49805, -1938.62244, 12.64380,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2673, 2103.62158, -1936.62231, 12.65660,   0.00000, 0.00000, 37.26000);
	CreateDynamicObject(854, 2102.27246, -1934.32483, 12.75710,   0.00000, 0.00000, 77.94000);
	CreateDynamicObject(1486, 2103.31738, -1939.87793, 13.47650,   0.00000, 0.00000, 0.00000);

	//Mapeo Unity By Hanks
	CreateDynamicObject(17543, 1644.44312, -1890.56946, 14.80797,   0.00000, 0.00000, -89.82000);
	CreateDynamicObject(17544, 1650.20337, -1832.96619, 15.63860,   0.00000, 0.00000, -180.24001);
	CreateDynamicObject(19535, 1623.91870, -1854.78833, 12.55020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19535, 1618.92334, -1854.79187, 12.54220,   0.00000, 0.00000, -270.00003);
	CreateDynamicObject(19535, 1623.91577, -1839.79077, 12.55020,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19535, 1618.92017, -1839.79639, 12.54220,   0.00000, 0.00000, -270.00003);
	CreateDynamicObject(19535, 1623.91785, -1824.79578, 12.54220,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19535, 1618.92419, -1824.79846, 12.53420,   0.00000, 0.00000, -270.00000);
	CreateDynamicObject(19535, 1653.33533, -1809.09888, 12.55020,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19535, 1653.33667, -1804.40759, 12.54220,   0.00000, 0.00000, -360.00000);
	CreateDynamicObject(19535, 1638.34045, -1804.40784, 12.51820,   0.00000, 0.00000, -360.00000);
	CreateDynamicObject(19535, 1638.84216, -1809.09509, 12.53420,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19535, 1623.85156, -1809.09497, 12.53420,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19535, 1633.92322, -1804.40820, 12.52620,   0.00000, 0.00000, -360.00000);
	CreateDynamicObject(19535, 1618.92517, -1817.91199, 12.55020,   0.00000, 0.00000, -270.00000);
	CreateDynamicObject(19535, 1623.85120, -1809.10193, 12.54220,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(11010, 1652.96802, -1827.88232, 18.69840,   0.00000, 0.00000, 269.75989);
	CreateDynamicObject(17969, 1626.40210, -1855.25354, 14.66850,   0.00000, 0.00000, -0.18000);
	CreateDynamicObject(8674, 1674.89502, -1882.40918, 14.01227,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8674, 1662.41187, -1882.41125, 14.01227,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, 1631.61743, -1839.79688, 12.65260,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1631.67200, -1816.72070, 12.65260,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1631.58154, -1849.39844, 12.65260,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1642.17188, -1816.71826, 12.65260,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1642.16980, -1826.34961, 12.65260,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1652.67139, -1816.72168, 12.65260,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1663.16687, -1816.72205, 12.65260,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1642.16956, -1835.98364, 12.65260,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1642.16992, -1845.61646, 12.65260,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(2950, 1651.82239, -1807.34155, 13.13600,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, 1655.57153, -1796.78699, 12.66060,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1645.07678, -1796.77673, 12.66060,   0.00000, 90.00000, -0.06000);
	CreateDynamicObject(1260, 1647.38574, -1784.57495, 24.87592,   0.00000, 0.00000, -104.93999);
	CreateDynamicObject(1266, 1647.38293, -1784.56201, 24.93050,   0.00000, 0.00000, -104.94001);
	CreateDynamicObject(19377, 1634.57751, -1796.77893, 12.66060,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1624.07507, -1796.77832, 12.66060,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1613.57178, -1796.77795, 12.66060,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1603.07556, -1796.77966, 12.66060,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1592.57983, -1796.77991, 12.66060,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1592.58240, -1787.15002, 12.66060,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1592.57520, -1779.36792, 12.66060,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1603.08203, -1787.14392, 12.66060,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(10392, 1609.42773, -1823.59619, 16.64229,   0.00000, 0.00000, -90.00001);
	CreateDynamicObject(10392, 1596.45032, -1823.59351, 16.63430,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19377, 1613.58276, -1787.14355, 12.66060,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1621.60828, -1787.14551, 12.66060,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1625.66418, -1786.88721, 12.66860,   0.00000, 90.00000, -14.94000);
	CreateDynamicObject(19377, 1635.84631, -1789.46448, 12.65260,   0.00000, 90.00000, -14.94000);
	CreateDynamicObject(19377, 1645.95251, -1792.32947, 12.65260,   0.00000, 90.00000, -14.94000);
	CreateDynamicObject(849, 1617.03943, -1816.99829, 12.94377,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, 1656.09619, -1795.02600, 12.65260,   0.00000, 90.00000, -14.94000);
	CreateDynamicObject(19377, 1666.07166, -1796.78503, 12.66060,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1610.51587, -1782.73804, 12.65260,   0.00000, 90.00000, -15.00000);
	CreateDynamicObject(19377, 1600.37476, -1780.02039, 12.65260,   0.00000, 90.00000, -15.00000);
	CreateDynamicObject(19377, 1595.92371, -1778.91968, 12.65260,   0.00000, 90.00000, -15.00000);
	CreateDynamicObject(19377, 1612.53174, -1816.97461, 12.64460,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(2959, 1616.43250, -1841.55994, 12.74470,   0.00000, 0.00000, 0.06000);
	CreateDynamicObject(2959, 1616.42517, -1832.77844, 12.73670,   0.00000, 0.00000, -0.12000);
	CreateDynamicObject(2959, 1616.42834, -1824.78064, 12.73670,   0.00000, 0.00000, -0.12000);
	CreateDynamicObject(2959, 1616.43042, -1816.30090, 12.73670,   0.00000, 0.00000, 0.12000);
	CreateDynamicObject(2959, 1616.42578, -1807.47070, 12.73670,   0.00000, 0.00000, -0.12000);
	CreateDynamicObject(854, 1630.79224, -1862.30103, 12.76180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1486, 1625.14404, -1858.28589, 12.88350,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2673, 1624.53015, -1854.96497, 12.63660,   0.00000, 0.00000, -118.20000);
	CreateDynamicObject(1810, 1625.70081, -1856.22705, 12.73840,   0.00000, 0.00000, -125.82000);
	CreateDynamicObject(1810, 1625.89258, -1854.77893, 12.73840,   0.00000, 0.00000, -77.22001);
	CreateDynamicObject(1358, 1623.35022, -1895.31445, 13.74750,   0.00000, 0.00000, 89.09999);
	CreateDynamicObject(1357, 1628.04211, -1812.54431, 13.01070,   0.00000, 0.00000, -180.06004);
	CreateDynamicObject(2714, 1626.45032, -1816.85388, 14.86350,   0.00000, 0.00000, -91.80000);
	CreateDynamicObject(1264, 1629.02881, -1862.60571, 13.01010,   0.00000, 0.00000, -64.32000);
	CreateDynamicObject(1230, 1629.76563, -1862.53503, 13.08340,   0.00000, -26.00000, 0.00000);
	CreateDynamicObject(1220, 1629.51636, -1863.52002, 12.89581,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2677, 1644.69653, -1814.79639, 13.01370,   0.00000, 0.00000, 162.24001);
	CreateDynamicObject(2675, 1578.07129, -1864.26978, 12.61180,   0.00000, 0.00000, 0.00000);

        //Mapeo gasolinera Idelwood
CreateObject(970, 1942.296997, -1778.237060, 13.070612, 0.000000, 0.000000, -89.999961, 300.00);
 CreateObject(970, 1942.296997, -1774.154296, 13.070612, 0.000000, 0.000000, -89.999961, 300.00);
 CreateObject(970, 1942.296997, -1770.084594, 13.070612, 0.000000, 0.000000, -89.999961, 300.00);
CreateObject(970, 1942.296997, -1767.564575, 13.070612, 0.000000, 0.000000, -89.999961, 300.00);
CreateObject(970, 1941.105834, -1767.564575, 13.070612, 0.000000, 0.000000, -89.999961, 300.00);
CreateObject(970, 1941.105834, -1771.577758, 13.070612, 0.000000, 0.000000, -89.999961, 300.00);
 CreateObject(970, 1941.105834, -1775.578002, 13.070612, 0.000000, 0.000000, -89.999961, 300.00);
 CreateObject(970, 1941.105834, -1778.239379, 13.070612, 0.000000, 0.000000, -89.999961, 300.00);
 CreateObject(1300, 1941.678466, -1765.003173, 12.970610, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1300, 1941.702148, -1780.743774, 12.970609, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1319, 1946.572143, -1762.358642, 12.642814, 0.000000, 0.000000, 91.699989, 300.00);
 CreateObject(1319, 1946.983886, -1760.447753, 12.642814, 0.000000, 0.000000, 70.599983, 300.00);
 CreateObject(1319, 1948.078857, -1758.859252, 12.672815, 0.000000, 0.000000, 51.099987, 300.00);
 CreateObject(1319, 1949.682250, -1757.704223, 12.672815, 0.000000, 0.000000, 30.599998, 300.00);
 CreateObject(1319, 1951.598266, -1757.237670, 12.672815, 0.000000, 0.000000, 6.399998, 300.00);
 CreateObject(1319, 1953.502685, -1757.628051, 12.672815, 0.000000, 0.000000, -16.400005, 300.00);
 CreateObject(1319, 1955.133544, -1758.684692, 12.672815, 0.000000, 0.000000, -41.199970, 300.00);
 CreateObject(1319, 1956.325805, -1760.382568, 12.672815, 0.000000, 0.000000, -61.099960, 300.00);
 CreateObject(1319, 1956.744506, -1762.267944, 12.602811, 0.000000, 0.000000, -85.000015, 300.00);
 CreateObject(1319, 1956.718627, -1777.246459, 12.602811, 0.000000, 0.000000, -87.600006, 300.00);
 CreateObject(1319, 1956.311035, -1779.261840, 12.602811, 0.000000, -0.499999, -117.199989, 300.00);
 CreateObject(1319, 1955.162963, -1780.907348, 12.620188, 0.000000, -0.499999, -129.699996, 300.00);
 CreateObject(1319, 1953.622314, -1781.980590, 12.635991, 0.000000, -0.499999, -151.299896, 300.00);
 CreateObject(1319, 1951.689453, -1782.383789, 12.652914, 0.000000, -0.499999, 178.500106, 300.00);
 CreateObject(1319, 1949.729614, -1781.961914, 12.670198, 0.000000, -0.499999, 155.700149, 300.00);
 CreateObject(1319, 1948.023193, -1780.820556, 12.688717, 0.000000, -0.499999, 136.400161, 300.00);
 CreateObject(1319, 1947.025024, -1779.283691, 12.704521, 0.000000, -0.499999, 123.400138, 300.00);
 CreateObject(1319, 1946.563720, -1777.281250, 12.721459, 0.000000, -0.499999, 91.500106, 300.00);
 CreateObject(970, 1956.753662, -1764.744506, 12.959183, -0.199999, 0.000000, -90.299972, 300.00);
 CreateObject(970, 1946.610351, -1764.692626, 12.994591, -0.199999, 0.000000, -90.299972, 300.00);
 CreateObject(970, 1956.783081, -1774.947143, 12.958903, -0.199999, 0.000000, -89.999977, 300.00);
 CreateObject(970, 1946.612304, -1774.947143, 12.994409, -0.199999, 0.000000, -89.999977, 300.00);
 CreateObject(1257, 1955.714843, -1769.814575, 13.672840, 0.000000, 0.000000, -179.699996, 300.00);
 CreateObject(1216, 1955.234985, -1771.665771, 13.162827, 0.000000, 0.000000, 91.800010, 300.00);
 CreateObject(1340, 1928.928222, -1768.666992, 13.476886, 0.000000, 0.000000, 0.300013, 300.00);
 CreateObject(8843, 1939.040649, -1772.830322, 12.382812, 0.000000, 0.000000, -179.899856, 300.00);
 CreateObject(8843, 1944.272460, -1772.541870, 12.382812, 0.000000, 0.000000, 0.300149, 300.00);
 CreateObject(19866, 1929.167114, -1786.320068, 12.532814, 0.000000, 0.000000, -89.900009, 300.00);
 CreateObject(19866, 1931.565429, -1783.725219, 12.532814, 0.000000, 0.000000, -179.999923, 300.00);
 CreateObject(19866, 1931.565429, -1780.573364, 12.532814, 0.000000, 0.000000, -179.999923, 300.00);
 CreateObject(19866, 1931.565429, -1772.051147, 12.532814, 0.000000, 0.000000, -179.999923, 300.00);
 CreateObject(19866, 1929.136108, -1766.325561, 12.532814, 0.000000, 0.000000, -89.900009, 300.00);
 CreateObject(19866, 1931.565429, -1768.730102, 12.532814, 0.000000, 0.000000, -179.999923, 300.00);
 CreateObject(19324, 1928.563842, -1778.676025, 13.146887, 0.000000, 0.000000, 90.199996, 300.00);
 CreateObject(1280, 1928.552856, -1784.864379, 12.896872, 0.000000, 0.000000, -179.499954, 300.00);
 CreateObject(1216, 1928.545043, -1783.052856, 13.096879, 0.000000, 0.000000, 92.199996, 300.00);
 CreateObject(1280, 1928.546630, -1781.318847, 12.916873, 0.000000, 0.000000, -179.400054, 300.00);
 CreateObject(1251, 1915.322753, -1787.977416, 12.334717, 0.000000, 89.100021, 0.000000, 300.00);
 CreateObject(1251, 1917.825683, -1787.998413, 12.323995, 0.000000, 89.100021, 0.000000, 300.00);
 CreateObject(1251, 1920.496337, -1788.007446, 12.318744, 0.000000, 89.800033, 0.000000, 300.00);
 CreateObject(1251, 1923.158203, -1788.007446, 12.321924, 0.000000, 89.500038, 0.000000, 300.00);
 CreateObject(1251, 1926.030029, -1788.007446, 12.326932, 0.000000, 89.500038, 0.000000, 300.00);
 CreateObject(1251, 1928.869262, -1788.037475, 12.321735, 0.000000, 89.500038, 0.000000, 300.00);
 CreateObject(1251, 1931.516723, -1787.987426, 12.319110, 0.000000, 89.500106, 0.000000, 300.00);
 CreateObject(1270, 1930.131469, -1787.294555, 13.162816, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1270, 1927.494750, -1787.294189, 13.152821, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1270, 1924.493164, -1787.294189, 13.152821, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1270, 1921.652832, -1787.294189, 13.152821, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1270, 1919.172485, -1787.294189, 13.152821, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1270, 1916.281494, -1787.294189, 13.152821, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1364, 1951.349121, -1763.992553, 13.206875, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1319, 1946.932495, -1771.397094, 12.794534, 0.000000, -0.499999, 92.900169, 300.00);
 CreateObject(1364, 1951.445190, -1776.587280, 13.206875, 0.000000, 0.000000, -179.499954, 300.00);
 CreateObject(1319, 1946.900878, -1768.715576, 12.817954, 0.000000, -0.499999, 91.000190, 300.00);
 CreateObject(19425, 1951.919677, -1790.747314, 12.382812, 0.000000, 0.000000, -89.699981, 300.00);
 CreateObject(19425, 1951.902465, -1787.466796, 12.382812, 0.000000, 0.000000, -89.699981, 300.00);
 CreateObject(19425, 1951.887817, -1784.184692, 12.382812, 0.000000, 0.000000, -89.699981, 300.00);
 CreateObject(1214, 1941.649536, -1782.190551, 12.150593, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1214, 1942.280151, -1783.851318, 12.150593, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1214, 1943.501586, -1785.142333, 12.150593, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1214, 1944.973022, -1786.083251, 12.150593, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1214, 1946.433715, -1786.623779, 12.150593, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1214, 1948.155395, -1786.703857, 12.150593, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1214, 1950.077148, -1786.773925, 12.150593, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(997, 1931.715576, -1786.362915, 12.382812, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(997, 1931.715576, -1778.091552, 12.382812, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1319, 1934.857177, -1784.681762, 12.652816, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1319, 1934.857177, -1782.520874, 12.652816, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1319, 1934.857177, -1780.259765, 12.652816, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(997, 1931.695556, -1774.499389, 12.382812, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(997, 1931.695556, -1767.378662, 12.382812, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1319, 1934.857177, -1773.036254, 12.652816, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1319, 1934.857177, -1771.065673, 12.652816, 0.000000, 0.000000, 0.000000, 300.00);
 CreateObject(1319, 1934.857177, -1769.025024, 12.652816, 0.000000, 0.000000, 0.000000, 300.00);
 



// Mapeo Casas Idlewood By Frann (Textura)
	new Texturaa;
	Texturaa = CreateDynamicObject(5475, 1977.83594, -1569.04688, 19.07030,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(Texturaa, 5,  4004, "civic07_lan", "oldbrwall1_LA", -1);
	SetDynamicObjectMaterial(Texturaa, 6,  4004, "civic07_lan", "oldbrwall1_LA", -1);
	SetDynamicObjectMaterial(Texturaa, 4,  4004, "civic07_lan", "oldbrwall2_LA", -1);
	SetDynamicObjectMaterial(Texturaa, 7,  4004, "civic07_lan", "oldbrwall1_LA", -1);


	Texturaa = CreateDynamicObject(11426, 1990.37415, -1578.56384, 19.59760,   0.00000, 0.00000, 45.36000);
	SetDynamicObjectMaterial(Texturaa, 0, 4004, "civic07_lan", "oldbrwall1_LA", -1);
	SetDynamicObjectMaterial(Texturaa, 1, 4004, "civic07_lan", "oldbrwall1_LA", -1);

	Texturaa = CreateDynamicObject(11426, 1987.07104, -1581.91772, 19.59140,   0.00000, 0.00000, 45.36000);
	SetDynamicObjectMaterial(Texturaa, 0, 4004, "civic07_lan", "oldbrwall1_LA", -1);
	SetDynamicObjectMaterial(Texturaa, 1, 4004, "civic07_lan", "oldbrwall1_LA", -1);

	Texturaa = CreateDynamicObject(11426, 1990.36145, -1578.57202, 20.10920,   0.00000, 180.00000, 45.36000);
	SetDynamicObjectMaterial(Texturaa, 0, 4004, "civic07_lan", "oldbrwall1_LA", -1);
	SetDynamicObjectMaterial(Texturaa, 1, 4004, "civic07_lan", "oldbrwall1_LA", -1);

	Texturaa = CreateDynamicObject(11426, 1987.06140, -1581.91467, 20.11200,   0.00000, 180.00000, -134.63992);
	SetDynamicObjectMaterial(Texturaa, 0, 4004, "civic07_lan", "oldbrwall1_LA", -1);
	SetDynamicObjectMaterial(Texturaa, 1, 4004, "civic07_lan", "oldbrwall1_LA", -1);


	Texturaa = CreateDynamicObject(11444, 2437.08740, -1300.91785, 26.55243,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(Texturaa, 0, 3697, "comedprj1_la", "comptwall32", -1);

	Texturaa = CreateDynamicObject(5474, 1931.64844, -1577.57031, 12.37600,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(Texturaa, 3,  19373, "all_walls", "desgreengrass", -1);
		
	return 1;
	}

	forward create_object_ext(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ);
	public create_object_ext(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ)
	{
		return CreateDynamicObject(modelid, X, Y, Z, rX, rY, rZ, 0, 0, -1, 1000.0, 500.0);
	}

	forward CreateObjectEx(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ, Float: DrawDistance);
	public CreateObjectEx(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ, Float: DrawDistance)
	{
		MAX_OBJECT_FIJOS++;
		return CreateObject(modelid, X, Y, Z, rX, rY, rZ, DrawDistance);
	}
