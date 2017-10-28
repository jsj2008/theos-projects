
%hook GADMobileAds

+(void) configureWithApplicationID:(NSString*)arg {
    exit(0);
    NSLog(@"Hello");
}

-(id) init {
    return nil;
}

%end


%hook GADBannerView

-(NSString*) adUnitID {
    return nil;
}

-(id) adView {
    return nil;
}

-(id) delegate {
    return nil;
}

-(id) adSize {
    return nil;
}

%end
