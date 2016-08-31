//
//  DownLoadView.h
//  DownLoadView_Animation_Demo
//
//  Created by admin on 16/8/31.
//  Copyright © 2016年 AlezJi. All rights reserved.
//

#import <UIKit/UIKit.h>

#define XNColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]


@interface DownLoadView : UIControl

/**
 *  进度:0~1
 */
@property (nonatomic, assign) CGFloat progress;
/**
 *  进度宽
 */
@property (nonatomic, assign) CGFloat progressWidth;
/**
 *  停止动画
 */
- (void)stopAllAnimations;
/**
 *  block 形式点击回调
 */
//@property (nonatomic, strong) void (^ didClickBlock)();


@end
