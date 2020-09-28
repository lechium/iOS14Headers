/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UIClickPresentation;


@protocol _UIClickPresentationAssisting <NSObject>
@property (nonatomic,retain) _UIClickPresentation * presentation; 
@property (nonatomic,copy) id lifecycleCompletion; 
@required
-(_UIClickPresentation *)presentation;
-(void)presentFromSourcePreview:(id)arg1 lifecycleCompletion:(/*^block*/id)arg2;
-(void)dismissWithReason:(unsigned long long)arg1 alongsideActions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(id)initWithClickPresentation:(id)arg1;
-(void)setLifecycleCompletion:(/*^block*/id)arg1;
-(id)lifecycleCompletion;
-(void)setPresentation:(id)arg1;

@end
