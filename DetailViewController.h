//
//  DetailViewController.h
//  CustomAlertView
//
//  Created by YHIOS001 on 16/10/10.
//  Copyright © 2016年 YH_kongdw. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

