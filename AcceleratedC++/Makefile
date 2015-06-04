include Inc.mk

gtest:
	cd $(3RD_LIB_DIST_PATH); unzip $(GTEST_FILE); cd $(GTEST_PATH);chmod +x configure; \
	./configure; make
gtestclean:
	rm -rf $(GTEST_PATH)
