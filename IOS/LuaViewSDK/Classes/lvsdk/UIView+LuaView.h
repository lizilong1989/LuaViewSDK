//
//  UIView+LuaView.h
//  LVSDK
//
//  Created by dongxicheng on 7/24/15.
//  Copyright (c) 2015 dongxicheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LVHeads.h"

@interface UIView(UIViewLuaView)<LVProtocal>

@property(nonatomic,weak) LView* lv_lview;
@property(nonatomic,assign) LVUserDataView* lv_userData;
@property(nonatomic,assign) CGFloat lv_rotation;
@property(nonatomic,assign) CGFloat lv_rotationX;
@property(nonatomic,assign) CGFloat lv_rotationY;
@property(nonatomic,assign) CGFloat lv_scaleX;
@property(nonatomic,assign) CGFloat lv_scaleY;

@property(nonatomic,assign) NSUInteger lv_align;

- (void) lv_callLuaByKey1:(NSString*) key1;
- (void) lv_callLuaByKey1:(NSString*) key1 key2:(NSString*) key2;
- (void) lv_buttonCallBack;


- (void) lv_alignSubviews;

- (void) lv_alignSelfWithSuperRect:(CGRect) rect;

@end
