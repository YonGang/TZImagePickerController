//
//  SLEditImageController.h
//  DarkMode
//
//  Created by wsl on 2019/10/31.
//  Copyright © 2019 wsl. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger)
{
    DoneTypeNormal = 0,
    DoneTypeAlert = 1
}DoneType;

@interface SLEditImageController : UIViewController
@property (nonatomic, strong) UIImage *image; //当前拍摄的照片
@property (nonatomic, copy) void (^didFinishEditPhoto)(UIImage * _Nullable coverImage);
@property (nonatomic, assign) DoneType type;
@end

NS_ASSUME_NONNULL_END
