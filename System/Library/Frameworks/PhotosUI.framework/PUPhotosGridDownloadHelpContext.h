/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PHResourceLocalAvailabilityRequest, NSString;

@interface PUPhotosGridDownloadHelpContext : NSObject {

	PHResourceLocalAvailabilityRequest* _resourceLocalAvailabilityRequest;
	NSString* _gridProgressIdentifier;
	/*^block*/id _downloadHandler;

}

@property (nonatomic,retain) PHResourceLocalAvailabilityRequest * resourceLocalAvailabilityRequest;              //@synthesize resourceLocalAvailabilityRequest=_resourceLocalAvailabilityRequest - In the implementation block
@property (nonatomic,retain) NSString * gridProgressIdentifier;                                                  //@synthesize gridProgressIdentifier=_gridProgressIdentifier - In the implementation block
@property (nonatomic,copy) id downloadHandler;                                                                   //@synthesize downloadHandler=_downloadHandler - In the implementation block
-(id)downloadHandler;
-(PHResourceLocalAvailabilityRequest *)resourceLocalAvailabilityRequest;
-(void)setResourceLocalAvailabilityRequest:(PHResourceLocalAvailabilityRequest *)arg1 ;
-(NSString *)gridProgressIdentifier;
-(void)setGridProgressIdentifier:(NSString *)arg1 ;
-(void)setDownloadHandler:(id)arg1 ;
@end

