/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class SBTransientOverlayViewController;

@interface SBRemoteTransientOverlayDismissalRequest : NSObject {

	BOOL _animated;
	BOOL _shouldInvalidatePresentation;
	/*^block*/id _completionHandler;
	SBTransientOverlayViewController* _viewController;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated;                                  //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy) id completionHandler;                                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldInvalidatePresentation;                                //@synthesize shouldInvalidatePresentation=_shouldInvalidatePresentation - In the implementation block
@property (nonatomic,readonly) SBTransientOverlayViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(BOOL)isAnimated;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(SBTransientOverlayViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(BOOL)shouldInvalidatePresentation;
-(void)setShouldInvalidatePresentation:(BOOL)arg1 ;
@end
