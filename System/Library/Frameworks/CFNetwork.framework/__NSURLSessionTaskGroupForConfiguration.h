/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURLSessionConfiguration, NSURLSession;


@protocol __NSURLSessionTaskGroupForConfiguration <NSObject>
@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
@required
-(NSURLSession *)_groupSession;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)uploadTaskWithStreamedRequest:(id)arg1;
-(NSURLSessionConfiguration *)_groupConfiguration;
-(id)dataTaskWithRequest:(id)arg1;

@end

