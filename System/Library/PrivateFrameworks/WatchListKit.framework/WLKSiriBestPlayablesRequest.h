/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class NSArray;

@interface WLKSiriBestPlayablesRequest : WLKRequest {

	NSArray* _statsIDs;

}

@property (nonatomic,copy,readonly) NSArray * statsIDs;              //@synthesize statsIDs=_statsIDs - In the implementation block
-(id)init;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)statsIDs;
-(id)initWithStatsIDs:(id)arg1 ;
@end
