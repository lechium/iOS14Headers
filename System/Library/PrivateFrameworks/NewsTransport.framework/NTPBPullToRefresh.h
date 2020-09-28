/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPullToRefresh : PBCodable <NSCopying> {

	NSString* _viewId;
	int _viewType;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasViewType; 
@property (assign,nonatomic) int viewType;                   //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) BOOL hasViewId; 
@property (nonatomic,retain) NSString * viewId;              //@synthesize viewId=_viewId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasViewType:(BOOL)arg1 ;
-(id)viewTypeAsString:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setViewType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasViewType;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)viewId;
-(BOOL)isEqual:(id)arg1 ;
-(int)StringAsViewType:(id)arg1 ;
-(void)setViewId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(int)viewType;
-(BOOL)hasViewId;
-(id)description;
-(id)dictionaryRepresentation;
@end
