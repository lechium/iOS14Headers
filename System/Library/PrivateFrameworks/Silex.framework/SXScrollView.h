/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDScrollView.h>
#import <libobjc.A.dylib/SXAXElementOccluder.h>

@protocol SXScrollViewDelegate;
@class SXAXCustomRotorProvider, NSString;

@interface SXScrollView : TSDScrollView <SXAXElementOccluder> {

	id<SXScrollViewDelegate> _scrollViewDelegate;
	SXAXCustomRotorProvider* _customRotorProvider;

}

@property (nonatomic,retain) SXAXCustomRotorProvider * customRotorProvider;                   //@synthesize customRotorProvider=_customRotorProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SXScrollViewDelegate> scrollViewDelegate;              //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isBouncing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isBouncing;
-(id)accessibilityCustomRotors;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(SXAXCustomRotorProvider *)customRotorProvider;
-(BOOL)shouldOccludeAccessibilityElement:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCustomRotorProvider:(SXAXCustomRotorProvider *)arg1 ;
-(void)setScrollViewDelegate:(id<SXScrollViewDelegate>)arg1 ;
-(id<SXScrollViewDelegate>)scrollViewDelegate;
-(BOOL)_accessibilityScrollingEnabled;
@end

