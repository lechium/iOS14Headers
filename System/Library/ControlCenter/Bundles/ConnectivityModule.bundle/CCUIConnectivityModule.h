/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIContentModuleContext, NSHashTable, NSString;

@interface CCUIConnectivityModule : NSObject <CCUIContentModule> {

	CCUIContentModuleContext* _contentModuleContext;
	NSHashTable* _contentViewControllers;

}

@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentModuleContext:(id)arg1 ;
-(id)init;
-(id)contentViewControllerForContext:(id)arg1 ;
@end
