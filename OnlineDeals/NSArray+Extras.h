//
//  NSArray+Extras.h
//  OnlineDeals
//
//  Created by Shea Hunter on 8/14/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSArray (Extras)

typedef NSInteger (^compareBlock)(id a, id b);

- (NSUInteger)indexForInsertingObject:(id)anObject sortedUsingBlock:(compareBlock)compare;

@end
