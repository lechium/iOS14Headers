/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIStatusBarStyleRequest;

@interface CCUIStatusBarStyleSnapshot : NSObject <NSCopying> {

	BOOL _hidden;
	NSString* _hiddenPartIdentifier;
	UIStatusBarStyleRequest* _leadingStyleRequest;
	UIStatusBarStyleRequest* _trailingStyleRequest;
	CGRect _avoidanceFrame;
	UIEdgeInsets _statusBarInsets;

}

@property (getter=isHidden,nonatomic,readonly) BOOL hidden;                                      //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,copy,readonly) NSString * hiddenPartIdentifier;                             //@synthesize hiddenPartIdentifier=_hiddenPartIdentifier - In the implementation block
@property (nonatomic,copy,readonly) UIStatusBarStyleRequest * leadingStyleRequest;               //@synthesize leadingStyleRequest=_leadingStyleRequest - In the implementation block
@property (nonatomic,copy,readonly) UIStatusBarStyleRequest * trailingStyleRequest;              //@synthesize trailingStyleRequest=_trailingStyleRequest - In the implementation block
@property (nonatomic,readonly) CGRect avoidanceFrame;                                            //@synthesize avoidanceFrame=_avoidanceFrame - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets statusBarInsets;                                     //@synthesize statusBarInsets=_statusBarInsets - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isHidden;
-(CGRect)avoidanceFrame;
-(UIEdgeInsets)statusBarInsets;
-(id)initWithHidden:(BOOL)arg1 hiddenPartIdentifier:(id)arg2 leadingStyleRequest:(id)arg3 trailingStyleRequest:(id)arg4 statusBarInsets:(UIEdgeInsets)arg5 avoidanceFrame:(CGRect)arg6 ;
-(NSString *)hiddenPartIdentifier;
-(UIStatusBarStyleRequest *)leadingStyleRequest;
-(UIStatusBarStyleRequest *)trailingStyleRequest;
@end

