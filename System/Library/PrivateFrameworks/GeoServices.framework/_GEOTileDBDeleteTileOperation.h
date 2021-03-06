/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOTileDBWriteOperation.h>

@class NSString;

@interface _GEOTileDBDeleteTileOperation : NSObject <_GEOTileDBWriteOperation> {

	GEOTileKey _key;

}

@property (nonatomic,readonly) GEOTileKey* key; 
@property (nonatomic,readonly) unsigned long long sizeInBytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEOTileKey*)key;
-(BOOL)canIncreaseDataSizeInDB;
-(BOOL)isSupercededByOperation:(id)arg1 ;
-(unsigned long long)sizeInBytes;
-(id)initWithTileKey:(const GEOTileKey*)arg1 ;
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4 ;
-(void)performWithDB:(id)arg1 ;
@end

