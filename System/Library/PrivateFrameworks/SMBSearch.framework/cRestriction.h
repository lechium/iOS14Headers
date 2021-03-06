/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:11 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RestrictionProtocol.h>

@protocol RestrictionProtocol;
@class NSObject;

@interface cRestriction : NSObject <RestrictionProtocol> {

	int restrictId;
	unsigned ulType;
	unsigned weight;
	NSObject*<RestrictionProtocol> _restrictionObj;

}

@property (retain) NSObject*<RestrictionProtocol> restrictionObj;              //@synthesize restrictionObj=_restrictionObj - In the implementation block
@property (assign) int restrictId; 
@property (assign) unsigned ulType; 
@property (assign) unsigned weight; 
-(void)setWeight:(unsigned)arg1 ;
-(unsigned)ulType;
-(unsigned)weight;
-(void)setRestriction:(id)arg1 ;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(id)initWithType:(unsigned)arg1 Weight:(unsigned)arg2 ;
-(void)setRestrictionObj:(NSObject*<RestrictionProtocol>)arg1 ;
-(NSObject*<RestrictionProtocol>)restrictionObj;
-(int)restrictId;
-(void)setRestrictId:(int)arg1 ;
-(void)setUlType:(unsigned)arg1 ;
@end

