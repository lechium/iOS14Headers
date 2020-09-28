/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:11 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SMBSearch/SMBSearch-Structs.h>
@class NSMutableArray;

@interface wspPropertySet : NSObject {

	network_uuid propSetGuid;
	int _propsetID;
	NSMutableArray* _propArr;

}

@property (assign) int propsetID;                         //@synthesize propsetID=_propsetID - In the implementation block
@property (retain) NSMutableArray * propArr;              //@synthesize propArr=_propArr - In the implementation block
-(void)addProperty:(id)arg1 ;
-(unsigned long long)propertyCount;
-(NSMutableArray *)propArr;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(int)propsetID;
-(id)initWithPropSetID:(int)arg1 ;
-(id)propertyForPropID:(unsigned)arg1 ;
-(void)setPropsetID:(int)arg1 ;
-(void)setPropArr:(NSMutableArray *)arg1 ;
@end
