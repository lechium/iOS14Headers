/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/_UIPreferredContentSizeRelayingContainer.h>

@class NSString;

@interface _UIPreferredContentSizeRelayingNavigationController : UINavigationController <_UIPreferredContentSizeRelayingContainer> {

	/*^block*/id _preferredContentSizeDidChange;

}

@property (nonatomic,copy) id preferredContentSizeDidChange;              //@synthesize preferredContentSizeDidChange=_preferredContentSizeDidChange - In the implementation block
@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(id)preferredContentSizeDidChange;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)setPreferredContentSizeDidChange:(id)arg1 ;
@end

