/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MOVStreamWriterDelegate <MOVStreamWriterDelegateDeprecationNominates>
@optional
-(void)streamWriterEncounteredAnError:(id)arg1;
-(void)streamWriter:(id)arg1 changedStatusTo:(long long)arg2;
-(void)streamWriter:(id)arg1 inputForStream:(id)arg2 changedIsReadyStatusTo:(BOOL)arg3;
-(BOOL)streamWriter:(id)arg1 encodedBuffer:(opaqueCMSampleBufferRef)arg2 pts:(SCD_Struct_Ti7)arg3 metadata:(id)arg4 forStream:(id)arg5;
-(void)streamWriter:(id)arg1 writingSessionDidStartAtTime:(SCD_Struct_Ti7)arg2 stream:(id)arg3 mediaType:(long long)arg4;

@end

