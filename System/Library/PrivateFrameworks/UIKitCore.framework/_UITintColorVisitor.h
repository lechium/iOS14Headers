/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIViewVisitor.h>

@class UIView;

@interface _UITintColorVisitor : _UIViewVisitor {

	unsigned long long _reasons;
	UIView* _originalVisitedView;
	UIView* _changedSubview;

}
-(BOOL)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5 ;
-(id)initWithTraversalDirection:(unsigned long long)arg1 ;
-(id)initWithNotificationReasons:(unsigned long long)arg1 ;
-(BOOL)_visitView:(id)arg1 ;
@end
