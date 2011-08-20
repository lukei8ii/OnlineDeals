//
//  RootViewController.h
//  OnlineDeals
//
//  Created by Shea Hunter on 8/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GDataXMLNode.h"
#import "GDataXMLElement+Extras.h"

@class WebViewController;

@interface RootViewController : UITableViewController {
    NSMutableArray *_allEntries;
    NSOperationQueue *_queue;
    NSArray *_feeds;
    WebViewController *_webViewController;
}

@property (retain) NSMutableArray *allEntries;
@property (retain) NSOperationQueue *queue;
@property (retain) NSArray *feeds;
@property (retain) WebViewController *webViewController;

- (void)parseFeed:(GDataXMLElement *)rootElement entries:(NSMutableArray *)entries;
- (void)parseRss:(GDataXMLElement *)rootElement entries:(NSMutableArray *)entries;
- (void)parseAtom:(GDataXMLElement *)rootElement entries:(NSMutableArray *)entries;

@end
