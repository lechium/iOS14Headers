/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIPowerDownViewInterface <NSObject>
@property (assign,nonatomic,__weak) id<SBUIPowerDownViewDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(void)showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(id<SBUIPowerDownViewDelegate>)delegate;
-(void)hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;

@end

