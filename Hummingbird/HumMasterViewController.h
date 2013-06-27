//
//  HumMasterViewController.h
//  Hummingbird
//
//  Created by flreey on 6/27/13.
//  Copyright (c) 2013 flreey. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HumDetailViewController;

#import <CoreData/CoreData.h>

@interface HumMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) HumDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
