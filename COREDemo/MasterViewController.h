//
//  MasterViewController.h
//  COREDemo
//
//  Created by Santosh on 4/9/13.
//  Copyright (c) 2013 iPhoneDev Zone. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
