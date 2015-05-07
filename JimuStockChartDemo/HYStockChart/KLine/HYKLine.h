//
//  HYKLine.h
//  JimuStockChartDemo
//
//  Created by jimubox on 15/5/4.
//  Copyright (c) 2015年 jimubox. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HYKLineModel.h"
#import "HYStockModel.h"

/************************K线************************/
@interface HYKLine : NSObject

/**
 *  K线模型
 */
@property(nonatomic,strong) HYKLineModel *kLineModel;

/**
 *  stockModel模型
 */
@property(nonatomic,strong) HYStockModel *stockModel;

/**
 *  最大的Y
 */
@property(nonatomic,assign) CGFloat maxY;

/**
 *  是否需要画时间
 */
@property(nonatomic,assign) BOOL isNeedDrawDate;

/**
 *  根据context初始化
 */
-(instancetype)initWithContext:(CGContextRef)context;

/**
 *  绘制K线
 */
-(void)draw;

@end
