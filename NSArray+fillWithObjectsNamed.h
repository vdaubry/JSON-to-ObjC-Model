//
//  NSArray+fillWithObjectsNamed.h
//  Youboox
//
//  Created by Vincent Daubry on 13/07/13.
//
//

#import <Foundation/Foundation.h>

@interface NSArray (fillWithObjectsNamed)

- (NSArray*) fillWithObjectsNamed:(NSString*)className dateFormatter:(NSDateFormatter *)dateFormatter;

@end
