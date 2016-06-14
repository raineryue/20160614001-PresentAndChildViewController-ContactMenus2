//
//  CategoriesModel.h
//  20160503001-PresentAndChildViewController-ContactMenus
//
//  Created by Rainer on 16/5/3.
//  Copyright © 2016年 Rainer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CategoriesModel : NSObject

@property (nonatomic, copy) NSString *highlighted_icon;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSArray *subcategories;

- (instancetype)initWithCategoriesDictionary:(NSDictionary *)dictionary;

+ (instancetype)categoriesWithDictionary:(NSDictionary *)dictionary;

@end
