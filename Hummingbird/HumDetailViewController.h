//
//  HumDetailViewController.h
//  Hummingbird
//
//  Created by flreey on 6/27/13.
//  Copyright (c) 2013 flreey. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HumDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
