/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOProtobufSessionTaskDelegate <NSObject>
@optional
-(id)protobufSession:(id)arg1 validateResponse:(id)arg2;
-(void)protobufSession:(id)arg1 willSendRequestForTask:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;

@end

