/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNChangeHistoryAnchor;

@interface CNIndexClientState : NSObject <NSSecureCoding> {

	BOOL _isFullSyncDone;
	long long _indexVersion;
	CNChangeHistoryAnchor* _fullSyncSnapshotAnchor;
	long long _fullSyncOffset;

}

@property (assign,nonatomic) long long indexVersion;                                      //@synthesize indexVersion=_indexVersion - In the implementation block
@property (assign,nonatomic) BOOL isFullSyncDone;                                         //@synthesize isFullSyncDone=_isFullSyncDone - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * fullSyncSnapshotAnchor;              //@synthesize fullSyncSnapshotAnchor=_fullSyncSnapshotAnchor - In the implementation block
@property (assign,nonatomic) long long fullSyncOffset;                                    //@synthesize fullSyncOffset=_fullSyncOffset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)clientStateWithData:(id)arg1 logger:(id)arg2 ;
-(id)data;
-(id)init;
-(BOOL)isFullSyncDone;
-(long long)indexVersion;
-(void)setIndexVersion:(long long)arg1 ;
-(void)setIsFullSyncDone:(BOOL)arg1 ;
-(long long)fullSyncOffset;
-(CNChangeHistoryAnchor *)fullSyncSnapshotAnchor;
-(void)setFullSyncOffset:(long long)arg1 ;
-(void)setFullSyncSnapshotAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

