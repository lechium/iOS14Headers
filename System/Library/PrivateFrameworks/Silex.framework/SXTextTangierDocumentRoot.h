/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSKDocumentRoot.h>

@class UIViewController, TSSStylesheet;

@interface SXTextTangierDocumentRoot : TSKDocumentRoot {

	UIViewController* _viewController;
	TSSStylesheet* _aStylesheet;

}

@property (nonatomic,readonly) TSSStylesheet * aStylesheet;                         //@synthesize aStylesheet=_aStylesheet - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(UIViewController *)viewController;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(id)stylesheet;
-(TSSStylesheet *)aStylesheet;
@end
