//
//  RootViewController.h
//  OnlineDeals
//
//  Created by Shea Hunter on 8/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UITableViewController {
    NSMutableArray *_allEntries;
}

@property (retain) NSMutableArray *allEntries;

@end
