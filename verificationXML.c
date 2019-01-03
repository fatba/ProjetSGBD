#include <stdio.h>
#include <stdlib.h>
#include <libxml/parser.h>

void verific(xmlDocPtr docname) {
	xmlDocPtr doc;
	xmlNodePtr cur;
	doc = xmlParseFile(docname);
	if (doc == NULL ) {
		fprintf(stderr,"Fichier invalide. \n");
		return;
	}
}
