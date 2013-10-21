//
//  DetailViewController.h
//  iFlight
//
//  Created by Pranjal Bora on 21/10/13.
//  Copyright (c) 2013 Pranjal Bora. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
