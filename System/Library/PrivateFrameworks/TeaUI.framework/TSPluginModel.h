/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TeaUI/TeaUI-Structs.h>
@class NSString, UIViewController;

@interface TSPluginModel : NSObject {

	 identifier;
	 revision;
	 size;
	 pluggableViewController;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long revision; 
@property (readonly,nonatomic) CGSize size; 
@property (readonly,nonatomic) UIViewController * viewController; 
@property (readonly,nonatomic) long long hash; 
-(NSString *)identifier;
-(long long)revision;
-(UIViewController *)viewController;
-(id)init;
-(CGSize)size;
-(long long)hash;
@end

