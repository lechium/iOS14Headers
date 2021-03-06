/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol WBSMobileAssetControllerProtocol
@property (__weak) id<WBSMobileAssetControllerDelegate> delegate; 
@property (nonatomic,retain) NSDate * lastUpdateDate; 
@property (nonatomic,readonly) double updateInterval; 
@required
-(NSDate *)lastUpdateDate;
-(void)setDelegate:(id)arg1;
-(double)updateInterval;
-(id<WBSMobileAssetControllerDelegate>)delegate;
-(void)setLastUpdateDate:(id)arg1;
-(void)queryURL:(/*^block*/id)arg1;

@end

