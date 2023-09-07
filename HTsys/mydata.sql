/*
 Navicat Premium Data Transfer

 Source Server         : localhost_3306
 Source Server Type    : MySQL
 Source Server Version : 80029
 Source Host           : localhost:3306
 Source Schema         : mydata

 Target Server Type    : MySQL
 Target Server Version : 80029
 File Encoding         : 65001

 Date: 15/05/2022 20:29:51
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for mydetails
-- ----------------------------
DROP TABLE IF EXISTS `mydetails`;
CREATE TABLE `mydetails`  (
  `id` int NOT NULL AUTO_INCREMENT COMMENT '序号',
  `class` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '版块分类',
  `project` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '项目名称',
  `name` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '负责人',
  `planMoney` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '立项金额',
  `realMoney` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '合同金额',
  `status` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '竣工状态',
  `calculateAll` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NULL DEFAULT NULL COMMENT '当前总节点达成率',
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 4 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of mydetails
-- ----------------------------
INSERT INTO `mydetails` VALUES (1, 'CV车架车间', '车架模压物流改善项目', '张三', '540', '480', '已竣工', '96.5%');
INSERT INTO `mydetails` VALUES (2, 'PV总装车间', '乘用车智慧物流项目', '张三', '900', '800', '未竣工', '82.2%');
INSERT INTO `mydetails` VALUES (3, 'CV总装车间', '燃油加注机项目', '李四', '34', '28.3', '未竣工', '91.6%');
INSERT INTO `mydetails` VALUES (4, 'PV焊装车间', '焊装B1线柔性化改造项目', '王五', '7566.6', '6985.3', '未竣工', '95.3%');
INSERT INTO `mydetails` VALUES (5, 'PV焊装车间', '焊装D线顶盖涂胶改造项目', '张三', '563.2', '485.2', '已竣工', '94.2%');
INSERT INTO `mydetails` VALUES (6, 'PV焊装车间', '焊装B2线地板线自动化改造项目', '李四', '668', '618.3', '未竣工', '78.1%');
INSERT INTO `mydetails` VALUES (7, 'CV车架车间', '零部件物流改善项目', '王五', '722', '698.9', '未竣工', '86.8%');
INSERT INTO `mydetails` VALUES (8, 'CV总装车间', '新能源车柔性化改造项目', '王五', '366', '248.9', '未竣工', '91.1%');
INSERT INTO `mydetails` VALUES (9, 'PV涂装车间', 'CM5L过线能力提升项目', '李四', '120', '112.6', '已竣工', '89.9%');
INSERT INTO `mydetails` VALUES (10, 'CV涂装车间', 'H5B过线工装项目', '赵六', '23', '19.8', '已竣工', '78.8%');
INSERT INTO `mydetails` VALUES (13, 'PV总装车间', '玻璃涂胶线改造项目', '王五', '63.4', '48.1', '已竣工', '78.2%');
INSERT INTO `mydetails` VALUES (14, 'PV总装车间', '车载蓝牙控制器诊断仪项目', '李四', '78', '76.2', '未竣工', '88.1%');
INSERT INTO `mydetails` VALUES (15, 'CV车架车间', '1250T自动上下料项目', '赵六', '211', '235', '未竣工', '96.8%');
INSERT INTO `mydetails` VALUES (16, 'PV焊装车间', 'WBS提速改造项目', '梁七', '478', '456.3', '未竣工', '90.2%');
INSERT INTO `mydetails` VALUES (17, 'CV焊装车间', '前地板弧焊自动化改造项目', '李四', '33', '45.3', '已竣工', '82.3%');
INSERT INTO `mydetails` VALUES (18, '车桥车间', '齿轮油加注项目', '梁七', '883', '768.9', '已竣工', '91.2%');
INSERT INTO `mydetails` VALUES (19, 'PV涂装车间', 'VOC排放动态监测项目', '赵六', '163', '154.3', '未竣工', '77.5%');
INSERT INTO `mydetails` VALUES (20, 'CV焊装车间', '左右侧围自动化改造项目', '梁七', '412.3', '366.7', '已竣工', '79.8%');
INSERT INTO `mydetails` VALUES (21, 'CV总装车间', '整线AVI项目', '赵六', '65', '66.9', '未竣工', '92.2%');
INSERT INTO `mydetails` VALUES (22, 'CV总装车间', '智能物流门项目', '王五', '88', '86.2', '已竣工', '87.6%');
INSERT INTO `mydetails` VALUES (24, 'PV涂装车间', '滚珠走色适应性改造项目', '梁七', '256', '242.5', '未竣工', '88.9%');
INSERT INTO `mydetails` VALUES (25, 'PV总装车间', 'CAN总线诊断仪项目', '张三', '12', '11.6', '未竣工', '92.3%');
INSERT INTO `mydetails` VALUES (26, 'PV焊装车间', '侧围涂胶泵改造项目', '张三', '156', '144', '已竣工', '78.2%');
INSERT INTO `mydetails` VALUES (27, 'CV焊装车间', '地板线弧焊改造项目', '李四', '201', '189', '未竣工', '91.3%');
INSERT INTO `mydetails` VALUES (28, 'PV涂装车间', '烘干炉改造项目', '梁七', '333', '345', '已竣工', '96.2%');
INSERT INTO `mydetails` VALUES (29, 'CV总装车间', '轮胎线视觉系统改造项目', '王五', '56', '45.3', '未竣工', '88.3%');

-- ----------------------------
-- Table structure for user
-- ----------------------------
DROP TABLE IF EXISTS `user`;
CREATE TABLE `user`  (
  `id` int NOT NULL AUTO_INCREMENT,
  `username` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `password` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB AUTO_INCREMENT = 5 CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of user
-- ----------------------------
INSERT INTO `user` VALUES (1, '张三', '123456');
INSERT INTO `user` VALUES (2, '李四', '123');
INSERT INTO `user` VALUES (3, '王五', '456');
INSERT INTO `user` VALUES (4, '孙悟空', '888');
INSERT INTO `user` VALUES (5, '猪八戒', '123');
INSERT INTO `user` VALUES (6, '唐僧', '456');

SET FOREIGN_KEY_CHECKS = 1;
