/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardSerializationStorage <NSObject>
@required
-(void)appendString:(id)arg1;
-(void)appendFormat:(id)arg1;
-(void)appendData:(id)arg1;
-(unsigned long long)estimatedDataLength;
-(unsigned long long)currentLength;
-(id)insertionMarker;
-(void)insertString:(id)arg1 atMarker:(id)arg2;
-(void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;

@end
