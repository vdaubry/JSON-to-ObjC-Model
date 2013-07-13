//
//  NSArray+fillWithObjectsNamed.m
//  Youboox
//
//  Created by Vincent Daubry on 13/07/13.
//
//

#import "NSArray+fillWithObjectsNamed.h"
#import "NSObject+setValuesForKeysWithJSONDictionary.h"

@implementation NSArray (fillWithObjectsNamed)

- (NSArray*) fillWithObjectsNamed:(NSString*)className dateFormatter:(NSDateFormatter *)dateFormatter {
    NSMutableArray *arr = [NSMutableArray array];
    
    [self enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        id model = [[NSClassFromString(className) alloc] init];
        [model setValuesForKeysWithJSONDictionary:obj dateFormatter:dateFormatter];
        [arr addObject:model];
    }];
    
    return arr;
}

@end
