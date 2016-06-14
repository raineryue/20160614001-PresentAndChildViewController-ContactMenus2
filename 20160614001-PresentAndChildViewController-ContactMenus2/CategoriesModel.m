//
//  CategoriesModel.m
//  20160503001-PresentAndChildViewController-ContactMenus
//
//  Created by Rainer on 16/5/3.
//  Copyright © 2016年 Rainer. All rights reserved.
//

#import "CategoriesModel.h"

@implementation CategoriesModel

- (instancetype)initWithCategoriesDictionary:(NSDictionary *)dictionary {
    if (self = [super init]) {
        [self setValuesForKeysWithDictionary:dictionary];
    }
    
    return self;
}

+ (instancetype)categoriesWithDictionary:(NSDictionary *)dictionary {
    return [[self alloc] initWithCategoriesDictionary:dictionary];
}

@end
