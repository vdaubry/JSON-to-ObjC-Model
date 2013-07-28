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
- (NSArray*) fillWithObjectsNamed:(NSString*)className dateFormatter:(NSDateFormatter *)dateFormatter withRootElement:(NSString*)rootElement;
- (NSArray*) fillWithManagedObjectsNamed:(NSString*)className dateFormatter:(NSDateFormatter *)dateFormatter withRootElement:(NSString*)rootElement;

@end
