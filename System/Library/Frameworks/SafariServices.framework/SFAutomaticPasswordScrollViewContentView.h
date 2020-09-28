/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol SFAutomaticPasswordScrollViewContentViewLayoutObserver;
@interface SFAutomaticPasswordScrollViewContentView : UIView {

	id<SFAutomaticPasswordScrollViewContentViewLayoutObserver> _layoutObserver;

}

@property (assign,nonatomic,__weak) id<SFAutomaticPasswordScrollViewContentViewLayoutObserver> layoutObserver;              //@synthesize layoutObserver=_layoutObserver - In the implementation block
-(void)layoutSubviews;
-(id<SFAutomaticPasswordScrollViewContentViewLayoutObserver>)layoutObserver;
-(void)setLayoutObserver:(id<SFAutomaticPasswordScrollViewContentViewLayoutObserver>)arg1 ;
@end
