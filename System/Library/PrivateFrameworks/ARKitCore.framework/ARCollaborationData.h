/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSUUID, NSSet;

@interface ARCollaborationData : NSObject <NSSecureCoding> {

	long long _priority;
	long long _version;
	double _timestamp;
	NSData* _vioData;
	long long _vioDataType;
	unsigned long long _vioSessionID;
	NSUUID* _anchorIdentifier;
	NSSet* _anchors;

}

@property (nonatomic,readonly) long long version;                            //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) double timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSData * vioData;                             //@synthesize vioData=_vioData - In the implementation block
@property (nonatomic,readonly) long long vioDataType;                        //@synthesize vioDataType=_vioDataType - In the implementation block
@property (nonatomic,readonly) unsigned long long vioSessionID;              //@synthesize vioSessionID=_vioSessionID - In the implementation block
@property (nonatomic,retain) NSUUID * anchorIdentifier;                      //@synthesize anchorIdentifier=_anchorIdentifier - In the implementation block
@property (nonatomic,retain) NSSet * anchors;                                //@synthesize anchors=_anchors - In the implementation block
@property (nonatomic,readonly) long long priority;                           //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)version;
-(void)setAnchors:(NSSet *)arg1 ;
-(double)timestamp;
-(NSSet *)anchors;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)vioData;
-(long long)priority;
-(void)setAnchorIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)anchorIdentifier;
-(unsigned long long)vioSessionID;
-(long long)vioDataType;
-(id)initWithVIOData:(id)arg1 type:(long long)arg2 sessionID:(unsigned long long)arg3 ;
@end
