/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UINavigationController, UIViewController, IKAppTabBar;


@protocol TVAppRootViewController <NSObject>
@property (nonatomic,readonly) UINavigationController * currentNavigationController; 
@property (nonatomic,readonly) UIViewController * currentViewController; 
@property (nonatomic,readonly) id<IKAppNavigationController> appNavigationController; 
@property (nonatomic,readonly) IKAppTabBar * appTabBar; 
@required
-(UIViewController *)currentViewController;
-(UINavigationController *)currentNavigationController;
-(void)setAppNavigationControllersDelegate:(id)arg1;
-(id<IKAppNavigationController>)appNavigationController;
-(IKAppTabBar *)appTabBar;

@end

