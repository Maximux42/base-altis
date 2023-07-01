-- interpole
CREATE TABLE `interpol` ( 
`id` INT(6) NOT NULL AUTO_INCREMENT, 
`prenom` VARCHAR(32) NOT NULL, 
`nom` VARCHAR(32) NOT NULL,
 `naissance` TEXT NOT NULL, 
`adresse` TEXT NOT NULL, 
`ville` TEXT NOT NULL, 
`numero` VARCHAR(32) NOT NULL DEFAULT '0', 
`yeux` TEXT NOT NULL, 
`details` TEXT NOT NULL, 
`insert_time` TEXT NOT NULL,
PRIMARY KEY (`id`) 
) COLLATE='utf8mb4_general_ci' ENGINE=InnoDB ROW_FORMAT=DYNAMIC;

CREATE TABLE `interpol_crimes` ( 
`id` INT(6) NOT NULL AUTO_INCREMENT, 
`interpol_id` INT(6) NOT NULL, 
`crime` VARCHAR(64) NOT NULL,
 `price` INT(100) NOT NULL,
 `payed` TINYINT(1) NOT NULL DEFAULT '0', 
`insert_time` TEXT NOT NULL,
PRIMARY KEY (`id`) 
) COLLATE='utf8mb4_general_ci' ENGINE=InnoDB;
-- ticket system
ALTER TABLE `vehicles` ADD COLUMN `contravention` TEXT NULL;
-- Growing system
CREATE TABLE `plantes` (
`id` INT(6) NOT NULL AUTO_INCREMENT,
`classname` VARCHAR(32) NOT NULL,
`position` TEXT NOT NULL,
`created` TEXT NOT NULL,
`last_watering` TEXT NOT NULL,
PRIMARY KEY (`id`)
) COLLATE='utf8_general_ci' ENGINE=MyISAM;
-- Company system
ALTER TABLE `vehicles` ADD COLUMN `entreprise_id` INT(10) NOT NULL DEFAULT '0';

CREATE TABLE `entreprises_logs` (
`id` INT(6) NOT NULL AUTO_INCREMENT,
`entreprise_id` INT(6) NOT NULL DEFAULT '0',
`name` VARCHAR(32) NOT NULL,
`value` INT(6) NOT NULL DEFAULT '0',
`type` INT(1) NOT NULL DEFAULT '0',
`other` INT(1) NOT NULL DEFAULT '0',
`insert_time` TEXT NOT NULL,
PRIMARY KEY (`id`)
) COLLATE='utf8_general_ci'ENGINE=InnoDB ROW_FORMAT=DYNAMIC;

CREATE TABLE `entreprises` ( 
`id` INT(6) NOT NULL AUTO_INCREMENT, 
`name` VARCHAR(32) NOT NULL, 
`pdg_pid` VARCHAR(17) NOT NULL DEFAULT '0', 
`pdg_name` VARCHAR(32) NOT NULL,
 `members` TEXT NOT NULL, 
`prices` TEXT NOT NULL,
 `items_stock` TEXT NOT NULL, 
`max_stock` INT(3) NOT NULL DEFAULT '0', 
`items_stock_2` TEXT NOT NULL, 
`max_stock_2` INT(3) NOT NULL DEFAULT '0', 
`bankacc` INT(100) NOT NULL DEFAULT '0',
 `position` VARCHAR(32) NULL DEFAULT NULL, 
`objects` TEXT NOT NULL, 
`type` VARCHAR(32) NOT NULL,
 `active` TINYINT(1) NOT NULL DEFAULT '1',
 `insert_time` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP, 
PRIMARY KEY (`id`) 
) COLLATE='utf8_general_ci' ENGINE=InnoDB;
