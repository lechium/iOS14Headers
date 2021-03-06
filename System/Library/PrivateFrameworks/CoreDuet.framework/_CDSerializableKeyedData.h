/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface _CDSerializableKeyedData : NSObject {

	NSData* _encodedKey;
	unsigned char _keyChecksum;
	unsigned char _dataChecksum;
	BOOL _dataChecksumNeedsUpdate;
	NSString* _key;
	NSData* _data;

}
+(id)log;
+(unsigned char)byteChecksumOfData:(id)arg1 ;
+(id)dataDeseralizedFrom:(void*)arg1 maxSize:(unsigned long long)arg2 checksum:(char*)arg3 bytesRead:(unsigned long long*)arg4 ;
+(id)errorForInvalidKeyEncoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)serializeData:(id)arg1 withChecksum:(unsigned char)arg2 to:(void*)arg3 ;
@end

