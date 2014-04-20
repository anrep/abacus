//
//  UIConstraints.h
//  Abacus
//
//  Created by Anil K Nellutla on 4/15/14.
//  Copyright (c) 2014 Anil K Nellutla. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIConfig : NSObject
+(CGRect) getNumberViewBounds:(CGRect)containerViewBounds;
+(CGRect) getAbacusViewBounds:(CGRect)containerViewBounds;
+(NSInteger) getNumOfColumns;
+(CGRect) getColumnViewBounds:(CGRect)abacusViewBounds forColumn:(NSInteger)columnIndex;
+(CGRect) getRowViewBounds:(CGRect)abacusBounds;
+(CGRect) getColumnBounds:(CGRect)columnViewBounds;
+(CGRect) getBeadViewBounds:(CGRect)columnViewBounds forBead:(NSInteger)beadIndex;
@end