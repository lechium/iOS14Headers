/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol BNBannerSourceProviding <BSInvalidatable,BNSuspendable>
@property (nonatomic,readonly) long long destination; 
@property (nonatomic,copy,readonly) NSString * requesterIdentifier; 
@property (assign,nonatomic,__weak) id<BNBannerSourceDelegate> delegate; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@required
-(BOOL)revokeAllPresentablesWithReason:(id)arg1 userInfo:(id)arg2 error:(out id*)arg3;
-(NSString *)requesterIdentifier;
-(long long)destination;
-(id)layoutDescriptionWithError:(out id*)arg1;
-(BOOL)postPresentable:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id*)arg4;
-(BOOL)revokePresentableWithRequestIdentifier:(id)arg1 animated:(BOOL)arg2 reason:(id)arg3 userInfo:(id)arg4 error:(out id*)arg5;
-(void)setDelegate:(id)arg1;
-(id<BNBannerSourceDelegate>)delegate;
-(BOOL)isValid;

@end

